#include <stdio.h>

int main() {
	//H19 �t���\�t�g�E�F�A�J���Z�p�Ҏ��� ��5��
	//�����Z(�����̂�)�̃v���O����

	int op[3][9] = { {0,0,0,1,2,1,0,1,0},{1,2,0,1,2,0,1,2,0},{1,2,1,2,2,2,2,0,2} };
	//����(�Ȃ�,-,+��3���)�𐮐��l(����0,1,2)�Ƃ��Ċi�[���邽�߂̔z��
	//�{��ł�19683�ʂ肠�邪�A���΂ɂł��Ȃ��̂�3�Ŏ���

	int h, i , sign = 1; //���ꂼ�ꕄ���A���v�l�A���Z�Ώۂ̐�����\��
	
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
			//�Y������z���\������
			printf("���v�l��100�ɂȂ�v�Z��\n");
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