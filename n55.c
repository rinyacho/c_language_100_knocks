/* No. 55 夢想花again
「とんで」を9回「まわって」を3回繰り返した後「まわる」と表示して改行する、を3回繰り返す
プログラムを作成せよ。「とんで」「まわって」と3行文の繰り返しは必ず繰り返し構文を使うこと。

【実行例】
$ ./knock55
とんでとんでとんでとんでとんでとんでとんでとんでとんでまわってまわってまわってまわる
とんでとんでとんでとんでとんでとんでとんでとんでとんでまわってまわってまわってまわる
とんでとんでとんでとんでとんでとんでとんでとんでとんでまわってまわってまわってまわる
$ */

#include <stdio.h>
int main (void){
    int i, i2;
    for ( i = 0; i < 3; i++ ){
        for ( i2 = 0; i2 < 9; i2++ ){
            printf("とんで");
        }
        for ( i2 = 0; i2 < 3; i2++ ){
            printf("まわって");
        }
        printf("まわる\n");
    }
    return 0; 
}
