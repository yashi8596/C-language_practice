#include <stdio.h>

int main() {
	/*
	//4-1
	int a, b;
	printf("a = ?, b = ? (a:50以上150以下, b:500以下)");
	scanf("%d,%d", &a, &b);

	if (a > b) {
		printf("a = %d\n", a);
	}
	else {
		printf("b = %d\n", b);
	}

	//4-2
	int c = (a > b) ? a : b;

	if (a > b) {
		printf("c = %d(大きい値: a)\n", c);
	}
	else {
		printf("c = %d(大きい値: b)\n", c);
	}

	//4-3, 4-4
	if ((a >= 50 && a <= 150) || b <= 500) {
		printf("OK!\n");
	}
	else {
		printf("ERROR!!\n");
	}

	//4-5
	int d;
	printf("d = ?(please input 1 or 2 or 3.)");
	scanf("%d", &d);
	switch (d) {
		case 1:
			printf("Coffee\n");
			break;
		case 2:
			printf("Cafe Latte\n");
			break;
		case 3:
			printf("Tea\n");
			break;
		default:
			printf("ERROR!!\n");
			break;
	}

	//4-6
	int score;
	printf("score = ? (score:0～1000) ");
	scanf("%d", &score);

	if (score >= 900 && score <= 1000) {
		printf("RANK:S That was tight!!");
	}
	else if (score >= 750 && score < 900){
		printf("RANK A Too easy! 楽勝だぜ!");
	}
	else if (score >= 600 && score < 750) {
		printf("RANK B Just made it!");
	}
	else if (score >= 0 && score < 600){
		printf("RANK C No problem!");
	}
	else {
		printf("ERROR!! Not my day.");
	}

	//4-7
	int year, M = 0, T = 0, S = 0, H = 0, R = 0;
	printf("year = ? (西暦の入力:1868年から2023年まで対応) ");
	scanf("%d", &year);
	if (year >= 1868 && year <= 2023) {

		printf("西暦%d年は、", year);
			if (year < 1912) {
				M = year - 1868 + 1;
				printf("M(明治)%d年です。\n", M);
			}
			else if (year >= 1912 && year < 1926) {
				T = year - 1912 + 1;
				printf("T(大正)%d年です。\n", T);
			}
			else if (year >= 1926 && year < 1989) {
				S = year - 1926 + 1;
				printf("S(昭和)%d年です。\n", S);
			}
			else if (year >= 1989 && year < 2019) {
				H = year - 1989 + 1;
				printf("H(平成)%d年です。\n", H);
			}
			else if (year >= 2019) {
				R = year - 2019 + 1;
				printf("R(令和)%d年です。\n", R);
			}
	}
	else {
		printf("不適切な値です。");
	}
	
	//4-8
	int menu;
	printf("Menu:\n--------------------\n");
	printf("    1) Coffee\n    2) Cafe Latte\n    3) Tea\n--------------------\n\n");
	do {
		printf("menu = ? (Please choose above Menu number.) ");
		scanf("%d", &menu);
	} while (menu < 1 || menu > 3);


	switch (menu) {
		case 1:
			printf("price:350JPY (Coffee)\n");
			break;
		case 2:
			printf("price:450JPY (Cafe Latte)\n");
			break;
		case 3:
			printf("price:380JPY (Tea)\n");
			break;
		default:
			printf("ERROR!!  Sorry, please try again. (You can choose menu number as '1 or 2 or 3')\n");
			break;
	}
	*/
	//5-11
	int menu;
	while (1) {
		printf("Menu:\n--------------------\n");
		printf("    1) Coffee\n    2) Cafe Latte\n    3) Tea\n--------------------\n\n");
		printf("menu = ? (Please choose above Menu number.) ");
		scanf("%d", &menu);

		switch (menu) {
		case 1:
			printf("price:350JPY (Coffee)\n");
			break;
		case 2:
			printf("price:450JPY (Cafe Latte)\n");
			break;
		case 3:
			printf("price:380JPY (Tea)\n");
			break;
		case 99:
			break;
		default:
			printf("ERROR!!  Sorry, please try again. (You can choose menu number as '1 or 2 or 3')\n");
			break;
		}

		if (menu == 99) {
			break;
		}
	}
	printf("We confirm you input menu 99, so this program was finished. Bye!");


	return 0;
}