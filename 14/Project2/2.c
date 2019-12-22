#include<stdio.h>
#include<stdlib.h>

int main() {
	int year, i;
	printf("输入年份：");
	scanf_s("%d", &year);
	if (year % 400 == 0)	//该年份被400整除
		i = 1;
	else {  
		if (year % 4 == 0 && year % 100 != 0)  //该年份被4整除且不能被100整除
			i = 1;
		else 
			i = 0;
	}
	if (i == 1) {
		printf("%d 闰年\n", year);
	}
	else {
		printf("%d 平年\n", year);
	}
	system("pause");
	return 0;
}