#include<stdio.h>
#include<stdlib.h>

int main() {
	//打印1-10
	int num = 1; 
	//如果条件成立，就执行循环体代码
	//如果条件不成立，就结束循环
	while (num <= 10) {
		printf("%d\n", num);
		num = num + 1;

	}
	system("pause");
	return 0;
}