/* No. 96 hit and blow その3 ☆☆☆☆☆
No.95に続いて、正解と一致するまで繰り返して予想させるようにしてゲームを完成させよう。
【実行例、下線部は入力例】
$ ./knock96
1回目
4桁の数字を入力: 1234
0 hit, 2 blow
2回目
4桁の数字を入力: 5678
0 hit, 1 blow
3回目
4桁の数字を入力: 9090
0 hit, 1 blow
4回目
4桁の数字を入力: 9912
0 hit, 2 blow
5回目
4桁の数字を入力: 0301
0 hit, 2 blow
6回目
4桁の数字を入力: 6565
1 hit, 0 blow
7回目
4桁の数字を入力: 4529
1 hit, 0 blow
8回目
4桁の数字を入力: 3169
正解
$
ヒント：入力からヒット・ブローのチェックまでを無限ループとし、
1回繰り返すごとに回数を増やしていく。4ヒットになったら正解として、
無限ループを終了する（break;を使うとよいだろう）。 */
#include <stdio.h>
#include <stdlib.h>

int main (void){
    int i, i2, inp, ran, i3, hit, blow;
    int four[6], targ[6];

    ran = rand();
    ran = ran % 10000;
    for ( i3 = 1; ; i3++ ){
        hit = 0;
        blow = 0;
        printf("%d回目\n", i3 );
        printf("4桁の数字を入力" );
        scanf("%d", &inp );
        printf("target = %d\n", ran );
        for ( i = 4, i2 = 1; i >= 1; i--, i2 = i2 * 10 ){
            four[i] = inp / i2 % 10;
            targ[i] = ran / i2 % 10;
    //        printf("%d %d\n", four[i], targ[i] );
        }
        for ( i = 4; i >= 1; i-- ){
            if ( four[i] == targ[i] ){
                hit++;
    //            printf("hit!\n");
                four[i] = -1 * i;
                targ[i] = -1 * i;
            }
        }
        for ( i = 4; i >= 1; i-- ){
            if ( targ[i] <= -1 && four[i] <= -1 ){
                continue;
            }
            for ( i2 = 1; i2 <= 4; i2++ ){
                if ( four[i] == targ[i2] ){
                    blow++;
                    break;
                }
            }
        }
        printf("%d hit、 %d blow\n", hit, blow );
        if ( hit == 4 ){
            printf("正解\n");
            break;
        }
    }
    return 0;
}
