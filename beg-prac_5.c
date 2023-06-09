#include <stdio.h>

int main() {
/*
	//無限ループ(ドラクエ式会話ループ)
	int reply, count = 0;

	while (1) {
		printf("そこのあなた！人助けだと思って引き受けてくださらないかしら？？\n");
		printf("引き受ける(1を入力) / 断る(0を入力)  reply = ?  ");
		scanf("%d", &reply);

		if (reply == 1) {
			break;
		}
		else {
			count++;
			if (count < 3) {
				printf("\nえ？ごめんなさい、聞き取れなかったからもう一度尋ねるわ。\n\n");
			}
			else {
				printf("\n......................................................\n");
				printf("......................................................\n");
				printf("......................................................\n");
				printf("......................................................\n");
				printf("......................................................\n");
				printf("......................................本気で言ってる？\n");
				printf("引き受ける(1を入力) / 引き受ける(0を入力)  reply = ?  ");
				scanf("%d", &reply);
				break;
			}
		}
	}

	printf("\nまあ！なんて心優しいお方なの！とても嬉しいわ！！\n");
*/
	//5-1
	for (int i = 1; i <= 10; i++) {
		printf("Hello!!(%d回目)\n", i);
	}

	//5-2
	int i = 0;
	for (; i < 10; i++) {
		printf("i = %d\n", i);
	}
	printf("Last: i = %d\n", i);

	//5-3
	int A = 1, B = -5, C = 1, D = 2;

	printf("A)  ");
	for (; A < 10; A++) {
		printf("%d, ", A);
	}
	printf("%d\n", A);

	printf("B)  ");
	for (; B < 5; B++) {
		printf("%d, ", B);
	}
	printf("%d\n", B);

	printf("C)  ");
	for (; C < 19; C += 2) {
		printf("%d, ", C);
	}
	printf("%d\n", C);

	printf("D)  ");
	for (; D < 20; D += 2) {
		printf("%d, ", D);
	}
	printf("%d\n", D);

	//5-4
	A = 1, B = 1, C = 1;
	printf("A)  ");
	for (i = 1; i < 12; i++) {
		printf("%d", A);
		if (A == 3) {
			A = 0;
		}
		A++;
	}
	printf("%d\n", A);

	printf("B)  ");
	for (i = 1; i < 12; i++) {
		if (i % 3 == 1 && i >= 4) {
			B++;
		}
		printf("%d", B);
	}
	printf("%d\n", B);

	printf("C)  ");
	for (i = 1; i < 12; i++) {
		if (i % 2 == 1 && i >= 3) {
			C++;
			if (i % 6 == 1) {
				C = 1;
			}
		}
		printf("%d", C);
	}
	printf("%d\n", C);

	//5-5
	printf("\n\n\nA)\n");
	for (i = 1; i <= 4; i++) {
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}

	int j = 1, k;
	printf("\n\n\nB)\n");
	for (i = 1; i <= 4; i++) {
		for (k = 4; k > i; k--) {
			printf("-");
		}
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	printf("\n\n\nC)\n");
	for (i = 1; i <= 4; i++) {
		for (j = 1; j <= 4; j++) {
			if ((i + j) % 2 == 0) {
				printf("-");
			}
			else {
				printf("*");
			}
		}
		printf("\n");
	}

	printf("\n\n\nD)\n");
	for (i = 1; i <= 4; i++) {
		for (k = 1; k <= 4 - i; k++) {
			printf("-");
		}
		for (j = 1; j < 2 * i; j++) {
			printf("*");
		}
		for (k = 1; k <= 4 - i; k++) {
			printf("-");
		}
		printf("\n");
	}

	//5-6
	A = 0, B = 0, C = 0;
	for (i = 1; i <= 100; i++) {
		A += i;
	}
	printf("1から100までの総和は%dである。\n", A);

	i = 1;
	while (i <= 100) {
		B += i;
		i++;
	}
	printf("1から100までの総和は%dである。\n", B);

	i = 1;
	do {
		C += i;
		i++;
	} while (i <= 100);
	printf("1から100までの総和は%dである。\n", C);

	//5-7
	/*
	int a, b, c;
	while (1) {
		printf("a = ? & b = ? please input any number.(but 'b' is only 0 over)  ");
		scanf("%d,%d", &a, &b);

		if (b < 0) {
			printf("ERROR!! Sorry, please try again.\n");
			printf("input number(a = %d, b = %d)\n", a, b);
		}
		else {
			break;
		}
	}
	

	if (b != 0) {
		c = a;
		for (i = 1; i < b; i++) {
			c *= a;
		}
	}
	else {
		c = 1;
	}

	printf("%d^%d = %d, Thank you.\n", a, b, c);
	*/
	//5-8

	int product = 0;
	printf("     ");
	for (i = 1; i < 10; i++) {
		printf(" %2d ", i);
	}
	printf("\n");
	printf("-----------------------------------------------\n");
	for (i = 1; i < 10; i++) {
		printf(" %d | ", i);
		for (j = 1; j < 10; j++) {
			product = i * j;
			printf(" %2d ", product);
		}
		printf("\n");
	}

	//5-9
	printf("\n\n\n");
	for (i = 1; i <= 100; i++) {
		if (i % 15 == 0) {
			printf(" FizzBuzz ");
		}
		else if (i % 3 == 0) {
			printf("     Fizz ");
		}
		else if (i % 5 == 0) {
			printf("     Buzz ");
		}
		else{
			printf(" %8d ", i);
		}

		if (i % 10 == 0) {
			printf("\n");
		}
	}
	printf("\n\n");

	//5-10
	int a = 0, b = 1, c = 0;
	printf("%2d, %2d, ", a, b);
	for (int i = 0; i < 30; i++) {
		c = a + b;
		printf("%2d, ", c);
		a = b, b = c;
	}
	c = a + b;
	printf("%2d\n\n\n", c);
	return 0;
}