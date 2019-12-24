#include<stdio.h>
#include<stdlib.h>
int xlpx(int s[], int n) {  //自定义函数xlpx()
	int a, b, c;
	c = n / 2;  //确定固定增随值
	while (c >= 1) {
		for (a = c + 1; a <= n; a++) {  //数组下标从c+1开始直接插入排序
			s[0] = s[a];  //设置监视哨
			b = a - c;    //确定要进行比较的元素的最右边位置
			while ((b>0)&&(s[0]<s[b]))
			{
				s[b + c] = s[b];  //数据右移
				b = b - c;        //向左移B个位置
			}
		s[b + c] = s[0];          //在确定的位置插入s[i]
	}
	c = c / 2;                    //增里变为原来的一半
}
return 0;
}
int main() {
	int a[11], i;  //定义数据及变量为基本整型
	printf("请输入10个数值：\n");
	for (i = 1; i <= 10; i++)
	scanf_s("%d", &a[i]);
	xlpx(a, 10);   //调用xlpx（）函数
	printf("排序后的顺序是：\n");
	for (i = 1; i <= 10; i++)
	printf("%5d", a[i]);
	printf("\n");
	system("pause");
	return 0;
}