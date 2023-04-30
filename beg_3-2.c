#include <stdio.h>
#include <math.h>

//�����̌v�Z
double main() {
	//�l�����Z
	double a = 1.1, b = 3.06;
	printf("a + b = %f\na - b = %f\na * b = %f\na / b = %f\n\n", a + b, a - b, a * b, a / b);


	//�]��̌v�Z(�w�b�_�t�@�C����math.h��ǂݍ��ޕK�v������)
	double c = fmod(b, a);
	/*
	fmod��math.h�ɒ�`����Ă���֐�
	fmod(a, b)��a��b�Ŋ��������̗]��(����)���v�Z�ł���
	*/
	printf("a��b�Ŋ��������̗]��́A%f\n\n", c);

	//�����̃[�����Z�G���[�ɂ���
	/*
	double e;
	printf("c = ?  ");
	scanf("%lf", &e);

	double d = a / e;

	if (d == INFINITY) {
		printf("Infinity\n"); 
		//�G���[�ɂ͂Ȃ�Ȃ����A���ʂ��uINFINITY(�������\���萔)�v�Ƃ��ĕ\�������
	}
	else if (d == -INFINITY) {
		printf("Negative Infinity\n"); //�u-INFINITY(�}�C�i�X�����̖�����)�v�����蓾��̂Œ���
	}
	else {
		printf("Result: %f\n\n", d);
	}
	*/

	//�����ɂ̓C���N�������g�E�f�N�������g���Z�q�͎g�p�s��

	//�����̕\�����@�̎w��
	a = 1.23456789;
	printf("%f\n", a);
	printf("%.2f\n", a); //�����_�ȉ��̌����w��(�߂�����d�v)�E�E�E�@
	printf("%10f\n", a); //�S�̂̍Œᕶ�����̎w��E�E�E�A
	printf("%6.2f\n", a); //�@ + �A �E�E�E�B
	printf("%+7.4f\n", a); //�����̕\��
	printf("%-9.2f\n\n", a); //���l��

	//�l�́A�l�̌ܓ�����ĕ\�������悤�ɂȂ��Ă���
	//long double�^�̏����̏ꍇ�A�����w��q�́u%Lf�v�ƂȂ�̂Œ���


	//�����̎w���\��(�����w��q�́u%e�v)
	double d = 0.01248;
	printf("%e\n", d);
	/*
	�o�͂���Ɓu1.248000e-02�v�ƕ\�������(���炭���������_�̌`���ŕ\�������)
	����̏ꍇ�A0.01248 -> 1.248(������) �~ 10^-2(�w����)
	(�������͐�������1���ɂȂ�悤�Ɍ��������������(�u125.3829�v�ł���΁A�u1.253829 �~ 10^2�v))

	�u1.248000e-02�v�́u1.248 �~ 10^-2 �v��\���Ă���
	�ue-02�v�̕����Ō��̐��̌�����m�邱�Ƃ��ł���(1.248000e+03�Ȃ�A���̐��́A1248)
	%e�ł��\���w��͉\
	*/
	a = 1024.28492;
	printf("%010.2e\n", a);

	//�w���\�L�̓R�[�f�B���O�ł��g�p�\
	b = 1.234e-04; // = 0.0001234
	printf("%+10.7f\n\n", b);


	//�w���\��(%g)
	double e = 0.0001248, f = 0.0000124;
	printf("e = %g\nf = %g\n\n", e, f);
	/*
	%g�͏����̌����ɂ���ĕ\�L���ς��
	��������10^-4�ȏ�(0.000(0��4��))�E�E�E%f�̃f�t�H���g�\�L
	��������10^-5�ȉ�(0.0000(0��5��))�E�E�E%e�̃f�t�H���g�\�L
	*/


	//�����Ə����̕ϊ�
	int gi = 1024;
	double g = (double)gi; //�u(�^��)�{�ϊ��������ϐ��v�Ő��l�̌^�������I�ɕϊ��ł���(�L���X�g)

	double h = 1.248;
	int hi = (int)h; // �t���R��(�������A�������琮���ɕϊ�����Ƃ��A�����_�ȉ��͐؂�̂Ă���̂Œ���)

	printf("g = %f, hi = %d\n\n", g, hi);


	//�������ۂ߂�ϊ�

	//1.���̏������l�̌ܓ�(�������琮���ւ̃L���X�g�̐����𗘗p) �����̏����ɂ͎g���Ȃ�
	g = 1.4, h = 1.5;
	int g1 = (int)(g + 0.5);
	int h1 = (int)(h + 0.5);
	printf("g1 = %d, h1 = %d\n\n", g1, h1);

	//2.���w�֐��̗��p
	double i = -1.4, j = -1.5;

	int w = (int)round(g);
	int x = (int)round(h);
	int y = (int)round(i);
	int z = (int)round(j);

	printf("g = %.1f,h = %.1f,i = %.1f,j = %.1f\n", g, h, i, j);
	printf("w = %-3d,x = %-3d,y = %-4d,z = %-4d\n\n", w, x, y, z); //�l�̌ܓ�

	w = (int)ceil(g);
	x = (int)ceil(h);
	y = (int)ceil(i);
	z = (int)ceil(j);

	printf("g = %.1f,h = %.1f,i = %.1f,j = %.1f\n", g, h, i, j);
	printf("w = %-3d,x = %-3d,y = %-4d,z = %-4d\n\n", w, x, y, z); //���̏����ȏ�̍ŏ��̐����Ɋۂ߂�

	w = (int)floor(g);
	x = (int)floor(h);
	y = (int)floor(i);
	z = (int)floor(j);

	printf("g = %.1f,h = %.1f,i = %.1f,j = %.1f\n", g, h, i, j);
	printf("w = %-3d,x = %-3d,y = %-4d,z = %-4d\n\n", w, x, y, z); //���̏����ȉ��̍ő�̐����Ɋۂ߂�
	
	w = (int)trunc(g);
	x = (int)trunc(h);
	y = (int)trunc(i);
	z = (int)trunc(j);

	printf("g = %.1f,h = %.1f,i = %.1f,j = %.1f\n", g, h, i, j);
	printf("w = %-3d,x = %-3d,y = %-4d,z = %-4d\n\n", w, x, y, z); //���̏�������0�ɋ߂������Ɋۂ߂�
	/*
	round,ceil,floor,trunc�͑S��double�^�̕ϐ��p�̊֐�

	�Efloat�^�̕ϐ��ŗ��p����Ȃ�A�֐����̖����Ɂuf�v���A
	�Elong double�^�ł���΁A�֐����̖����Ɂul�v�����ė��p���邱��

	*/
	return 0;
}