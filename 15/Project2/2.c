#include<stdio.h>
#include<stdlib.h>

int zjpx(int s[], int n) {  //�Զ��庯��zjpx
	int i, j;
	for (i = 2; i <= n; i++) {  //�����±��2��ʼ��s[0]�������ڣ�s[1]һ�������޿ɱ���
		s[0] = s[i];  //�������ڸ�ֵ
		j = i - 1;    //ȷ��Ҫ�Ƚ�Ԫ�ص����ұ�λ
		while(s[0]<s[j])
		{
			s[j + 1] = s[j];  //��������
				j--;  //���������һ��δ�Ƚϵ���
		}
		s[j + 1] = s[0];  //��ȷ����λ�ò���s[i]
	}
	return 0;
}
int main() {
	int a[11], i;  //�������鼰����Ϊ��������
	printf("����10����ֵ��\n");
	for (i=1;i<=10;i++)
		scanf_s("%d", &a[i]);
	printf("ԭʼ˳��\n");
	for (i = 1; i < 11; i++)
		printf("%5d", a[i]);  //��δ����ǰ��˳�����
	zjpx(a, 10);              //�����Զ��庯��zjpx
	printf("\n������ֵ������˳��\n"); 
	for (i = 1; i < 11; i++)
		printf("%3d", a[i]);  //���������������
	printf("\n");
	system("pause");
	return 0;

}