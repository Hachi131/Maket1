#include<stdio.h>
#include<stdlib.h>

int main() {
	//��ʼ��Ϊ��
	int a = 0;
	int b = 0;
	//a=100ʱ��ʼ����ѭ����ÿִ����һ��ѭ��a��ֵ��100�ۼ�1����a=201ʱ�����ѭ��
	for (a = 100; a <= 200; a += 1){
		int c = 0;
		for (c =2; c <=a - 1; c++) {
			if (a % c == 0)
				break;//����ѭ��
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