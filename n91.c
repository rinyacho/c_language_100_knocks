/* No. 91 ブラックジャックその2 ☆☆☆☆
No.90で作ったブラックジャックゲームをさらに進化させよう。ブラックジャックでは、
最初に配られた2枚の合計では足りない場合、21を超えない限り何枚でもカードを追加で引くことができる。
合計が16以下の場合はもう一枚カードを引き、17以上になったら止める、
というルールで自動的にカードを引くプログラムを作成せよ。
【実行例、表示の方法はこの通りでなくてもよい】
$ ./knock91
8 6 : 合計14
もう一枚引きます
8 6 4 : 合計18
これでOKです
$ ./knock91
8 2 : 合計10
もう一枚引きます
8 2 3 : 合計13
もう一枚引きます
8 2 3 3 : 合計16
もう一枚引きます
8 2 3 3 5 : 合計21
これでOKです
$ ./knock91
K 5 : 合計15
もう一枚引きます
K 5 Q : 合計25
バストです
$
ヒント：何枚目まで引いたか覚えておく変数を作る。バストするか17以上になるまで引いた枚数を1つ増やし、
表示を繰り返す。手持ちのカードを覚えておく配列を別に作って、引いたカードをコピーする
ようにしてもよいだろう（対戦化するならこのような工夫が必要になる）。 */
#include <stdio.h>
#include <stdlib.h>
void printc();
int inputc( int num );

int main (void){
    int i, i2, ran, sum;
    int num[54];
    int card[11];
    int strength[15] = { 0, 11, 2, 3, 4, 5, 6, 7, 8, 9 , 10, 10, 10, 10 };

    for ( i = 1; i < 53; i++ ){
        num[i] = i;
    }
    for ( i = 1; i < 53; i++ ){
        ran = rand();
        ran = ran % 52 + 1;
        num[0] = num[i];
        num[i] = num[ran];
        num[ran] = num[0];
    }
    printf("シャッフル後\n");
    for ( i = 1; i < 53; i++ ){
        printc( num[i] );
    }
    printf("\n");
    for ( i2 = 2; i2 < 10; i2++ ){
        sum = 0;
        for ( i = 1; i <= i2; i++ ){
            card[i] = num[i];
            printc( card[i] );
        }
        for ( i = 1; i <= i2; i++ ){
            sum = sum + strength[ (card[i] + 3) / 4 ];
        }
        if ( sum >= 22 ){
            for ( i = 1; i <= i2; i++ ){
                if ( card[i] <= 4 ){
                    sum = sum - 10;
                    break;
                }
            }
        }
        printf("合計 %d\n", sum );
        if ( sum >= 22 ){
            printf("バストです\n");
            break;
        } else if ( sum >= 17 ){
            printf("これでOKです\n");
            break;
        } else {
            printf("もう1枚引きます\n"); 
        }
    }
    return 0;
}

void printc( int num ){
    printf("%d ", (num + 3) / 4 );
}
