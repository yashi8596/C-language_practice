//�ϐ��ɂ���

#include <stdio.h>

int main() {
	int a = 10, b = 20, c = 30, d = 40; //�����l�͕ϐ��̌^(int)�ƕϐ���(a,b,c,d)���L�q
	printf("a = %d, b = %d, c = %d, d = %d\n\n", a, b, c, d);

	a = 15; //�ȍ~�ŕϐ��̒l��u���ł���(10 -> 15)
	printf("a = %d\n\n", a);

	d = a + b + c;
	printf("d = %d\n", d);
	return 0;
}