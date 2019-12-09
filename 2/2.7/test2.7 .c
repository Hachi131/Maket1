#include<stdio.h>
#include<stdlib.h>


int main() {
	//如果初始化时的数字较少，把前几个变量设置初值了，
	//剩下的变量就初始化为0
	//int arr[10]={1,2,3,4,5,6}
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//数组的使用[]去下标操作
	printf("%d\n", arr[0]);
	//printf("%d\n",arr[10]);
	//下标越界

	system("pause");
	return 0;
}
