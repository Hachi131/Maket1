// shift + alt + enter �༭�����

// ����ͷ�ļ�
// stdio=>printf
// stdlib=>system
#include <stdio.h>
#include <stdlib.h>
// ������ ��һ����������
int main(){
	// int ��ʾ���������ͣ� int
	// a ����������
	// = ��ֵ����
	// ����һ���������൱�ڿ���һ���ڴ�ռ�
	// �������� ������ĸ�»��߹��ɣ����ֲ��ܿ�ͷ��
	// ��������һЩ���������Ե�����
	// sizeof�鿴һ���������ڴ���ռ�����ֽ�
	// %d ��ʽ���ַ���
	// %d����ʮ�����з��ŵķ�ʽ��ӡһ������
	// \n ����
	// �ַ����͵ı���
	// c�����ṩ�˺ܶ������͵ı�������ͬ���͵ı������ڴ���
	// ռ�еĿռ��С��һ��
	char a = 0;
	//�����α���
	short b = 0;
	//���α���
	int c = 0;
	//�����α���
	long d = 0;
	// �������α���
	long long e = 0;
	float f = 0.0;
	printf("char��%d\n", sizeof(a));
	printf("short:%d\n", sizeof(b));
	printf("int��%d\n", sizeof(c));
	printf("long��%d\n", sizeof(d));
	printf("long long��%d\n", sizeof(e));

	
	system("pause"); 
	//���������� ִ�е���� return 0 �����ִ�н�����
	return 0;
}