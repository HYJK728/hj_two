#include <stdio.h>
#include <math.h>
#include <string.h>

//P1055 [NOIP2008 �ռ���] ISBN ����
int main() {
	char a[14], mod[12] = "0123456789X"; //�Ƚ�mod11���ʮһ���ַ���������
	gets(a); //�����ַ���
	int i, j = 1, t = 0;
	for (i = 0; i < 12; i++) {
		if (a[i] == '-') continue; //�ַ���Ϊ�ָ�����-��ʱ�����˴�ѭ��������һ��ѭ��
		t += (a[i] - '0') * j++; //t���� ��j��  ����  * j �ĺ�
	}
	if (mod[t % 11] == a[12]) printf("Right");
	else {
		a[12] = mod[t % 11]; //��ʶ�����������ȷ��ʶ���룬Ȼ�����
		puts(a);
	}
	return 0;
}
// �Լ�Ҳû������������˼ҵ�
//int main() {
//	char arr[14];
//	int sum = 0;
//	int j = 1;
//	int i;
//	char x;
//	for (i = 0; i < 14; i++) {
//		scanf_s("%c", &arr[i]);
//		if (arr[i] == '\n') break;
//	}
//	arr[i] = '\0';
//	/*puts(arr);*/
//	for (i = 0; i < 11; i++) {
//		if (arr[i] != '-') {
//			sum += (arr[i] - 48) * j;
//			j++;
//		}
//	}
//	x = sum % 11;
//	/*for (i = 0; i < 14; i++) {
//		printf("%c", arr[i]);
//	}*/
//	if (x == 10) {
//		x = "x";
//	}
//
//	if (arr[12] == x) {
//		printf("Right");
//	}
//	else {
//		arr[12] = x;
//		for (i = 0; i < 14; i++) {
//			printf("%d", arr[i]);
//		}
//		printf("\n");
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}

//P4414 [COCI2006-2007#2] ABC
//����ⲻ�ᣬ�ַ���������ݲ���

//int main() {
//	int a, b, c, tmp, x, i;
//	char str[3];
//	scanf_s("%d %d %d", &a, &b, &c);
//	for (i = 0; i < 1; i++) {
//		scanf_s("%d", &x);
//		str[i] = x;
//	}
//	if (a >= b) {
//		tmp = b;
//		b = a;
//		a = tmp;
//	}
//	if (b >= c) {
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	if (a >= b) {
//		tmp = b;
//		b = a;
//		a = tmp;
//	}
//	
//	if (str == "ABC") {
//		printf("%d %d %d\n", a, b, c);
//	}
//	if (str == "CAB") {
//		printf("%d %d %d\n", c, a, b);
//	}
//	if (str == "CBA") {
//		printf("%d %d %d\n", c, b, a);
//	}
//	if (str == "ACB") {
//		printf("%d %d %d\n", a, c, b);
//	}
//	if (str == "BAC") {
//		printf("%d %d %d\n", b, a, c);
//	}
//	if (str == "BCA") {
//		printf("%d %d %d\n", b, c, a);
//	}
//
//
//	return 0;
//}

//P1046 [NOIP2005 �ռ���] ����ժƻ��
//int main() {
//	int i, x,y,n=0;
//	int arr[10];
//	for (i = 0; i<10; i++) {
//		scanf_s("%d", &x);
//		arr[i] = x;
//	}
//	scanf_s("%d", &y);
//	for (i = 0; i < 10; i++) {
//		if (y + 30 >= arr[i]) {
//			n += 1;
//		}
//	}
//	printf("%d\n", n);
//	return 0;
//}

//P1888 ���Ǻ���
//int main() {
//	int a, b, c,tmp;
//	scanf_s("%d %d %d", &a, &b, &c);
//	if (a >= b) {
//		tmp = b;
//		b = a;
//		a = tmp;
//	}
//	if (b >= c) {
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	if (a >= b) {
//		tmp = b;
//		b = a;
//		a = tmp;
//	}
//	for (int i = 2; i <= a; i++) {
//		if (a % i == 0) {
//			if (c % i == 0) {
//				a = a / i;
//				c = c / i;
//				//printf("%d %d\n", a, c);
//			}
//		}
//	}
//	printf("%d/%d\n", a, c);
//	return 0;
//}

//P1424 С��ĺ��̣��Ľ���
//int main() {
//	int x, n, s = 0;
//	scanf_s("%d %d", &x, &n);
//	for (int i = 1; i <= n;i++) {
//		if (x != 6 && x != 7) {
//			s += 250;
//		}
//		if (x == 7) {
//			x = 1;
//		}else
//			x++;
//	}
//	printf("%d\n", s);
//	return 0;
//}
//����������Ҫ��������⣬�Ҿ�Ȼ��ͼ������п��ܣ�Ȼ���80�֣������������û����
// �������벻������ô���ˣ����֣�Ȼ��ο����˵Ĵ��룬�ͺܼ��
// ����û�б���ĩ���������ס���ܴ����������ۼӣ�����
// ������д���뻹����ѧ�ð�������ĺ��޴���û���뵽�ɷ���
// ��������ȥ��������п����ԣ������ٲ���
//int main() {
//	int x, n, j, i;
//	int m = 0;
//	scanf_s("%d %d", &x, &n);//6 3
//	i = (x - 1 + n) / 7;//1
//	j = (x - 1 + n) % 7;//1
//	if (i == 0) {
//		if (j <= 5) {
//			m = (j - x + 1) * 250;
//		}
//		else {
//			m = (6 - x) * 250;
//		}
//	}
//	if(i>=1){
//		if (j <= 5) {
//			m = (6 - x + 5*(i-1) + j) * 250;//5-6+i+i
//		}
//		else {
//			m = (5 * i + 6 - x) * 250;
//		}	
//	}
//	if (x > 5) {
//		if ((x - 1 + n) == 7 || (x - 1 + n) == 6) {
//			m = 0;
//		}
//	}
//	printf("%d\n", m);
//	return 0;
//}

//P1422 С��ҵĵ��
//int main() {
//	int i;
//	double sum;
//	scanf_s("%d", &i);
//	if (i <= 150) {
//		sum = i * 0.4463;
//	}
//	if (i > 150 && i <= 400) {
//		sum = (i - 150) * 0.4663 + 150 * 0.4463;
//	}
//	if (i > 400) {
//		sum = (i - 400) * 0.5663 + 250 * 0.4663 + 150 * 0.4463;
//	}
//	printf("%.1lf", sum);
//	return 0;
//}

//P5717 �����3.ϰ8�������η���
//int main() {
//	int a, b, c;
//	int tmp;
//	scanf_s("%d %d %d", &a, &b, &c);
//	if (a >= b) {
//		tmp = b;
//		b = a;
//		a = tmp;
//	}
//	if (b >= c) {
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	if (a >= c) {
//		tmp = c;
//		c = a;
//		a = tmp;
//	}
//	if (a + b <= c) {
//		printf("Not triangle\n");
//	}
//	else {
//		if (a * a + b * b == c * c) {
//			printf("Right triangle\n");
//		}
//		if (a * a + b * b < c * c) {
//			printf("Obtuse triangle\n");
//		}
//		if (a * a + b * b > c * c) {
//			printf("Acute triangle\n");
//		}
//		if (a == b || b == c) {
//			printf("Isosceles triangle\n");
//		}
//		if (a == b && b == c) {
//			printf("Equilateral triangle\n");
//		}
//	}
//	return 0;
//}

//P1909 [NOIP2016 �ռ���] ��Ǧ��
//int main() {
//	int n=0;
//	scanf_s("%d", &n);
//	int x1, x2, x3, y1, y2, y3, sum1, sum2, sum3;
//	scanf_s("%d %d\n%d %d\n%d %d", &x1, &y1, &x2, &y2, &x3, &y3);
//	sum1 = ceil(n / (double)x1) * y1;
//	sum2 = ceil(n / (double)x2) * y2;
//	sum3 = ceil(n / (double)x3) * y3;
//	if (sum1 <= sum2 && sum1 <= sum3)
//	{
//		printf("%d\n", sum1);
//	}
//	if (sum2 <= sum1 && sum2 <= sum3)
//	{
//		printf("%d\n", sum2);
//	}
//	if (sum3 <= sum1 && sum3 <= sum2)
//	{
//		printf("%d\n", sum3);
//	}
//	return 0;
//}

//P1085 [NOIP2004 �ռ���] �����˵Ľ��
//int main() {
//	int i, x, y,m;
//	int arr[7];
//	int n = 0;
//	for (i = 0; i < 7; ++i) {
//		scanf_s("%d %d", &x, &y);
//		arr[i] = x + y;
//	}
//	n = arr[0];
//	for (i = 1; i < 7;) {
//		if (n >= arr[i]) {
//			i++;
//		}
//		else {
//			n = arr[i];
//			m = i+1;
//			i++;
//		}
//	}
//	if (n > 8) {
//		printf("%d\n", m);
//	}
//	else {
//		printf("0");
//	}
//	return 0;
//}

//P5716 �����3.��9���·�����
//int main() {
//	int y, m, n;
//	scanf_s("%d %d", &y, &m);
//	
//	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
//		n = 31;
//	}
//	else {
//		n = 30;
//	}if (m == 2) {
//		n = 28;
//	}
//	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
//		if (m == 2) {
//			n = 29;
//		}
//	}
//	printf("%d\n", n);
//
//	return 0;
//}

//P5715 �����3.��8����λ������
//int main() {
//	int a, b, c,tmp;
//	scanf_s("%d %d %d", &a, &b, &c);
//		if (a >= b) {
//			tmp = b;
//			b = a;
//			a = tmp;
//		}
//		if (b >= c) {
//			tmp = b;
//			b = c;
//			c = tmp;
//		}
//		if (a >= b) {
//			tmp = b;
//			b = a;
//			a = tmp;
//		}
//	
//	printf("%d %d %d", a, b, c);
//}

//P5714 �����3.��7����������
// �����⣬��֪��Ϊʲô��������
//int main() {
//	double m = 0;
//	double h = 0;
//	double x = 0;
//	scanf_s("%lf %lf", m, h);
//	x = m / h * h;
//	if (x < 18.5) {
//		printf("Underweight");
//	}
//	if (x >= 18.5 && x < 24) {
//		printf("Normal");
//	}
//	if (x >= 24) {
//		printf("%lf\nOverweight\n", x);
//	}
//	return 0;
//}

//P5713 �����3.��5������Ŷ�ϵͳ
//int main() {
//	int n;
//	scanf_s("%d", &n);
//	if (5 * n > 3 * n + 11) {
//		printf("Luogu");
//	}
//	else
//		printf("Local");
//	return 0;
//}

//P5712 �����3.��4��Apples
//int main() {
//	int x = 0;
//	scanf_s("%d", &x);
//	if (x==1 || x==0) {
//		printf("Today, I ate %d apple.\n",x);
//	}
//	else
//		printf("Today, I ate %d apples.\n", x);
//	return 0;
//}

//P5711 �����3.��3�������ж�
//int main() {
//	int i = 0;
//	scanf_s("%d", &i);
//	if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) {
//		printf("1");
//	}
//	else
//		printf("0");
//
//	return 0;
//}

//P5710 �����3.��2����������
//int main() {
//	int x;
//	int a, b, c, d;
//	scanf_s("%d", &x);
//	if (x % 2 == 0 && (x>4 && x<=12))
//		a = 1;
//	else
//		a = 0;
//	if (x % 2 == 0 || (x > 4 && x <= 12))
//		b = 1;
//	else
//		b = 0;
//	if ((x % 2 == 0 && (x > 12 || x <= 4)) || (x % 2 != 0 && (x > 4 && x <= 12)))
//		c = 1;
//	else
//		c = 0;
//	if (x % 2 != 0 && (x > 12 || x<=4))
//		d = 1;
//	else
//		d = 0;
//	printf("%d %d %d %d\n", a, b, c, d);
//	return 0;
//}

//P5709 �����2.ϰ6��Apples Prologue / ƻ���ͳ���
//��Ŀע��� 1.���ǳ���Ϊ0����� 2.�����̲�Ϊ���������������ȡ�� 3.����ƻ����������
//int max(int x, int y) {
//	if (x >= y) {
//		return x;
//	}
//	return y;
//}
//int main() {
//	int m, t, s;
//	scanf_s("%d %d %d", &m, &t, &s);
//	if (t == 0) {
//		printf(0);
//		return 0;
//	}
//	if (s % t != 0) {
//		printf("%d\n", max(m - s / t - 1,0));
//	}
//	else
//		printf("%d\n", max(m - s / t,0));
//	return 0;
//}

//#include<iostream>
//P2433 �����1-2��Сѧ��ѧ N ��һ
// 5.
//int main() {
	//14
	//int a = -1, b = 100, c = -2400;
	//double x1, x2,d;
	//d = b * b - 4 * a * c;
	//x1 = (-b - sqrt(d) )/ (2 * a);//���һԪ���η���  60
	//x2 = (-b + sqrt(d) )/ (2 * a);//40
	//x1 = 110 - x1;
	//x2 = 110 - x2;
	//if (x2 > x1) {
	//	printf("%d",(int)(x1+0.5));//round(double x)��������ȡ��
	//}
	//else
	//	printf("%d", (int)(x2+0.5));
	//13.
	/*int r = 4;
	int r2 = 10;
	double x = 3.141593;
	double v = x * r * r * r + x * r2 * r2 * r2;
	printf("%lf\n", v);
	int i = pow(v,1.0/3);//������
	printf("%d\n", i);*/
	//12.
	/*int i = 'M';
	int j = 18;
	printf("%d\n", i-64);
	printf("%c\n", j + 64);*/
	//11.
	/*double x;
	int a = 5;
	int b = 8;
	x = 100 / (b - a);
	cout << x << endl;*/
	//10
	//ax+by=m;
	// cx+dy=n
	// x=(md-bn)/(ad-bc)
	// y=(mc-an)/(bc-ad)
	/*double a = 1, b = 30, c = 1, d = 6, m = 240, n = 60, x, y;
	x = (m * d - b * n) / (a * d - b * c);
	y = (m * c - a * n) / (b * c - a * d);
	double t = (x + y * 10) / 10;
	printf("%.lf\n", t);*/
	
	//9.
	/*int i = 1;
	int j = 1;
	for (j = 1; j < 4; j++) {
		i = (i + 1 )* 2;
	}
	printf("%d\n", i);*/
	//8
	/*int r = 5;
	double s, d, v;
	double x = 3.141593;
	d = 2 * x * r;
	s = x * r * r;
	v = x * r * r * r;
	cout << d\n << s\n << v\n;*/
	//7.
	/*int sum = 100;
	int i = 10;
	int j = 20;
	sum = sum + i;
	printf("%d\n", sum);
	sum = sum - j;
	printf("%d\n", sum);*/
	//6.
	/*int i = 6;
	int j = 9;
	int a = sqrt(i * i + j * i);
	cout << a << endl;*/
	/*int a = 12;
	int b = 20;
	int c = 260;
	int d = 220;
	int s = (c + d) / (a + b);
	printf("%d\n", s);*/
//	return 0;
//}
// 4.
//int main() {
//	double  i = 500;
//	double j = 3;
//	double a = i / j;
//	printf("%.6g\n", a);
//	return 0;
	/*���涨���Ϊp��С��qλ����% p.qf���
	���涨���� + С��һ��nλ��Ч���� % .ng���*/

// 3.
//int main() {
//	int i = 14;
//	int j = 4;
//	int a = i / j;
//	int b = i % j;
//	int c = i - b;
//	printf("%d\n%d\n%d\n", a, c, b);
//	return 0;
//}