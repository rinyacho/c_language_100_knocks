/* No. 99 自由制作 ☆×？
自由に作品を作ろう。HandyGrpahicなどのグラフィクスライブラリを使って絵を表示するプログラムでもよい。 */

/* ●問題文
英小文字からなる文字列 S が与えられます。 T が空文字列である状態から始め、
以下の操作を好きな回数繰り返すことで S=T とすることができるか判定する
T の末尾に dream dreamer erase eraser のいずれかを追加する。
●制約
1≦|S|≦10^5
S は英小文字からなる。
●入力
入力は以下の形式で標準入力から与る。S
●出力
S=T とすることができる場合 YES を、そうでない場合 NO を出力する。
●入力例 1 
erasedream
●出力例 1 
YES
※erase dream の順で T の末尾に追加することで S=T とすることができます。

AtCoder Beginners Selectionより参照、コードは自作 */
#include <stdio.h>
 
int main (void){
    int i1, i2, i3, flg;
 
    char str[100001];
    char d1[6] = {'d', 'r', 'e', 'a', 'm'};           // 0-4
    char d2[8] = {'d', 'r', 'e', 'a', 'm', 'e', 'r'}; // 0-6
    char e1[6] = {'e', 'r', 'a', 's', 'e'};           // 0-4
    char e2[7] = {'e', 'r', 'a', 's', 'e', 'r'};      // 0-5
 
    scanf("%s", str );
	flg = 0;
    for ( i1 = 0; str[i1] != '\0'; ){
        if ( str[i1] == 'd' ){
            for ( i2 = i1, i3 = 0; d2[i3] == str[i2] && str[i2] != '\0'; i2++, i3++ ){
            }
            if ( i3 == 5 ){
                i1 += 5;
                continue;
            } else if ( i3 == 7 && str[ i2 ] != 'a' ){
                i1 += 7;
                continue;
            } else if ( i3 == 7 && str[ i2 ] == 'a' ){
              	i1 += 5;
              	continue;
            }
        } else if ( str[i1] == 'e' ){
            for ( i2 = i1, i3 = 0; e2[i3] == str[i2] && str[i2] != '\0'; i2++, i3++ ){
            }
            if ( i3 == 5 ){
                i1 += 5;
                continue;
            } else if( i3 == 6 ){
                i1 += 6;
                continue;
            }
        }
        flg = 1;
        break;
    }
 
    if ( flg == 1 ){
        printf("NO\n");
    } else {
        printf("YES\n");
    }
 
    return 0;
}
