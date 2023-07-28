#include <stdio.h>
//数组是一组相同类型元素的集合。数组创建方式：
//type_t 是指数组的元素类型
// arr_name 是指数组名
//[const_n] 是一个常量表达式，用来指定数组的大小

//int main() {
//	/*int count = 10;
//	int arr1[count];*/ //这种方法不行 []中要给一个常量才可以，不能使用变量。
//	/*char arr2[10];
//	float arr3[1];
//	double arr4[20];
//	int arr5[10];*/ //这些都行
//
//	int arr[10] = { 1,2,3 }; //不完全初始化，剩下的元素默认为初始化为0
//	char arr2[5] = { 'a',98};
//	char arr3[5] = "ab";//字符串'\n'也占用一个位置
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));
//	//sizeof 计算 arr4所占空间大小 包括'\0' 7个元素-char 7*1=7
//	printf("%d\n", strlen(arr4));
//	//strlen 求字符串的长度-’\n'之前的字符个数 [a b c d e f \0] 6
//	return 0;
//}

//1.strlen 和 sizeof 没有什么关联
//2.strlen 是求字符串长度的-只能针对字符串求长度-库函数-使用时得引头文件
//3.sizeof 计算变量，数组，类型的大小-单位是字节 - 操作符

//int main() {
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1)); //4
//	printf("%d\n", sizeof(arr2)); //3
//	printf("%d\n", strlen(arr1)); //3
//	printf("%d\n", strlen(arr2)); //42 随机值 
//	//因为strlen是遇到'\0'才停止计算,而arr2没有'\0'，所以随机停下
//}

//int main() {
	//char arr[] = "abcdef";
	////printf("%c\n", arr[3]);
	////数组的遍历
	//int i = 0;
	//int len = (int)strlen(arr);
	//for (i = 0; i <len; i++) {
	//	printf("%c ", arr[i]);
	//}
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	//数组大小计算
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
//	//数组在内存中都是连续存放的
//}

//二维数组
//int main() {
//	//在初始化二维数组时，只能省略行下标，不能省略列下标
//	//打印二维数组
//	int arr[3][4] = { {1,2,3},{4,5 } };
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		int j = 0;
//		for (j = 0; j < 4; j++) {
//			//printf("%d ", arr[i][j]);
//			//二维数组在内存中也是连续的
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//冒泡排序
//void bubble_sort(int arr[],int sz) {
//	int i = 0;
//	int j = 0;
//	//确定冒泡排序的趟数
//	for (i = 0; i < sz-1; i++) {
//		int flag = 1;//假设这一趟要排序的数据已经有序
//		//第一趟冒泡排序
//		for (j = 0; j < sz-1-i; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//本趟排序的数据其实不完全有序
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
//	bubble_sort(arr,sz);//冒泡排序函数
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

int main() {
	int arr[] = { 1,2,3,4,5 };
	//数组名是首元素地址
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%d\n", *arr);

	//有两个例外
	//1.sizeof(数组名) - 数组名表示整个数组，sizeof(数组名)计算的是整个数组的大小，单位是字节
	int sz = sizeof(arr) / sizeof(arr[0]);
	//2. &数组名 ，数组名代表整个数组，&数组名，取出的是整个数组的地址

	return 0;
}