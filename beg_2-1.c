//�ϐ��ɂ���

#include <stdio.h>

int main() {
	int a = 10, b = 20, c = 30, d = 40; //�����l�͕ϐ��̌^(int)�ƕϐ���(a,b,c,d)���L�q
	printf("a = %d, b = %d, c = %d, d = %d\n\n", a, b, c, d); 
	//printf�ŕϐ����o�͂���Ƃ��ɂ�,�����w��q(%d�A%f(d�͐����Af�͏���))��""���ɁA���ɃJ���}��؂�őΉ�����ϐ����L�q

	a = 15; //�ȍ~�ŕϐ��̒l��u��(10 -> 15)
	printf("a = %d\n\n", a);

	d = a + b + c; //�E�ӂŌv�Z�����l�ɒu�����邱�Ƃ��\
	printf("d = %d\n", d);

	int x;
	printf("x = ?  "); //���[�U�[�ɍs���𑣂����߂̕\����(�v�����v�g������)
	scanf("%d", &x); 
	/*
	scanf�֐��ŕϐ��ɓ���(VS�Ŏg�p����Ƃ��ɂ́ASDL�`�F�b�N���O����)

	*/

	b = c * x;
	printf("b = %d", b);
	return 0;
}