#include<stdio.h>
#include<stdlib.h>

int main() {
	int bai, ten, ge, n;
	printf("�����:");
	for (n = 100; n < 1000; n++) {//������ȡֵ��Χ
		bai = n / 100;
		ten = (n - bai * 100) / 10;
		ge = n % 10;
		if (n == bai * bai * bai + ten * ten * ten + ge * ge * ge) //��λ�ϵ��������Ƿ���ԭ��n���
			printf("%d ", n);
	}
	printf("\n ");
	system("pause");
	return 0;
}
