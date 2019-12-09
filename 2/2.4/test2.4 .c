#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>



int main() {
	printf("你会认真敲代码吗？ 1 表示 会， 0 表示不会：");
		int choice = 0;
	//&叫做取地址符号。
	scanf("%d", &choice);
	// == 表示 比较相等	
	// = 表示赋值
	if (choice == 1) {
		// 如果（）中的条件诚意，就执行{}中的代码
		printf("你会拿到好offer！\n");
	}
	else{
		//如果条件不成立，就执行else{}中的代码
		printf("回家卖串串吧!\n");
	}


}