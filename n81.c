/*  No. 81 中間値 ☆
３つの整数値を入力させ、3つの値のうち2番目に大きい値を表示するプログラムを作成せよ。
【実行例、下線部は入力例】
$ ./knock81
3つの値を入力: 23 24 25
24
$ ./knock81
3つの値を入力: 16 8 21
16
$
ヒント：ていねいに場合分けすればよいが意外に面倒くさい。大きい順、
あるいは小さい順に値を並び替える方法もあるが少し難しい。*/
#include <stdio.h>
int main (void){
    int inp[7], i, min, max;

    printf("3つの値を入力: ");
    scanf("%d %d %d", &inp[1], &inp[2], &inp[3] );

    inp[0] = 0;
    for ( i = 0; i < 3; i++ ){
        if ( inp[i] < inp[i+1] ){
            max = i+1;
        }
    }
    inp[0] = 999;
    for ( i = 0; i < 3; i++ ){
        if ( inp[i] > inp[i+1] ){
            min = i+1;
        }
    }
    inp[max] = 0;
    inp[min] = 0;
    for ( i = 1; i <= 3; i++ ){
        if ( inp[i] != 0 ){
            printf("%d\n", inp[i] );
            break;
        }
    }
    return 0;
}
