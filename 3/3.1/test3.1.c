#include<stdio.h>
#include<stdlib.h>

int main() {
	//��100-200���ҵ����б�2����������
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