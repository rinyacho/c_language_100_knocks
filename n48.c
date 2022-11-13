/* 最初に2以上の整数値を入力し、次の規則で計算し、計算回数と計算結果を表示し、計算結果が1になるまで繰り返すプログラムを作成せよ。
規則：ある値が偶数ならその値を1/2にする。奇数ならその値を3倍して1を足す。
【実行例、下線部は入力例】
$ ./knock48
input number: 3
1: 10
2: 5
3: 16
4: 8
5: 4
6: 2
7: 1
$ */
#include <stdio.h>
int main (void){
    int inp, b, c;

    scanf("%d", &inp );
    for ( b = 1; b < 8; b++ ){
        if ( inp % 2 == 0 ){
            inp = inp / 2;
        } else {
            inp = inp * 3 + 1;
        }
        printf("%d: %d\n", b, inp );
    }
    return 0;
}
