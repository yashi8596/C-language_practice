#include <stdio.h>

//画面に3回 Hello!! が表示されるプログラム
int main() {
	printf("Hello!!\nHello!!\nhello!!\n\n\n\n");

	for (int i = 0; i < 3; i++) {
		printf("Hello!!\n");
	}
	return 0;
}