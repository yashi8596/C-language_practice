#include <stdio.h>

int main() {
	//H19 春期ソフトウェア開発技術者試験 問5改
	//小町算(加減のみ)のプログラム

	int op[3][9] = { {0,0,0,1,2,1,0,1,0},{1,2,0,1,2,0,1,2,0},{1,2,1,2,2,2,2,0,2} };
	//符号(なし,-,+の3種類)を整数値(順に0,1,2)として格納するための配列
	//本題では19683通りあるが、流石にできないので3つで試す

	int h, i , sign = 1; //それぞれ符号、合計値、演算対象の数字を表す
	
	for (h = 0; h < 3; h++) {
		
		int sum = 0, num = 0;

		for (i = 0; i < 9; i++) {

			if (op[h][i] == 0) {
				num = num * 10 + sign * (i + 1);
			}
			else {
				sum += num;
				num = i + 1;

				if (op[h][i] == 1) {
					sign = -1;
				}
				else {
					sign = 1;
				}
				num = sign * num;
			}
			
		}

		sum += num;

		if (sum == 100) {
			//該当する配列を表示する
			printf("合計値が100になる計算式\n");
			for (i = 0; i < 9; i++) {

				num = i % 9 + 1;

				if (op[h][i] == 1) {
					printf(" - ");
				}
				else if(op[h][i] == 2){
					printf(" + ");
				}		
				printf("%d", num);
			}

			printf(" = %d\n", sum);
		}

	}
	
	return 0;
	
}