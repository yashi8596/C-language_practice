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

	printf("120�~���傤�ǂɂȂ�g�ݍ��킹\n\n");

	for (; ksgm < 5; ksgm++) {

		int price1 = 30 * ksgm;

		if (price1 < 120) {

			for (; enpt < 4; enpt++) {

				int price2 = price1 + 40 * enpt;

				if (price2 < 120) {

					for (; brpn < 3; brpn++) {
						int price3 = price2 + 60 * brpn;
						if (price3 == 120) {
							printf("�����S��:%d�{, ���M:%d�{, �{�[���y��:%d�{\n", ksgm, enpt, brpn);
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
					printf("�����S��:%d�{, ���M:%d�{, �{�[���y��:%d�{\n", ksgm, enpt, brpn);
				}

			}
			enpt = 0;
		}
		else if (price1 > 120) {
			break;
		}
		else {
			printf("�����S��:%d�{, ���M:%d�{, �{�[���y��:%d�{\n", ksgm, enpt, brpn);
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
		printf("�����A�����B���񂪁A�r�̎���(R)�𓯂��n�_����\n���ꂼ��t�����Ɉړ����Ă���o��܂ł̎��Ԃ��v�Z����v���O�����ł��B\n");
		printf("-------------------------------------------------------------------\n");

		printf("�@�r�̎��͂̒���(R)�������l�œ��͂��Ă��������B\n");
		scanf("%lf", &R);

		printf("�AA����̈ړ����x(spA)�������l�œ��͂��Ă��������B\n");
		scanf("%lf", &spA);

		printf("�BB����̈ړ����x(spB)�������l�œ��͂��Ă��������B\n");
		scanf("%lf", &spB);

		if (R > 0 && spA > 0 && spB > 0) {
			break;
		}
		else {
			printf("Input Error!!\n0�ȉ��̐��l�����͂���܂����B�ēx���͂��Ă��������B\n\n\n");
		}
	}

	int calc = (int)(R / (spA + spB));
	
	printf("���v�Z���ʁ�\n�r�̎��͂�%.2f�km�l\nA����̈ړ����x��%.2f�km/s�l\nB����̈ړ����x��%.2f�km/s�l�ł��鎞�A\n2�l��%d�b��ɏo����ƂɂȂ�܂��B\n", R, spA, spB, calc);

	return 0;
}