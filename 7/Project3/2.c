#include<stdio.h>
#include<stdlib.h>
//一个数组中元素升序排列
int main() {
	int i,j,t,a[11];
	printf("请输入10个数：\n");
	for (i = 1; i <11; i++) 
		scanf_s("%d", &a[i]);   //输入任意10个整数
		for(i=1;i<10;i++)       //变量i代表比较的趟数
			for(j=1;j<11-i;j++) //变量j代表每趟两两比较的次数
				if (a[j] > a[j + 1]) {
					t = a[j];   //利用中间变量实现两数值的互换
					a[j] = a[j + 1];
					a[j + 1] = t;
				}
		printf("排序后顺序为：\n");
		for (i = 1; i <= 10; i++)
		printf(" %5d", a[i]);    //将冒泡排序后的顺序输出
		printf("\n");
		system("pause");
		return 0;
}
