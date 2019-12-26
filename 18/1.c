#include<stdio.h>
#include<stdlib.h>

int kspx(int s[], int start, int end) {  //自定义函数 kspx()
	int i, j;  //定义变量为基本整型
	i = start; //将每组首个元素赋给i
	j = end;   //将每组末尾元素赋给j
	s[0] = s[start];  //设置基准值
	while (i<j)
	{
		while(i < j && s[0] < s[j])
			j--;  //位置左移
		if (i < j) {
			s[i] = s[j];  //将是[j]放到s[i]的位置上
			i++;  //位置左移
		}
		while(i < j&& s[i] <= s[0])  //将大于基准值的s[j]放到s[i]位置
			i++;  //位置左移
		if (i < j) {
			s[j] = s[i];
			j--;
		}
	}
	s[i] = s[0];  //将基准值放入指定位置
	if (start < i)
		kspx(s, start, j - 1);  //对分割出的部分递归调用kspx()函数
	if (i < end)
		kspx(s, j + 1, end);
	return 0;
}

int main() {
	int a[11], i;  //定义数组及变量为基本整型
	printf("请输入十个数值:");
	for (i = 1; i <= 10; i++)
		scanf_s("%d", &a[i]);
	kspx(a, 1, 10);  //调用kspx()函数进行排序
	printf("排列后的顺序是:\n");
	for (i = 1; i <= 10; i++)
		printf("%6d", a[i]);  //输出排列好的数组
	printf("\n");
	system("pause");
	return 0;
}
