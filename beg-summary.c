#include <stdio.h>

int main() {
	//1-1

	int A = 1, B = 1, C = 1, n = 1;


	for (; A <= 9; A++) {

		for (; B <= 9; B++) {

			for (; C <= 9; C++) {

				if ((A + B + C) == (A * B * C)) {

					printf(" ( %d, %d, %d ) ", A, B, C);

					if (n % 4 == 0) {

						printf("\n");

					}

					n += 1;
				}
			}

			if (C == 10) {

				C = 1;

			}
		}

		if (B == 10) {

			B = 1;

		}
		
	}

	printf("\n\n\n");

	//1-2

	int ksgm = 0, enpt = 0, brpn = 0;

	printf("120円ちょうどになる組み合わせ\n\n");

	for (; ksgm < 5; ksgm++) {

		int price1 = 30 * ksgm;

		if (price1 < 120) {

			for (; enpt < 4; enpt++) {

				int price2 = price1 + 40 * enpt;

				if (price2 < 120) {

					for (; brpn < 3; brpn++) {
						int price3 = price2 + 60 * brpn;
						if (price3 == 120) {
							printf("消しゴム:%d本, 鉛筆:%d本, ボールペン:%d本\n", ksgm, enpt, brpn);
						}
						else if (price3 > 120) {
							break;
						}
					}
					brpn = 0;
				}
				else if (price2 > 120) {
					break;
				}
				else {
					printf("消しゴム:%d本, 鉛筆:%d本, ボールペン:%d本\n", ksgm, enpt, brpn);
				}

			}
			enpt = 0;
		}
		else if (price1 > 120) {
			break;
		}
		else {
			printf("消しゴム:%d本, 鉛筆:%d本, ボールペン:%d本\n", ksgm, enpt, brpn);
		}
	}

	//1-3
	int a = 1, b = 1, c = 1, q = 1;
	for (; a < 10; a++) {
		for (; b < 10; b++) {
			if (b != a) {
				for (; c < 10; c++) {
					if (c != a && c != b) {

						int x1 = a * 10 + b + c;
						int d = x1 / 10;
						int e = x1 % 10;


						if (x1 < 100 && e != 0 && d != a && d != b && d != c && e != a && e != b && e != c && d != e ) {
							
							printf(" ( %d%d + %d = %d ) ", a, b, c, x1);
							if (q % 4 == 0) {
								printf("\n");
							}
							q++;
						}
					}
				}
				c = 1;
			}
			
			
		}
		b = 1;
	}

	// 1-5

	double R, spA, spB;
	
	while (1) {
		printf("これはAさんとBさんが、池の周り(R)を同じ地点から\nそれぞれ逆方向に移動してから出会うまでの時間を計算するプログラムです。\n");
		printf("-------------------------------------------------------------------\n");

		printf("①池の周囲の長さ(R)を小数値で入力してください。\n");
		scanf("%lf", &R);

		printf("②Aさんの移動速度(spA)を小数値で入力してください。\n");
		scanf("%lf", &spA);

		printf("③Bさんの移動速度(spB)を小数値で入力してください。\n");
		scanf("%lf", &spB);

		if (R > 0 && spA > 0 && spB > 0) {
			break;
		}
		else {
			printf("Input Error!!\n0以下の数値が入力されました。再度入力してください。\n\n\n");
		}
	}

	int calc = (int)(R / (spA + spB));
	
	printf("◆計算結果◆\n池の周囲が%.2f〔m〕\nAさんの移動速度が%.2f〔m/s〕\nBさんの移動速度が%.2f〔m/s〕である時、\n2人は%d秒後に出会うことになります。\n", R, spA, spB, calc);

	return 0;
}