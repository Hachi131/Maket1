#include<stdio.h>
#include<stdlib.h>

int main() {
	int age,days,i;
	printf("输入你的年龄：");
	scanf_s("%d", &age);
	i = age / 4; //闰年的情况
	if (age>=0||age <= 1000){
		days=age*365+i;
	}
	printf("转换后的天数为：%d\n", days);
	system("pause");
	return	0;
}