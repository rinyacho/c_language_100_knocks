/* No. 54 最大最小
まずデータの個数を入力させ、次にデータの個数だけ整数値を入力させる。この入力データの中で
最大値と最小値を求め表示するプログラムを作成せよ。データの個数は100個までとする。
なお、データの個数とデータはファイルからリダイレクトで入力させればよいので、
入力のためのメッセージは不要である（実行例を参照すること）。

【実行例、データファイルは下のリンクから取得せよ】
$ ./knock54 < small.data
最小値 = 128, 最大値 = 962
$ ./knock54 < middle.data
最小値 = 20, 最大値 = 988
$ ./knock54 < large.data
最小値 = 5, 最大値 = 996
$
リダイレクトでデータを入力するプログラム例はこちら redirect.c

入力データはこちら（右クリックで「リンク先をダウンロード」。ブラウザの設定によっては
ファイルの拡張子に.txtが追加されるが、その場合は適宜変更すること。「別名でダウンロード」を選んで、
プログラムを置いているディレクトリに保存するとよい。）
small.data
middle.data
large.data */
/****
     redirectinput.c
     リダイレクトでデータを入力させる
     データの形式は、
     1行目にデータの個数、
     2行目以降は各データの値
     使用方法：
     redirectinput < datafile
*****/

#include <stdio.h>
int main() {
  int numData;  // データの個数
  int data[100];  // データを格納する配列、100個分
  int i;  // カウンタ
  int max, min;
  max = 0;
  min = 999;
  // データの個数を読み込む
  scanf("%d", &numData);
  // データの個数だけ繰り返してデータを読み込む
  for (i = 0; i < numData; i++) {
    scanf("%d", &data[i]);
    if ( max < data[i] ){
        max = data[i];
    }
    if ( min > data[i] ){
        min = data[i];
    }
  }
/*
  printf("numData = %d\n", numData);
  for (i = 0; i < numData; i++) {
    printf("%d\n", data[i]);
  }
*/
  printf("最小値 = %d, 最大値 = %d\n", min, max);
  return 0;
}
