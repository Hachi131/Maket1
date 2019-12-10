#include<stdio.h>
#include<stdlib.h>

int main() {
	//从100-200中找到所有被2整除的整数
	int num = 100;
	while (num <= 200) {
		if (num % 2 == 0) {
			printf("%d\n", num);
		}
		num+=1;
	}
	system("pause");
	return 0;
}