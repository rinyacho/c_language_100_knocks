/*
No. 40 even or odd
整数値を入力させ、その値が偶数ならばeven、奇数ならばoddと表示するプログラムを作成せよ。

【実行例、下線部は入力例】
$ ./knock40
input number: 6
6 is even.
$ ./knock40
input number: 7
7 is odd.
$
偶数＝2で割り切れる＝2で割った余りが0
*/

#include <stdio.h>

int main (void){
    int num;

    // 整数入力
    printf("input number >");
    scanf("%d", &num );

    if ( num % 2 == 0 ){
        printf("%d is even.\n", num );
    } else {
        printf("%d is odd.\n", num );
    }
    return 0;
    
}
