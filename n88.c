/* No. 88 big or small ☆
コンピュータは1から99の数字をランダムに選ぶ（正解値と呼ぶ）。プレイヤは値を入力し、
正解値と一致すればクリアとなり値を入力した回数を表示する。一致しなければ正解値が入力値より
大きいか小さいかを表示する。この数当てゲームプログラムを作成せよ。

【実行例、下線部は入力例】
$ ./knock87
数を入力: 50
それより小さいです
数を入力: 25
それより小さいです
数を入力: 13
それより大きいです
数を入力: 19
それより小さいです
数を入力: 16
それより小さいです
数を入力: 14
正解!! 6回でクリア
$ */
#include <stdio.h>
#include <stdlib.h>

int main (void){
    int inp, ran, i;

    ran = rand();
    ran = ran % 99 + 1;
    for ( i = 1; ; i++ ){
        printf("数を入力: ");
        scanf("%d", &inp);
        if ( inp < ran ){
            printf("それより大きいです\n");
        } else if ( inp > ran ){
            printf("それより小さいです\n");
        } else {
            printf("正解!! %d回でクリア\n", i );
            break;
        }
    }
    return 0;
}
