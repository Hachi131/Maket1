#include<stdio.h>
#include<stdlib.h>
//һ��������Ԫ����������
int main() {
	int i,j,t,a[11];
	printf("������10������\n");
	for (i = 1; i <11; i++) 
		scanf_s("%d", &a[i]);   //��������10������
		for(i=1;i<10;i++)       //����i����Ƚϵ�����
			for(j=1;j<11-i;j++) //����j����ÿ�������ȽϵĴ���
				if (a[j] > a[j + 1]) {
					t = a[j];   //�����м����ʵ������ֵ�Ļ���
					a[j] = a[j + 1];
					a[j + 1] = t;
				}
		printf("�����˳��Ϊ��\n");
		for (i = 1; i <= 10; i++)
		printf(" %5d", a[i]);    //��ð��������˳�����
		printf("\n");
		system("pause");
		return 0;
}
