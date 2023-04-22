//変数について

#include <stdio.h>

int main() {
	int a = 10, b = 20, c = 30, d = 40; //初期値は変数の型(int)と変数名(a,b,c,d)を記述
	printf("a = %d, b = %d, c = %d, d = %d\n\n", a, b, c, d);

	a = 15; //以降で変数の値を置換できる(10 -> 15)
	printf("a = %d\n\n", a);

	d = a + b + c;
	printf("d = %d\n", d);
	return 0;
}