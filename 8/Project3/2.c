#include<stdio.h>
#include<stdlib.h>

int main() {
	printf("输入一行字符：\n");
	char ch;
	int i, count = 0, word = 0;
	//getchar只能接收单个字符，输入数字也按字符处理，同时输入多个字符字符时，也只接收一个字符
	while ((ch = getchar()) != '\n') //getchar把输入的字符赋予一个字符变量这里把ch=getchar（）
		if (ch == ' ') //如果ch= 空字符成立，执行1
			word = 0;
		else if (word == 0) {  //否则，执行2
			word = 1;
			count++;
		}
	printf("总共有%d个单词\n", count);
	system("pause");
	return 0;
}