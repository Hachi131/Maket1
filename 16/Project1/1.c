#include<stdio.h>
#include<stdlib.h>
int xlpx(int s[], int n) {  //�Զ��庯��xlpx()
	int a, b, c;
	c = n / 2;  //ȷ���̶�����ֵ
	while (c >= 1) {
		for (a = c + 1; a <= n; a++) {  //�����±��c+1��ʼֱ�Ӳ�������
			s[0] = s[a];  //���ü�����
			b = a - c;    //ȷ��Ҫ���бȽϵ�Ԫ�ص����ұ�λ��
			while ((b>0)&&(s[0]<s[b]))
			{
				s[b + c] = s[b];  //��������
				b = b - c;        //������B��λ��
			}
		s[b + c] = s[0];          //��ȷ����λ�ò���s[i]
	}
	c = c / 2;                    //�����Ϊԭ����һ��
}
return 0;
}
int main() {
	int a[11], i;  //�������ݼ�����Ϊ��������
	printf("������10����ֵ��\n");
	for (i = 1; i <= 10; i++)
	scanf_s("%d", &a[i]);
	xlpx(a, 10);   //����xlpx��������
	printf("������˳���ǣ�\n");
	for (i = 1; i <= 10; i++)
	printf("%5d", a[i]);
	printf("\n");
	system("pause");
	return 0;
}