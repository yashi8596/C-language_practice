#include <stdio.h>

int main() {
	int a = 12, b = 6;
	//�l�����Z ("a % b"�͗]���\��)
	printf("a + b = %d\na - b = %d\na * b = %d\na / b = %d + %d\n\n", a + b, a - b, a * b, a / b, a % b);

	/*
	int c, d;
	printf("c = ?, d = ? (0�ȊO�̐��l) ");
	scanf("%d,%d", &c, &d);
	if (c == 0 || d == 0) {
		printf("ER0RR : �u0�v�����͂���܂����B�������蒼���Ă��������B\n\n");
	}
	else {
		printf("c / d = %d + %d\n\n", c / d, c % d); //0���Z�G���[�ɒ���
	}
	*/

	//������Z�q
	a = 10, b = 5;
	a = a + b;
	printf("a = %d\n", a);
	a += b; // ��L�́ua = a + b�v�Ɠ��`(������Z�q)�A�u-=�v�u*=�v�u/=�v�u%=�v�����l
	printf("a = %d\n\n", a);
	a -= b;
	printf("a = %d, b = %d\n", a, b);
	b *= a;
	printf("a = %d, b = %d\n", a, b);
	b /= a;
	printf("a = %d, b = %d\n", a, b);
	b %= a;
	printf("a = %d, b = %d\n\n", a, b);
	
	//"++"��"--"(�C���N�������g�E�f�N�������g���Z�q)
	a = 20, b = 20;
	a++; //"++"��a��1���Z����
	b--; //"--"��b��1���Z����
	printf("a = %d, b = %d\n", a, b);
	b = ++a; //�O�u�ƌ�u�Ōv�Z���ʂ��قȂ�@���̏ꍇ�Aa = 22, b = 22
	printf("a = %d, b = %d\n", a, b);
	b = a--; //���̏ꍇ�Aa = 21, b = 22�@�����ʒu�ɂ���Č��ʂ��ς��̂Œ���
	printf("a = %d, b = %d\n\n", a, b);


	//�����̕\�����@�̎w��
	a = 123, b = 27;
	int c = 1000, d = 2023, e = 1248;
	printf("%d\n%5d\n%+5d\n%-5d\n%05d\n", a, b, c, d, e);
	//�����珇�ɁA�f�t�H���g�A�Œᕶ�����w��A�����̕\���A���l�߁A�����[���\��
	return 0;
}