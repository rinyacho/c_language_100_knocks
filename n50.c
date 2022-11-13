/* No. 50 foobar
1から100までの値を繰り返しで表示するが、3の倍数の時はfoo、
5の倍数の時はbarと数字の代わりに表示するプログラムを作成せよ。
なお、3と5の両方の倍数の時はfoobarと表示される。
【実行例】
$ ./knock50
1
2
foo
4
bar
foo
（途中省略）
97
98
foo
bar
$ */
#include <stdio.h>
int main (void){
    int a, b, c, i;
    for ( i = 0; i < 101; i++ ){
        if ( i % 15 == 0 ){
            printf("foobar\n");
            continue;
        }
        if ( i % 5 == 0 ){
            printf("bar\n");
            continue;
        }
        if ( i % 3 == 0 ){
            printf("foo\n");
            continue;
        }
        printf("%d\n", i );
    }
    return 0;
}
