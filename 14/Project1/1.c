#include<stdio.h>
#include<stdlib.h>

int main() {
	int age,days,i;
	printf("����������䣺");
	scanf_s("%d", &age);
	i = age / 4; //��������
	if (age>=0||age <= 1000){
		days=age*365+i;
	}
	printf("ת���������Ϊ��%d\n", days);
	system("pause");
	return	0;
}