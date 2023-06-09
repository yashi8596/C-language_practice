#include <stdio.h>

int main() {
	int a = 14, b = 3, c = 0, d = 0, e = 0;
	while (a > d) {
		d = b + d;
		c += 1;
		if (a - d < b) {
			e = a - d;
			break;
		}
	}
	printf(" %2d = %2d X %2d + %2d\n", a, c, b, e);

	int apples[] = { 364000, 44400, 70100, 47200 };
	int count = sizeof(apples) / sizeof(int);
	int m;
	char C;

	printf("{ %6d, %6d, %6d, %6d }\n", apples[0], apples[1], apples[2], apples[3]);
	printf("--------------------------------------------------------------\n");

	for (int i = 4; i > 0; i--) {
		int A = apples[4 - i], N = 0;
		C = 65 + 4 - i; //数値で出力文字を指定

		for (int j = 0; j < 4; j++) {
			if (A - apples[j] > 0) {
				N++;
			}
		}
		printf("apples[%d]: %6d  || ", 4 - i, A);

		switch (N) {
			case 3:
				m = 40;
				break;
			case 2:
				m = 8;
				break;
			case 1:
				m = 5;
				break;
			default:
				m = 4;
				break;
		}

		for (int n = 0; n < m; n++) {
			printf("%c", C);
		}
		printf("\n");
	}

	printf("--------------------------------------------------------------\n");

	//基本交換法
	for (; count > 1; count--) {
		for (int i = 1; i < count; i++) {
			if (apples[i - 1] - apples[i] > 0) {
				a = apples[i], b = apples[i - 1];
				apples[i - 1] = a, apples[i] = b;
			}
		}
	}
	printf("{ %6d, %6d, %6d, %6d }\n", apples[0], apples[1], apples[2], apples[3]);



	return 0;
}