#include <stdio.h>
#include <math.h>

int main() {
	//3-1
	int a = 68, b = 42;
	printf("a + b = %4d\na - b = %4d\na * b = %4d\na / b = %4d\na %% b = %4d\n", a + b, a - b, a * b, a / b, a % b);

	//3-2
	int value1;
	printf("value1 = ?  ");
	scanf("%d", &value1);

	printf("value1 = %05d\n", value1);

	//3-3
	double value2;
	printf("value2 = ?  ");
	scanf("%lf", &value2);

	printf("value2 = %.3f\n", value2);

	//3-4
	double c = 56.789, d = 12.34;
	printf("c + d = %.2f\nc - d = %.2f\nc * d = %.2f\nc / d = %.2f\n", c + d, c - d, c * d, c / d);

	//3-5
	int days = 365, hours = 24, minutes = 60, seconds = 60, conH, conM, conS;

	conH = days * hours;
	conM = conH * minutes;
	conS = conM * seconds;

	printf("1�N�́A%d��\n���Ԋ��Z�ŁA%d����\n�����Z�ŁA%d��\n�b���Z�ŁA%d�b\n", days, conH, conM, conS);

	//3-6
	int min;
	printf("min(0 <= min) = ?  ");
	scanf("%d", &min);

	printf("Result:%2dh%02dm\n", min / 60, min % 60);

	//3-7
	double base, height;

	printf("�O�p�`�̖ʐς��v�Z���܂��B���:base & ����:height = ?  ");
	scanf("%lf,%lf", &base, &height);

	printf("�O�p�`�̖ʐς́A%f�ł��B\n", (base * height) / 2);

	//3-8
	int price, inc_tax;
	printf("price = ?  ");
	scanf("%d", &price);

	double calc = price * 1.1;
	//�@�L���X�g�ɂ��l�̌ܓ�
	inc_tax = (int)(calc + 0.5);

	printf("�ō��݉��i:%d�~\n", inc_tax);

	//�Around�֐��ɂ��l�̌ܓ�
	inc_tax = (int)round(calc);
	printf("�ō��݉��i:%d�~\n", inc_tax);

	//3-9
	int value3 = 123;
	printf("[%+-5d]\n", value3);

	//3-10
	double value4 = 12.3456789;
	printf("[%+-7.1f]\n", value4);
	return 0;
}