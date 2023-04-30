#include <stdio.h>
#include <math.h>

//小数の計算
double main() {
	//四則演算
	double a = 1.1, b = 3.06;
	printf("a + b = %f\na - b = %f\na * b = %f\na / b = %f\n\n", a + b, a - b, a * b, a / b);


	//余りの計算(ヘッダファイルにmath.hを読み込む必要がある)
	double c = fmod(b, a);
	/*
	fmodはmath.hに定義されている関数
	fmod(a, b)でaをbで割った時の余り(小数)を計算できる
	*/
	printf("aをbで割った時の余りは、%f\n\n", c);

	//小数のゼロ除算エラーについて
	/*
	double e;
	printf("c = ?  ");
	scanf("%lf", &e);

	double d = a / e;

	if (d == INFINITY) {
		printf("Infinity\n"); 
		//エラーにはならないが、結果が「INFINITY(無限大を表す定数)」として表示される
	}
	else if (d == -INFINITY) {
		printf("Negative Infinity\n"); //「-INFINITY(マイナス方向の無限大)」もあり得るので注意
	}
	else {
		printf("Result: %f\n\n", d);
	}
	*/

	//小数にはインクリメント・デクリメント演算子は使用不可

	//小数の表示方法の指定
	a = 1.23456789;
	printf("%f\n", a);
	printf("%.2f\n", a); //小数点以下の桁数指定(めっちゃ重要)・・・①
	printf("%10f\n", a); //全体の最低文字数の指定・・・②
	printf("%6.2f\n", a); //① + ② ・・・③
	printf("%+7.4f\n", a); //符号の表示
	printf("%-9.2f\n\n", a); //左詰め

	//値は、四捨五入されて表示されるようになっている
	//long double型の小数の場合、書式指定子は「%Lf」となるので注意


	//小数の指数表示(書式指定子は「%e」)
	double d = 0.01248;
	printf("%e\n", d);
	/*
	出力すると「1.248000e-02」と表示される(恐らく浮動小数点の形式で表示される)
	今回の場合、0.01248 -> 1.248(仮数部) × 10^-2(指数部)
	(仮数部は整数部が1桁になるように桁数が調整される(「125.3829」であれば、「1.253829 × 10^2」))

	「1.248000e-02」は「1.248 × 10^-2 」を表している
	「e-02」の部分で元の数の桁数を知ることができる(1.248000e+03なら、元の数は、1248)
	%eでも表示指定は可能
	*/
	a = 1024.28492;
	printf("%010.2e\n", a);

	//指数表記はコーディングでも使用可能
	b = 1.234e-04; // = 0.0001234
	printf("%+10.7f\n\n", b);


	//指数表示(%g)
	double e = 0.0001248, f = 0.0000124;
	printf("e = %g\nf = %g\n\n", e, f);
	/*
	%gは小数の桁数によって表記が変わる
	仮数部が10^-4以上(0.000(0が4つ))・・・%fのデフォルト表記
	仮数部が10^-5以下(0.0000(0が5つ))・・・%eのデフォルト表記
	*/


	//整数と小数の変換
	int gi = 1024;
	double g = (double)gi; //「(型名)＋変換したい変数」で数値の型を強制的に変換できる(キャスト)

	double h = 1.248;
	int hi = (int)h; // 逆も然り(ただし、小数から整数に変換するとき、小数点以下は切り捨てられるので注意)

	printf("g = %f, hi = %d\n\n", g, hi);


	//小数を丸める変換

	//1.正の小数を四捨五入(小数から整数へのキャストの性質を利用) ※負の小数には使えない
	g = 1.4, h = 1.5;
	int g1 = (int)(g + 0.5);
	int h1 = (int)(h + 0.5);
	printf("g1 = %d, h1 = %d\n\n", g1, h1);

	//2.数学関数の利用
	double i = -1.4, j = -1.5;

	int w = (int)round(g);
	int x = (int)round(h);
	int y = (int)round(i);
	int z = (int)round(j);

	printf("g = %.1f,h = %.1f,i = %.1f,j = %.1f\n", g, h, i, j);
	printf("w = %-3d,x = %-3d,y = %-4d,z = %-4d\n\n", w, x, y, z); //四捨五入

	w = (int)ceil(g);
	x = (int)ceil(h);
	y = (int)ceil(i);
	z = (int)ceil(j);

	printf("g = %.1f,h = %.1f,i = %.1f,j = %.1f\n", g, h, i, j);
	printf("w = %-3d,x = %-3d,y = %-4d,z = %-4d\n\n", w, x, y, z); //その小数以上の最小の整数に丸める

	w = (int)floor(g);
	x = (int)floor(h);
	y = (int)floor(i);
	z = (int)floor(j);

	printf("g = %.1f,h = %.1f,i = %.1f,j = %.1f\n", g, h, i, j);
	printf("w = %-3d,x = %-3d,y = %-4d,z = %-4d\n\n", w, x, y, z); //その小数以下の最大の整数に丸める
	
	w = (int)trunc(g);
	x = (int)trunc(h);
	y = (int)trunc(i);
	z = (int)trunc(j);

	printf("g = %.1f,h = %.1f,i = %.1f,j = %.1f\n", g, h, i, j);
	printf("w = %-3d,x = %-3d,y = %-4d,z = %-4d\n\n", w, x, y, z); //その小数から0に近い整数に丸める
	/*
	round,ceil,floor,truncは全てdouble型の変数用の関数

	・float型の変数で利用するなら、関数名の末尾に「f」を、
	・long double型であれば、関数名の末尾に「l」をつけて利用すること

	*/
	return 0;
}