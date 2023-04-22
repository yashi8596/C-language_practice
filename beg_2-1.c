//変数について

#include <stdio.h>

int main() {
	int a = 10, b = 20, c = 30, d = 40; //初期値は変数の型(int)と変数名(a,b,c,d)を記述
	printf("a = %d, b = %d, c = %d, d = %d\n\n", a, b, c, d); 
	//printfで変数を出力するときには,書式指定子(%d、%f(dは整数、fは小数))を""内に、後ろにカンマ区切りで対応する変数を記述

	a = 15; //以降で変数の値を置換(10 -> 15)
	printf("a = %d\n\n", a);

	d = a + b + c; //右辺で計算した値に置換することも可能
	printf("d = %d\n", d);

	int x;
	printf("x = ?  "); //ユーザーに行動を促すための表示文(プロンプト文字列)
	scanf("%d", &x); 
	/*
	scanf関数で変数に入力(VSで使用するときには、SDLチェックを外す事)

	*/

	b = c * x;
	printf("b = %d", b);
	return 0;
}