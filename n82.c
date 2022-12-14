/* No. 82 パスカルの三角形 ☆
パスカルの三角形とは、1段目は1のみ、2段目からは段の数だけ数字が並び、両端は1、
その間は左上と右上の値を足した値、として作っていった数字の並びである（Wikipedia「パスカルの三角形」参照）。
このパスカルの三角形を15段まで計算して表示するプログラムを作成せよ。
ただし表示は左詰で値はスペースで区切って表示するのでよい（三角形に並べなくてもよい）。
【実行例】
$ ./knock82
1 
1 1 
1 2 1 
1 3 3 1 
1 4 6 4 1 
1 5 10 10 5 1 
1 6 15 20 15 6 1 
1 7 21 35 35 21 7 1 
1 8 28 56 70 56 28 8 1 
1 9 36 84 126 126 84 36 9 1 
1 10 45 120 210 252 210 120 45 10 1 
1 11 55 165 330 462 462 330 165 55 11 1 
1 12 66 220 495 792 924 792 495 220 66 12 1 
1 13 78 286 715 1287 1716 1716 1287 715 286 78 13 1 
1 14 91 364 1001 2002 3003 3432 3003 2002 1001 364 91 14 1
$
ヒント：2次元配列を使うとよい。両端でないi段目、左からj番目の値a[i][j]は、
一つ上の段の値を使って計算できる。上の実行結果を見て考えるとよいだろう。 */
#include <stdio.h>
int main (void){
    int i, i2;
    int num[16][16];

    num[0][0] = 1;
    for ( i = 1; i <= 15; i++ ){
        num[i][0] = 1;
        for ( i2 = 1; i2 < i; i2++ ){
            num[i][i2] = num[i-1][i2-1] + num[i-1][i2];
        }
        num[i][i2] = 1;
    }
    for ( i = 0; i < 15; i++ ){
        for ( i2 = 0; i2 <= i; i2++ ){
            printf("%d ", num[i][i2] );
        }
        printf("\n");
    }
    return 0;
}
