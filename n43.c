/*
No. 43 2次方程式の解の判別
2次方程式 ax^2 + bx + c = 0 （x^2はxの2乗の意味）の係数a, b, cを入力し、
2次方程式の解が2つの実数解か、重解か、2つの虚数解かを判別するプログラムを作成せよ。
【実行例、下線部は入力例】
$ ./knock43
input a: 4
input b: -3
input c: 1
2つの虚数解
$ ./knock43
input a: 1
input b: 2
input c: 1
重解
$ ./knock43
input a: 3
input b: 2
input c: -4
2つの実数解
$
*/
#include <stdio.h>
int main (void){
    int a, b, c, calc;

    printf("input number 1 > ");
    scanf("%d", &a );
    printf("input number 2 > ");
    scanf("%d", &b );
    printf("input number 3 > ");
    scanf("%d", &c );
    // 2次方程式の判別式 D = b^2 - 4ac を利用する
    calc = b * b - ( 4 * a * c );

    if ( calc == 0 ){
        printf("重解（一つの実数解）\n");
    } else if ( calc < 0 ) {
        printf("2つの虚数解\n");
    } else {
        printf("2つの実数解\n");
    }
    return 0;
}
