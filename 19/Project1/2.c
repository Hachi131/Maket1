#include<stdio.h>
#include<stdlib.h>

int efcz(int key, int a[], int n) {  //自定义函数efcz()
	int i, j, k = 0;
	int count = 0;
	int count1 = 0;
	i = 0;
	j = n - 1;
	while (i<j)  //查找范围不为0时执行循环体语句
	{
		count++; //记录查找次数
		k = (i + j) / 2; //求中间位置
		if (key < a[k])  //key小于中间值时
			j = k - 1;   //确定坐子表范围
		else if (key > a[k])  //key大于中间值时
			i = k + 1;        //确定右子表范围
		else if (key == a[k]) {  //key等于中间值时，证明查找成功
			printf("查找成功!\n查找%d次!a[%d]=%d", count, k, key);
			count1++;  //记录查找成功次数
			break;
		}
	}
	if (count1 == 0)   //判断是否查找失败
		printf("查找失败!");
		return 0;
}

int main() {
	int i, key, a[100], n;
	printf("请输入数组的长度:");  //输入元素组个数
	scanf_s("%d", &n);
	printf("请输入数组元素:");
	for (i = 0; i < n; i++)
		scanf_s("%d", &a[i]);     //输入有序数列到数组a中
	printf("请输入你想查找的元素:");
	scanf_s("%d", &key);          //输入要找的关键字
	efcz(key, a, n);              //调用自定义函数efcz()函数
	printf("\n");
	system("pause");
	return 0;
}