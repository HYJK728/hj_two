#include <stdio.h>
#include <string.h>
#include <math.h>
//1.strcpy函数
//int main() {
//	char arr1[] = "hyjk";
//	char arr2[20] = "yy";
//	//strcpy - string copy - 字符串拷贝（拷贝目的地，拷贝大小，拷贝起始地）
//	// 覆盖掉之前的内容，拷贝包含\0,
//	//strlen - string length - 字符串长度有关
//	strcpy_s(arr2,10,arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//2.memset - memory - 内存 set - 设置
//int main() {
//	char arr[] = "hello world";
//	//参数1-需要设置的对象 参数2-设置的符号 参数3-设置的个数
//	memset(arr, '*', 5);
//	printf("%s\n", arr); //***** world
//	return 0;
//}
//3.比较两个数的最大值
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
//4.两数交换
//定义函数
//形参-形式参数-形式上参数
//当实参传给形参的时候
//形参其实是实参的一份临时拷贝，对形参的修改是不会改变实参的
//void Swap1(int x, int y) {//传值
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//void Swap2(int* pa, int* pb) { //传入两个指针指向主函数中a，b的地址-传地址
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;//采用解地址 *pa==a
//
//}
//
//int main() {
//	int a = 10;
//	int b = 20;
//	printf("a = %d b = %d\n", a, b);
//	//Swap1(a, b);	//并没有交换，函数体里的a b地址与主函数中的不同
//	Swap2(&a, &b); //成功交换
//	printf("a = %d b = %d\n", a, b);
//
//	return 0;
//}

//练习1.判断是否为素数
//是素数返回1，不是素数返回0
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
//		//判断是否为素数
//		if (is_prime(i) == 1) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//练习2，二分查找，在一个有序数组中查找具体的某个数
//如果找到了返回下标，找不到返回-1
                //本质上arr是一个指针
//int binary_search(int arr[], int k,int sz) {
//	int left = 0;
////int sz = sizeof(arr) / sizeof(arr[0]);//不能求数组大小，得放到main函数里去求
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
//	                    //传递过去的是数组的首元素地址
//	int ret = binary_search(arr,k,sz);
//	if (ret == -1) {
//		printf("找不到指定数字\n");
//	}
//	else {
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}

//练习3.计算调用函数的次数
//void Add(int* p) {
//    (*p)++;//++优先级高于*p,得括号括起来
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

//6.链式访问
//int main() {
//    int len = 0;
//    //1.
//    /*len = strlen("abc");
//    printf("%d\n", len);*/
//    //2.链式访问
//    printf("%d\n", strlen("abc"));
//    return 0;
//}

//int main() {
//    //printf返回的是打印字符的个数
//    printf("%d", printf("%d", printf("%d", 43)));
//    return 0;
//}

//7.函数声明
//自定义函数用双引号引用
#include "Add.h"
//在Add.c定义函数---在Add.h头文件中声明函数---在test.c中引用头文件
int main() {
    int a = 10;
    int b = 20;
    int x = Add(a, b);
    printf("%d\n", x);
    return 0;
}

//8.递归
//递归的两个必要条件：
//1.存在限制条件，当满足这个限制条件的时候，递归便不在继续
//2.每次递归调用之后越来越接近这个限制条件
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

//递归求字符串长度
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
//    //模拟实现了一个strlen函数
//    int len = my_strlen(arr);
//    printf("%d\n", len);
//    return 0;
//}

//递归求阶乘
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

//递归求第n个斐波那契数
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

//递归效率低（栈溢出）2 用循环
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
