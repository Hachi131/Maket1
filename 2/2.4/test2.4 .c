#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>



int main() {
	printf("��������ô����� 1 ��ʾ �ᣬ 0 ��ʾ���᣺");
		int choice = 0;
	//&����ȡ��ַ���š�
	scanf("%d", &choice);
	// == ��ʾ �Ƚ����	
	// = ��ʾ��ֵ
	if (choice == 1) {
		// ��������е��������⣬��ִ��{}�еĴ���
		printf("����õ���offer��\n");
	}
	else{
		//�����������������ִ��else{}�еĴ���
		printf("�ؼ���������!\n");
	}


}