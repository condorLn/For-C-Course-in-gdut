#include<stdio.h> 

int main()
{
	printf("以下为1000以内的完数：\n");
    int scale = 1000;
    int n = 1;
    int i = 1;
    for (n=1; n<=scale; n++)	//从1到1000里按顺序选取要验证的数n 
    { 
        int sum = 0;			//定义被验证数所有因子之和为sum 
        int k = (n+1)/2;		//因为一个数的因子不可能大于该数的1/2，所以令验证因子范围从1到该数1/2即可，提高程序效率 
        for (i=1; i<=((n+1)/2); i++)	//从1到n+1/2中按顺序选取因子验证，用n+1是为了保证在奇数情况下k始终大于n/2 
        { 
            if (n%i == 0)
                sum = sum + i;
        } 
    	if (sum == n)			//当因子和等于改数，便输出该数 
			printf("%d\n",sum);
    } 
	return 0;
}


