#include<stdio.h>
#include<stdlib.h>

//函数的定义（创建一个新的函数）
//int 函数的返回类型
//Add 函数名
//int x,int y 函数的参数
//{}函数体
int Add(int x, int y) {
	// sum
	int sum = x + y;
	return sum;
	//return 表示函数返回了
}
int main() {
	int a = 10;
	int b = 20;
	int c = Add(a, b);
	printf("%d\n", c);
	//函数的调用
	system("pause");
	return 0;
}