/*
No. 46 入場料
神山美術館の入場料金は、一人600円であるが、5人以上のグループなら一人550円、20人以上の団体なら一人500円である。
人数を入力し、入場料の合計を計算するプログラムを作成せよ。
【実行例、下線部は入力例】
$ ./knock46
人数 3
料金 1800
$ ./knock46
人数 7
料金 3850
$ ./knock46
人数 22
料金 11000
$
*/
#include <stdio.h>
int main (void){
    int people, money;
    printf("人数　");
    scanf("%d", &people );
    if ( people >= 20 ){
        money = people * 500;
        printf("料金　%d円\n", money );
    } else if ( people >= 5 ){
        money = people * 550;
        printf("料金　%d円\n", money );
    } else {
        money = people * 600;
        printf("料金　%d円\n", money );
    }
    return 0;
}
