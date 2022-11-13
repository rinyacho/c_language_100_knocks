/* No. 95 hit and blow その2 ☆☆☆☆☆
No.94に続いて、ブローの数も数えて表示するプログラムを作成せよ。
（No.94のプログラムをコピーして、それに追加するとよい。）
【実行例、下線部は入力例】
$ ./knock95
4桁の数字を入力: 1234
target = 3295
1 hit, 1 blow
$ ./knock94
4桁の数字を入力: 1234
target = 3318
0 hit, 2 blow
$ ./knock94
4桁の数字を入力: 0012
target = 0210
2 hit, 2 blow
$
ヒント：ヒットはブローよりも優先されるので、まずヒットのチェックを行う。
この時、ヒットした数字は再びブローでチェックしてはいけないことに注意。
また、ブローをチェックする際にも、一度ブローと判定した数字はチェックしてはならない
（正解、予想値ともに）。再びチェックしてしまうことを防止する方法は様々考えられるが、
例えばヒットやブローになった桁を覚えておくフラグ変数を使う、
ヒットやブローになった数字を使わない数字（例えば-1）に書き換えてチェック対象から外す
（この方法の場合は元の正解を消してしまわないように配列をコピーしておくとよいだろう）、などが考えられる。 */
#include <stdio.h>
#include <stdlib.h>

int main (void){
    int i, i2, inp, ran;
    int hit = 0, blow = 0;
    int four[6], targ[6];

    ran = rand();
    ran = ran % 10000;

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
    return 0;
}
