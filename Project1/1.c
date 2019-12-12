#include<stdio.h>
#include<stdlib.h>

int main() {
	//初始化为零
	int a = 0;
	int b = 0;
	//a=100时开始进入循环，每执行完一次循环a的值从100累加1，当a=201时候结束循环
	for (a = 100; a <= 200; a += 1){
		int c = 0;
		for (c =2; c <=a - 1; c++) {
			if (a % c == 0)
				break;//跳出循环
		}
		if (a == c) {
			b++;
			printf("%d\n", a);
		}
	}
		printf("b=%d", b);
	system("pause");
	return 0;
}	