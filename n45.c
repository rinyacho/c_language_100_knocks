/*
No. 45 タクシー料金
初乗り料金が1700mまで610円、それ以降は313mごとに80円のタクシーがある。
このタクシーに乗った距離をm単位で入力し、料金を計算するプログラムを作成せよ。
【実行例、下線部は入力例】
$ ./knock45
距離 10000
金額 2770
$ ./knock45
距離 2013
金額 690
$ ./knock45
距離 2014
金額 770
$
313mごとの区間は1mでも進んでしまったら80円かかることに注意。
*/
#include <stdio.h>
int main (void){
    int dist, money, num;

    printf("距離　");
    scanf("%d", &dist );

    if ( dist <= 1700 ){
        printf("金額　610円\n");
    } else if ( (dist - 1700) % 313 == 0 ){     // 313mピッタリなら加算無し
        num = ( dist - 1700 ) / 313;
        money = num * 80 + 610;
        printf("金額　%d\n", money);
    }else{                                      // ピッタリで無いなら80m加算
        num = ( dist - 1700 ) / 313;
        money = num * 80 + 80 + 610;
        printf("金額　%d\n", money);
    }
    return 0;
}
