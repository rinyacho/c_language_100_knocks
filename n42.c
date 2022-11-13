/*
No. 42 小さい順?
整数値を3つ入力させ、それらの値が小さい順（等しくてもよい）に並んでいるか判定し、
小さい順に並んでいる場合はOK、そうなっていない場合はNGと表示するプログラムを作成せよ。
【実行例、下線部は入力例】
$ ./knock42
input number 1: 1
input number 2: 2
input number 3: 3
OK
$ ./knock42
input number 1: 1
input number 2: 1
input number 3: 3
OK
$ ./knock42
input number 1: 2
input number 2: 1
input number 3: 3
NG
$
*/
#include <stdio.h>
int main (void){
    int a, b, c;

    printf("input number 1 > ");
    scanf("%d", &a );
    printf("input number 2 > ");
    scanf("%d", &b );
    printf("input number 3 > ");
    scanf("%d", &c );

    if ( a <= b && b <= c ){
        printf("OK\n");
    } else {
        printf("NG\n");
    }
    return 0;
    
}
