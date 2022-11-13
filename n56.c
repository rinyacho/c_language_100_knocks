/* No. 56 2進数変換
0〜65535の整数値を入力させ、入力値を16桁の2進数に変換して表示するプログラムを作成せよ。

【実行例、下線部は入力例】
$ ./knock56
input number: 127
0000000001111111
$ ./knock56
input number: 10000
0010011100010000
$ ./knock56
input number: 65535
1111111111111111
$
ヒント：16桁分の2進数を記憶する配列を用意する。2で割った余り(0か1)を最初の桁の値とし、
2で割った値を新たな値とし、さらに2で割った余りを次の桁の値とする。
これを繰り返していけば1の桁から順に値が求まるので、表示するときは逆順に表示すればよい。 */

#include <stdio.h>
int main (void){
    int inp, i;
    int num[17];
    printf("input number >");
    scanf("%d", &inp );
    for ( i = 0; i < 16; i++ ){
        num[i] = 0;
    }
    for ( i = 0; i < 16; i++ ){
        num[i] = inp % 2;
        inp = inp / 2;
        if ( inp == 1 ){    // 数字が１になった場合
            i = i + 1;
            num[i] = 1;
            break;
        }
    }
    for ( i = 15; i >= 0; i-- ){
        printf("%d", num[i] );
    }
    printf("\n");
    return 0;
}