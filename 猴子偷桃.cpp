#include<stdio.h>

int main()
{
	int sum = 1;
	int i = 10;
	while(i > 1)
	{
		i = i - 1;
		sum = (sum + 1) * 2;	/*i���ϱ�ʾ�����sum�ǵڼ�����������������������һ���������i = 0,��˿�������ѭ��*/
	}
	printf("��һ��һ��ժ��%d������",sum);
	return 0;
}
