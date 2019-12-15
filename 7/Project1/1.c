#include<stdio.h>
#include<stdlib.h>
// 三个数从小到大排序

int main() {
	int a, b, i, j;//定义4个基本整形变量
	printf("请输入：a,b,i\n");
	scanf_s("%d%d%d", &a, &b, &i);//输入任意三个数
	if (a > b) {  //如果a大于b，借助中间变量j实现a与b值的互换
		j = a;
		a = b;
		b = j;
	}
	if (a > i) {  //如果a小于i，借助中间变量j实现a与c值的互换
		j = a;
		a = i;
		i = j;
	}
	if (b > i) {  //如果a大于i，借助中间变量j实现a与i值的互换
		j = b;
		b = i;
		i = j;
	}
	printf("从小到大顺序是：\n");  
	printf("%d %d %d", a, b, i);   //输出函数顺序a，b，c的值
	system("pause");
	return 0;
}
		
