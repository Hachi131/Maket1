#include<stdio.h>
#include<stdlib.h>

int main() {
	int i, j;
	printf("�˷��ھ���\n");
	for (i = 1; i <= 9;i++) {
			for (j = 1;j <= i; j++) 
				printf("%d*%d=%d ", i,j,i * j);
			putchar('\n');//putchar ���һ���ַ�
			}
	system("pause");
	return 0;
}