#include<stdio.h>
#include<stdlib.h>

int main() {
	int year, i;
	printf("������ݣ�");
	scanf_s("%d", &year);
	if (year % 400 == 0)	//����ݱ�400����
		i = 1;
	else {  
		if (year % 4 == 0 && year % 100 != 0)  //����ݱ�4�����Ҳ��ܱ�100����
			i = 1;
		else 
			i = 0;
	}
	if (i == 1) {
		printf("%d ����\n", year);
	}
	else {
		printf("%d ƽ��\n", year);
	}
	system("pause");
	return 0;
}