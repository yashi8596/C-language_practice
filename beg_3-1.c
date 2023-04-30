#include <stdio.h>

int main() {
	int a = 12, b = 6;
	//四則演算 ("a % b"は余りを表す)
	printf("a + b = %d\na - b = %d\na * b = %d\na / b = %d + %d\n\n", a + b, a - b, a * b, a / b, a % b);

	/*
	int c, d;
	printf("c = ?, d = ? (0以外の数値) ");
	scanf("%d,%d", &c, &d);
	if (c == 0 || d == 0) {
		printf("ER0RR : 「0」が入力されました。操作をやり直してください。\n\n");
	}
	else {
		printf("c / d = %d + %d\n\n", c / d, c % d); //0除算エラーに注意
	}
	*/

	//代入演算子
	a = 10, b = 5;
	a = a + b;
	printf("a = %d\n", a);
	a += b; // 上記の「a = a + b」と同義(代入演算子)、「-=」「*=」「/=」「%=」も同様
	printf("a = %d\n\n", a);
	a -= b;
	printf("a = %d, b = %d\n", a, b);
	b *= a;
	printf("a = %d, b = %d\n", a, b);
	b /= a;
	printf("a = %d, b = %d\n", a, b);
	b %= a;
	printf("a = %d, b = %d\n\n", a, b);
	
	//"++"と"--"(インクリメント・デクリメント演算子)
	a = 20, b = 20;
	a++; //"++"はaに1加算する
	b--; //"--"はbに1減算する
	printf("a = %d, b = %d\n", a, b);
	b = ++a; //前置と後置で計算結果が異なる　この場合、a = 22, b = 22
	printf("a = %d, b = %d\n", a, b);
	b = a--; //この場合、a = 21, b = 22　書く位置によって結果が変わるので注意
	printf("a = %d, b = %d\n\n", a, b);


	//整数の表示方法の指定
	a = 123, b = 27;
	int c = 1000, d = 2023, e = 1248;
	printf("%d\n%5d\n%+5d\n%-5d\n%05d\n", a, b, c, d, e);
	//左から順に、デフォルト、最低文字数指定、符号の表示、左詰め、左側ゼロ表示
	return 0;
}