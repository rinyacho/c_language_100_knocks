/*
No. 41 1桁の自然数?
整数値を入力させ、その値が一桁の自然数かそうでないか判定するプログラムを作成せよ。

【実行例、下線部は入力例】
$ ./knock41
input number: 6
6 is a single figure.
$ ./knock41
input number: 10
10 is not a single figure.
$ ./knock41
input number: -3
-3 is not a single figure.
$ ./knock41
input number: 0
0 is not a single figure.
$
一桁の自然数＝0より大きく、かつ、9以下の整数、として判定すればよい。
*/

#include <stdio.h>
int main (void){
    int num;

    printf("input number >");
    scanf("%d", &num );

    if ( num <= 0 ){
        printf("%d is not a single figure.\n", num );
    } else if ( num >= 10 ) {
        printf("%d is not a single figure.\n", num );
    } else {
        printf("%d is a single figure.\n", num );
    }
    return 0;
}
