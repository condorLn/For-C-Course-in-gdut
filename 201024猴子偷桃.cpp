#include<stdio.h>

int main()
{
	int sum = 1;
	int i = 10;
	while(i > 1)
	{
		i = i - 1;
		sum = (sum + 1) * 2;	/*i在上表示下面的sum是第几天的总桃子数，当计算完第一天的总数后，i = 0,因此可以跳出循环*/
	}
	printf("第一天一共摘了%d个桃子",sum);
	return 0;
}

//请交作业之前先删除所有备注
