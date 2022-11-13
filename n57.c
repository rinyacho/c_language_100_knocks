/* No. 57 テスト集計
まず受験者数を入力させ、次に受験者数ごとに英語、数学、国語の点数をスペースで区切って入力させる
（具体的な入力方法は下記のscanfの使い方の説明、および入力データの中身を見よ）。入力が終了したら、
英語、数学、国語の平均点、および各受験生の合計点を計算して表示するプログラムを作成せよ。
受験者数は100人までとする。なお、データの個数とデータはファイルからリダイレクトで入力させればよいので、
入力のためのメッセージは不要である（実行例を参照すること）。

【実行例、データファイルは下のリンクから取得せよ】
$ ./knock57 < examSmall.data
平均点 英語:46, 数学:51, 国語:55
個人合計点
0: 141
1: 114
（途中省略）
8: 96
9: 188
$ ./knock57 < examMiddle.data
平均点 英語:55, 数学:53, 国語:54
個人合計点
0: 136
1: 64
（途中省略）
48: 265
49: 167
$ ./knock57 < examLarge.data
平均点 英語:52, 数学:51, 国語:51
個人合計点
0: 151
1: 241
（途中省略）
98: 107
99: 178
$
複数の値をスペースで区切って一度に入力させるには、次のようにscnaf関数の書式指定文字列を使う：
scanf("%d %d %d", &eng, &math, &lang); */

#include <stdio.h>
int main (void){
    int eng, math, lang, sum[101], i, num;
    int s_eng = 0, s_math = 0, s_lang = 0;

    scanf("%d", &num );
    for ( i = 0; i < num; i++ ){
        scanf("%d %d %d", &eng, &math, &lang);
        sum[i] = eng + math + lang;
        s_eng = s_eng + eng;
        s_math = s_math + math;
        s_lang = s_lang + lang;
    }
    printf("平均点 英語: %d 数学: %d 国語: %d\n", s_eng / num, s_math / num, s_lang / num );
    for ( i = 0; i < num; i++ ){
        printf("%d: %d\n", i, sum[i] );
    } 
    return 0;
}
