#include <stdio.h>
#include <string.h>
#include <math.h>
//1.strcpy����
//int main() {
//	char arr1[] = "hyjk";
//	char arr2[20] = "yy";
//	//strcpy - string copy - �ַ�������������Ŀ�ĵأ�������С��������ʼ�أ�
//	// ���ǵ�֮ǰ�����ݣ���������\0,
//	//strlen - string length - �ַ��������й�
//	strcpy_s(arr2,10,arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//2.memset - memory - �ڴ� set - ����
//int main() {
//	char arr[] = "hello world";
//	//����1-��Ҫ���õĶ��� ����2-���õķ��� ����3-���õĸ���
//	memset(arr, '*', 5);
//	printf("%s\n", arr); //***** world
//	return 0;
//}
//3.�Ƚ������������ֵ
//int get_max(int x, int y) {
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main() {
//	int a = 20;
//	int b = 30;
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}
//4.��������
//���庯��
//�β�-��ʽ����-��ʽ�ϲ���
//��ʵ�δ����βε�ʱ��
//�β���ʵ��ʵ�ε�һ����ʱ���������βε��޸��ǲ���ı�ʵ�ε�
//void Swap1(int x, int y) {//��ֵ
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//void Swap2(int* pa, int* pb) { //��������ָ��ָ����������a��b�ĵ�ַ-����ַ
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;//���ý��ַ *pa==a
//
//}
//
//int main() {
//	int a = 10;
//	int b = 20;
//	printf("a = %d b = %d\n", a, b);
//	//Swap1(a, b);	//��û�н��������������a b��ַ���������еĲ�ͬ
//	Swap2(&a, &b); //�ɹ�����
//	printf("a = %d b = %d\n", a, b);
//
//	return 0;
//}

//��ϰ1.�ж��Ƿ�Ϊ����
//����������1��������������0
//int is_prime(int n) {
//	int j;
//	for (j = 2; j < n/2; j++) {
//		if (n % j ==0) {
//			return 0;
//			break;
//		}	
//	}
//	return 1;
//}
//
//int main() {
//	int i = 0;
//	for (i = 100; i <= 200; i++) {
//		//�ж��Ƿ�Ϊ����
//		if (is_prime(i) == 1) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//��ϰ2�����ֲ��ң���һ�����������в��Ҿ����ĳ����
//����ҵ��˷����±꣬�Ҳ�������-1
                //������arr��һ��ָ��
//int binary_search(int arr[], int k,int sz) {
//	int left = 0;
////int sz = sizeof(arr) / sizeof(arr[0]);//�����������С���÷ŵ�main������ȥ��
//	int right = sz - 1;
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		if (k < arr[mid]) {
//			right = mid - 1;
//		}
//		else if (k > arr[mid]) {
//			left = mid + 1;
//		}
//		else {
//			return mid;
//			break;
//		}
//	}
//	return -1;
//}
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 17;
//	                    //���ݹ�ȥ�����������Ԫ�ص�ַ
//	int ret = binary_search(arr,k,sz);
//	if (ret == -1) {
//		printf("�Ҳ���ָ������\n");
//	}
//	else {
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}

//��ϰ3.������ú����Ĵ���
//void Add(int* p) {
//    (*p)++;//++���ȼ�����*p,������������
//}
//int main() {
//    int num = 0;
//    Add(&num);
//    printf("num = %d\n", num);//1
//    Add(&num);
//    printf("num = %d\n", num);//2
//    Add(&num);
//    printf("num = %d\n", num);//3
//    return 0;
//}

//6.��ʽ����
//int main() {
//    int len = 0;
//    //1.
//    /*len = strlen("abc");
//    printf("%d\n", len);*/
//    //2.��ʽ����
//    printf("%d\n", strlen("abc"));
//    return 0;
//}

//int main() {
//    //printf���ص��Ǵ�ӡ�ַ��ĸ���
//    printf("%d", printf("%d", printf("%d", 43)));
//    return 0;
//}

//7.��������
//�Զ��庯����˫��������
#include "Add.h"
//��Add.c���庯��---��Add.hͷ�ļ�����������---��test.c������ͷ�ļ�
int main() {
    int a = 10;
    int b = 20;
    int x = Add(a, b);
    printf("%d\n", x);
    return 0;
}

//8.�ݹ�
//�ݹ��������Ҫ������
//1.���������������������������������ʱ�򣬵ݹ�㲻�ڼ���
//2.ÿ�εݹ����֮��Խ��Խ�ӽ������������
//void print(int x) {
//    if (x > 9) {
//        print(x / 10);
//    }
//    printf("%d ",x % 10);
//}
//int main() {
//    unsigned int num = 0;
//    scanf_s("%d", &num);
//    print(num);
//    return 0;
//}

//�ݹ����ַ�������
//int my_strlen(char* str) {
//    if (*str != '\0')
//        return 1 + my_strlen(str + 1);
//    else
//        return 0;
//}
//
//int main() {
//    char arr[] = "hyjk";
//   /* int len = strlen(arr);
//    printf("%d\n", len);*/
//    //ģ��ʵ����һ��strlen����
//    int len = my_strlen(arr);
//    printf("%d\n", len);
//    return 0;
//}

//�ݹ���׳�
//int Facl(int n) {
//    if (n >= 1) {
//        return n * Facl(n-1);
//    }
//}
//int main() {
//    int n = 5;
//    int ret = 0;
//    ret = Facl(n);
//    printf("%d\n", ret);
//    return 0;
//}

//�ݹ����n��쳲�������
//int Fib(int n) {
//    if (n <= 2)
//        return 1;
//    else
//        return Fib(n - 1) + Fib(n - 2);
//}
//int main() {
//    int n = 0;
//    int ret = 0;
//    scanf_s("%d", &n);
//    ret = Fib(n);
//    printf("%d\n", ret);
//    return 0;
//}

//�ݹ�Ч�ʵͣ�ջ�����2 ��ѭ��
//int Fib(int n) {
//    int a = 1;
//    int b = 1;
//    int c = 1;
//    while (n > 2) {
//        c = a + b;
//        a = b;
//        b = c;
//        n--;
//    }
//    return c;
//}
//int main() {
//    int n = 0;
//    int ret = 0;
//    scanf_s("%d", &n);
//    ret = Fib(n);
//    printf("%d\n", ret);
//    return 0;
//}
