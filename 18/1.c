#include<stdio.h>
#include<stdlib.h>

int kspx(int s[], int start, int end) {  //�Զ��庯�� kspx()
	int i, j;  //�������Ϊ��������
	i = start; //��ÿ���׸�Ԫ�ظ���i
	j = end;   //��ÿ��ĩβԪ�ظ���j
	s[0] = s[start];  //���û�׼ֵ
	while (i<j)
	{
		while(i < j && s[0] < s[j])
			j--;  //λ������
		if (i < j) {
			s[i] = s[j];  //����[j]�ŵ�s[i]��λ����
			i++;  //λ������
		}
		while(i < j&& s[i] <= s[0])  //�����ڻ�׼ֵ��s[j]�ŵ�s[i]λ��
			i++;  //λ������
		if (i < j) {
			s[j] = s[i];
			j--;
		}
	}
	s[i] = s[0];  //����׼ֵ����ָ��λ��
	if (start < i)
		kspx(s, start, j - 1);  //�Էָ���Ĳ��ֵݹ����kspx()����
	if (i < end)
		kspx(s, j + 1, end);
	return 0;
}

int main() {
	int a[11], i;  //�������鼰����Ϊ��������
	printf("������ʮ����ֵ:");
	for (i = 1; i <= 10; i++)
		scanf_s("%d", &a[i]);
	kspx(a, 1, 10);  //����kspx()������������
	printf("���к��˳����:\n");
	for (i = 1; i <= 10; i++)
		printf("%6d", a[i]);  //������кõ�����
	printf("\n");
	system("pause");
	return 0;
}
