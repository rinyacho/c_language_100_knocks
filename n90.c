/* No. 90 ブラックジャックその1 ☆☆
トランプをシャッフルするプログラムはNo.84で作成した。これを使って、ブラックジャックゲームを
作ってみよう。ブラックジャックは、最初に2枚のカードを配り、2〜10は数字通り、JとQとKは10、
Aは1か11として合計し21に近いほど勝ちとなるが、21を超えると負け（バストと呼ぶ）というゲームである。
まず最初にトランプをシャッフルし、2枚を先頭から順番に引き、
それらのカードの数字（マークは無視してよい）と合計値を表示するプログラムを作成せよ。
【実行例、表示の方法はこの通りでなくてもよい】
$ ./knock90
2 7 : 合計9
$ ./knock90
9 J : 合計19
$ ./knock90
A K : 合計21
$
ヒント：2枚だけなのでAは11と数えるのでよいが、後のために、とりあえず11として合計値を計算し、
21を超える場合は1として数える（合計値から10を引く）とよい。 */
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
    card[1] = num[1];
    card[2] = num[2];
    printc( card[1] );
    printc( card[2] );
/*    for ( i = 1; i <= 2; i++ ){
        if ( card[i] <= 4 ){
            sum = sum + 10;
        }
    }   */
    sum = strength[(card[1]+3)/4] + strength[(card[2]+3)/4];
    if ( sum >= 22 ){
        for ( i = 1; i <= 2; i++ ){
            if ( card[i] <= 4 ){
                sum = sum - 10;
            }
        }
    }
    printf("合計 %d\n", sum );
    return 0;
}

void printc( int num ){
    printf("%d ", (num + 3) / 4 );
}

int inputc( int num ){
    int a;
    a = ( num + 3 ) / 4;
    return a;
}
