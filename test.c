#include <stdio.h>
#include <math.h>
#include <time.h>
//14.P3954 [NOIP2017 �ռ���] �ɼ�
//int main() {
//	int A, B, C;
//	scanf_s("%d %d %d", &A, &B, &C);
//	double sum;
//	sum = A * 0.2 + B * 0.3 + C * 0.5;
//	printf("%.lf", sum);
//	return 0;
//
//}
//13.P1421 С�����ľ�
//int main() {
//	int a, b,sum;
//	scanf_s("%d %d", &a, &b);
//	sum = (a * 10 + b) / 19;
//	printf("%d\n", sum);
//	return 0;
//}
//12.P1425 С�����Ӿʱ��
//int main() {
//	int a, b, c, d, e, f;
//	scanf_s("%d %d %d %d", &a, &b, &c, &d);
//	e = c - a;
//	f = d - b;
//	if (f < 0) {
//		f = 60 + f;
//		e -= 1;
//	}
//	printf("%d %d\n", e, f);
//	return 0;
//}
//11.B2029 �����ˮ
//int main() {
//	int h, r;
//	double s;
//	scanf_s("%d %d", &h, &r);
//	s = ceil(20/(3.14 * r * r * h/1000));
//	printf("%.lf", s);
//	return 0;
//}
//int main()
//{
//	struct tm t;//�����������ͨ��localtime������gmtime�������tm�ṹ
//
//	t.tm_sec = 10;
//	t.tm_min = 10;
//	t.tm_hour = 6;
//	t.tm_mday = 25;
//	t.tm_mon = 2;
//	t.tm_year = 89;
//	t.tm_wday = 6;
//
//	printf("%s\n", asctime_s(&t));
//
//	return(0);
//}
//11.P5707 �����2.��12����ѧ�ٵ�
//int main() {
//	double s, v;
//	int h = 8;
//	int m = 0;
//	scanf_s("%lf %lf", &s, &v);
//	double i = ceil(s / v)+10;
//	h = h - floor(i / 60) - 1;
//	if (h < 0) {
//		h = 24 + h;
//		if (h < 7) {
//			printf("ʱ������");
//		}
//	}
//	m = 60 - ((int)i % 60);
//	printf("%02d:%02d\n", h, m);
//	return 0;
//}
////10.P5708 �����2.ϰ2�����������
//int main() {
//	double p, sum, a, b, c;
//	scanf_s("%lf %lf %lf", &a, &b, &c);
//	p =(a + b + c) / 2;
//	sum = sqrt(p*(p - a)*(p - b)*(p - c));
//	printf("%.1lf\n", sum);
//	return 0;
//}
////9.P5706 �����2.��8���ٷַ�լˮ
//int main() {
//	int sum, n;
//	double t,i;
//	scanf_s("%lf %d", &t, &n);
//	sum = n * 2;
//	i = t / n;
//	printf("%.3lf\n%d\n",i,sum);
//	return 0;
//}
//8.P5705 �����2.��7�����ַ�ת
// 1.�ҵ�����
//int main() {
//	double a,d,c,e;
//	//printf(% m.nf)  ��ʾ��ӡ����m���ַ����(����������С�����С�����ֵ�λ��)��nλС��
//	scanf_s("%lf", &a);//123.4
//	int b = (int)a;
//	//printf("%d\n", b);
//	e = (b % 10 * 100 + b % 100/10*10 + b / 100);
//	//printf("%lf\n", e/1000);
//	c = (a - b) * 10;
//	//printf("%.0lf\n", c);
//	printf("%.3lf\n",c+(e/1000));
//	return 0;
//}
//2.�ҵ�������//�����ύ����ȱ���ʧ��
//int main() {
//	double a;
//	scanf_s("%lf", &a);
//	int b = (int)a;
//	int e = (b % 10 * 100 + b % 100 / 10 * 10 + b / 100);
//	int c = (a - b) * 10;
//	printf("%d.%d\n", c, e);
//	return 0;
//}
// 3.���
//#include <cstdio>
//
//using namespace std;
//char a, b, c, d;
//int main() {
//	scanf_s("%c%c%c.%c", &a, &b, &c, &d);
//	printf("%c.%c%c%c", d, c, b, a);
//	return 0;
//}
//7.P5704 �����2.��6����ĸת��
//int main() {
//	char a;
//	scanf_s("%c", &a);
//
//	printf("%c", a-32);
//	return 0;
//}
//6.P5703 �����2.��5��ƻ���ɹ�
//int main() {
//	int a, b;
//	scanf_s("%d %d", &a, &b);
//	printf("%d\n", a * b);
//	return 0;
//}
//5.B2005 �ַ�������
//int main() {
//	char a;
//	scanf_s("%c", &a);
//	printf("  %c  \n %c%c%c \n%c%c%c%c%c\n", a,a,a,a,a,a,a,a,a);
//	return 0;
//}
//4.P1001 A+B Problem
//int main() {
//	int a,b,z;
//	scanf_s("%d %d", &a, &b);
//	z = a + b;
//	printf("%d\n", z);
//	return 0;
//}
//3.P1000
//int main() {
//	printf("                ********\n               ************\n               ####....#.\n             #..###.....##....\n             ###.......######              ###            ###\n                ...........               #...#          #...#\n               ##*#######                 #.#.#          #.#.#\n            ####*******######             #.#.#          #.#.#\n           ...#***.****.*###....          #...#          #...#\n           ....**********##.....           ###            ###\n           ....****    *****....\n             ####        ####\n           ######        ######\n##############################################################\n#...#......#.##...#......#.##...#......#.##------------------#\n###########################################------------------#\n#..#....#....##..#....#....##..#....#....#####################\n##########################################    #----------#\n#.....#......##.....#......##.....#......#    #----------#\n##########################################    #----------#\n#.#..#....#..##.#..#....#..##.#..#....#..#    #----------#\n##########################################    ############\n");
//	return 0;
//}

//2.B2025
//int main() {
//	printf("  *  \n *** \n*****\n *** \n  *  \n");
//	return 0;
//}

//1.B2002
//int main() {
//	printf("Hello,World!\n");
//	return 0;
//}