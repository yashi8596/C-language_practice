#include <stdio.h>

int main() {
	//6-1
	int a[4] = { 420,270,360,500 }, i;

	for (i = 0; i < 4; i++) {
		printf(" %d ", a[i]);
	}

	printf("\n");

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

	return 0;
}