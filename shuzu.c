#include <stdio.h>
//������һ����ͬ����Ԫ�صļ��ϡ����鴴����ʽ��
//type_t ��ָ�����Ԫ������
// arr_name ��ָ������
//[const_n] ��һ���������ʽ������ָ������Ĵ�С

//int main() {
//	/*int count = 10;
//	int arr1[count];*/ //���ַ������� []��Ҫ��һ�������ſ��ԣ�����ʹ�ñ�����
//	/*char arr2[10];
//	float arr3[1];
//	double arr4[20];
//	int arr5[10];*/ //��Щ����
//
//	int arr[10] = { 1,2,3 }; //����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ��Ϊ��ʼ��Ϊ0
//	char arr2[5] = { 'a',98};
//	char arr3[5] = "ab";//�ַ���'\n'Ҳռ��һ��λ��
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));
//	//sizeof ���� arr4��ռ�ռ��С ����'\0' 7��Ԫ��-char 7*1=7
//	printf("%d\n", strlen(arr4));
//	//strlen ���ַ����ĳ���-��\n'֮ǰ���ַ����� [a b c d e f \0] 6
//	return 0;
//}

//1.strlen �� sizeof û��ʲô����
//2.strlen �����ַ������ȵ�-ֻ������ַ����󳤶�-�⺯��-ʹ��ʱ����ͷ�ļ�
//3.sizeof ������������飬���͵Ĵ�С-��λ���ֽ� - ������

//int main() {
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1)); //4
//	printf("%d\n", sizeof(arr2)); //3
//	printf("%d\n", strlen(arr1)); //3
//	printf("%d\n", strlen(arr2)); //42 ���ֵ 
//	//��Ϊstrlen������'\0'��ֹͣ����,��arr2û��'\0'���������ͣ��
//}

//int main() {
	//char arr[] = "abcdef";
	////printf("%c\n", arr[3]);
	////����ı���
	//int i = 0;
	//int len = (int)strlen(arr);
	//for (i = 0; i <len; i++) {
	//	printf("%c ", arr[i]);
	//}
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	//�����С����
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("arr[%d] = %p\n", i, &arr[i]);
//	}
//	//�������ڴ��ж���������ŵ�
//}

//��ά����
//int main() {
//	//�ڳ�ʼ����ά����ʱ��ֻ��ʡ�����±꣬����ʡ�����±�
//	//��ӡ��ά����
//	int arr[3][4] = { {1,2,3},{4,5 } };
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		int j = 0;
//		for (j = 0; j < 4; j++) {
//			//printf("%d ", arr[i][j]);
//			//��ά�������ڴ���Ҳ��������
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//ð������
//void bubble_sort(int arr[],int sz) {
//	int i = 0;
//	int j = 0;
//	//ȷ��ð�����������
//	for (i = 0; i < sz-1; i++) {
//		int flag = 1;//������һ��Ҫ����������Ѿ�����
//		//��һ��ð������
//		for (j = 0; j < sz-1-i; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//���������������ʵ����ȫ����
//			}
//		}
//		if (flag == 1) {
//			break;
//		}
//	}
//}
//int main() {
//	int arr[] = { 10,9,8,7,15,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	bubble_sort(arr,sz);//ð��������
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

int main() {
	int arr[] = { 1,2,3,4,5 };
	//����������Ԫ�ص�ַ
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%d\n", *arr);

	//����������
	//1.sizeof(������) - ��������ʾ�������飬sizeof(������)���������������Ĵ�С����λ���ֽ�
	int sz = sizeof(arr) / sizeof(arr[0]);
	//2. &������ �������������������飬&��������ȡ��������������ĵ�ַ

	return 0;
}