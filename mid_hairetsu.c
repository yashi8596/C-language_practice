#include <stdio.h>

int main() {
	//6-1
	int a[4] = { 420,270,360,500 }, i;

	for (i = 0; i < 4; i++) {
		printf(" %d ", a[i]);
	}

	printf("\n");
	/*
	//6-2
	int b[5], min;
	for (i = 0; i < 5; i++) {
		printf("b[%d] = ? : ", i);
		scanf("%d", &b[i]);
	}


	for (i = 0; i < 5; i++) {
		if (i == 0) {
			min = b[i];
		}
		else {
			if (min > b[i]) {
				min = b[i];
			}
		}
	}

	printf("b[%d] = {", i);

	for (i = 0; i < 5; i++) {
		printf(" %d ", b[i]);
	}

	printf("}\n");

	printf("���͂��ꂽ�l�̂����A�ŏ��l��[%d]�ł���B\n", min);

	//6-3
	double sum = 0;

	for (i = 0; i < 5; i++) {
		sum += b[i];
	}

	double avg = sum / i;

	printf("���͂��ꂽ�l�̕��ϒl��[ %.1f ]�ł���\n", avg);
	//6-4

	int scores[5], N = 0;
	for (i = 0; i < 5; i++) {
		printf("scores[%d] = ? : ", i);
		scanf("%d", &scores[i]);
	}

	for (i = 0; i < 4; i++) {
		if (scores[i] == scores[i + 1]) {
			N = 1;
			break;
		}
	}

	if (N == 1) {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}
	//6-5

	sum = 0;

	for (i = 0; i < 5; i++) {
		sum += scores[i];
	}

	avg = sum / i;
	double diff[5];

	for (i = 0; i < 5; i++) {
		diff[i] = avg - scores[i];

		if (diff[i] < 0) {
			diff[i] *= -1;
		}
	}

	int num;

	for (i = 0; i < 5; i++) {
		if (i == 0) {
			min = diff[i];
			num = i + 1;
		}
		else{
			if (min > diff[i]) {
				min = diff[i];
				num = i + 1;
			}
		}
	}

	printf("scores[5] = {");

	for (i = 0; i < 5; i++) {
		printf(" %2d ", scores[i]);
	}

	printf("}\n���͂��ꂽ���_�̕��ϒl�F%.1f\n",avg);
	printf("���͂��ꂽ���_�̂����A�ł����ϓ_�ɋ߂��̂�[%d]�Ԗڂ̐l�ł���B\n", num);
	

	//6-6
	
	int scores[5], esc1, esc2;

	for (int j = 0; j < 5; j++) {
		while (1) {
			printf("scores[%d] = ? (0 <= scores[%d] <= 100)  :", j, j);
			scanf("%d", &scores[j]);

			if (scores[j] >= 0 && scores[j] <= 100) {
				break;
			}

			printf("Input Error!! Please try again. (0 <= scores[%d] <= 100)\n", j);
		}
		
	}

	printf("Input Arrays      : { ");

	for (int j = 0; j < 5; j++) {
		if (j == 4) {
			printf("%3d }\n", scores[j]);
		}
		else {
			printf("%3d, ", scores[j]);
		}
	}

	for (int n = 5; n > 1; n--) {
		for (int k = 0; k < 4; k++) {
			if (scores[k] - scores[k + 1] > 0) {
				esc1 = scores[k];
				esc2 = scores[k + 1];

				scores[k] = esc2;
				scores[k + 1] = esc1;
			}
		}
	}

	printf("Sorted Arrays(asc): { ");

	for (int j = 0; j < 5; j++) {
		if (j == 4) {
			printf("%3d }\n", scores[j]);
		}
		else {
			printf("%3d, ", scores[j]);
		}
	}

	//6-7
	int count = sizeof(scores) / sizeof(int);
	int num = count / 2;
	int med, med1 = 0, med2 = 0;

	if (count % 2 == 0) {
		//����
		med1 = num - 1;
		med2 = num;
	}
	else {
		//�
		med1 = num;
		med2 = num;
	}

	med = (scores[med1] + scores[med2]) / 2;

	printf("\n\nThe Arrays Median : %3d \n", med);
	*/

	//6-8
	int scores[5][3];
	char const* name[5] = { "��� ����", "���� �m��", "���� ����", "��� �t��", "���� ���F" };
	char const* sub[3] = {"����", "���w", "�p��"};
	char rank[5];
	double avgS[5] = { 0 }, avgK[3] = { 0 };

	for (int s = 0; s < 5; s++) {
		printf("\"%s\"�̓_������\n", name[s]);

		for (int t = 0; t < 3; t++) {
			while (1) {
				printf("%s�̓_�� :", sub[t]);
				scanf("%d", &scores[s][t]);
				if (scores[s][t] >= 0 && scores[s][t] <= 100) {
					
					avgS[s] += scores[s][t]; //���k�l�̕��ϓ_
					avgK[t] += scores[s][t]; //�Ȗڂ��Ƃ̕��ϓ_

					break;
				}

				printf("\n���͂��ꂽ�_���Ɍ�肪����܂��B�ēx���͂��Ȃ����Ă��������B\n");
			}
		}

		avgS[s] /= 3;
		if (avgS[s] >= 80) {
			rank[s] = 'A';
		}
		else if (avgS[s] >= 70 && avgS[s] < 80) {
			rank[s] = 'B';
		}
		else if (avgS[s] >= 60 && avgS[s] < 70) {
			rank[s] = 'C';
		}
		else {
			rank[s] = 'D';
		}
	}

	printf("���͏��ꗗ\n\n");
	printf("�@�@ ��  ��  �@ |  ��  ��  |  ��  �w  |  �p  ��  |�@���ϓ_(���k)�E�]���@\n");
	printf("------------------------------------------------------------------------\n");
	printf("  ���ϓ_(�Ȗ�)  ");
	

	for (int t = 0; t < 3; t++) {
		avgK[t] /= 5;
		printf("|   %2.1f   ", avgK[t]);
	}

	printf("|----------------------\n");
	printf("------------------------------------------------------------------------\n");

	for (int s = 0; s < 5; s++) {

		printf(" �@%s�@�@", name[s]);

		for (int t = 0; t < 3; t++) {
			printf("|   %3d    ", scores[s][t]);
		}

		printf("|    %.1f�E(�]��:%c)    \n", avgS[s], rank[s]);
	}


	return 0;
}