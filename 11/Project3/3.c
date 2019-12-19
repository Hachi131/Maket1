#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	int line;  //菱形总行数
	int column;//菱形总列数
	int i;     //当前行
	int j;     //当前列

	printf("请输入菱形的行数:");  //行数为奇数
	scanf_s("%d", &line);
	if (line % 2 == 0) {  //判断是否是奇数
		printf("必须输入奇数!\n");
		exit(1);
	}
	column = line; //总行数和总列数相同	
	for (i = 1; i <= line; i++) {    //遍历所有行
		if (i < (line + 1) / 2 + 1) {  //上半部分
			for (j = 1; j <= column; j++) {  //遍历上半部分所有列
				if( (column + 1) / 2 - (i - 1) <= j && j <= (column + 1) / 2 + (i - 1)) {
					printf("*");
				}
				else {
					printf(" ");
				}
			}
		}
		else { //下半部分
			for (j = 1; j <= column; j++) { //遍历下半部分的所有列
				if ((column + 1) / 2 - (line -i ) <= j && j <= (column + 1) / 2 + (line - i)) {
					printf("*");
				}else{
					printf(" ");
				}
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;	

}