#include<stdio.h>
#include<stdlib.h>

int efcz(int key, int a[], int n) {  //�Զ��庯��efcz()
	int i, j, k = 0;
	int count = 0;
	int count1 = 0;
	i = 0;
	j = n - 1;
	while (i<j)  //���ҷ�Χ��Ϊ0ʱִ��ѭ�������
	{
		count++; //��¼���Ҵ���
		k = (i + j) / 2; //���м�λ��
		if (key < a[k])  //keyС���м�ֵʱ
			j = k - 1;   //ȷ�����ӱ�Χ
		else if (key > a[k])  //key�����м�ֵʱ
			i = k + 1;        //ȷ�����ӱ�Χ
		else if (key == a[k]) {  //key�����м�ֵʱ��֤�����ҳɹ�
			printf("���ҳɹ�!\n����%d��!a[%d]=%d", count, k, key);
			count1++;  //��¼���ҳɹ�����
			break;
		}
	}
	if (count1 == 0)   //�ж��Ƿ����ʧ��
		printf("����ʧ��!");
		return 0;
}

int main() {
	int i, key, a[100], n;
	printf("����������ĳ���:");  //����Ԫ�������
	scanf_s("%d", &n);
	printf("����������Ԫ��:");
	for (i = 0; i < n; i++)
		scanf_s("%d", &a[i]);     //�����������е�����a��
	printf("������������ҵ�Ԫ��:");
	scanf_s("%d", &key);          //����Ҫ�ҵĹؼ���
	efcz(key, a, n);              //�����Զ��庯��efcz()����
	printf("\n");
	system("pause");
	return 0;
}