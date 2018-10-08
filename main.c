#include <stdio.h>
#include <stdlib.h>

int avg(int n)
{
    int sum=0;
    int data;
    int i=n;
    printf("请输入%d个数据：\n",n);
    while(i>0)
    {
        scanf("%d",&data);
        sum+=data;
        i--;
    }
    int avg=sum/n;
    return avg;
}
int main()
{
    int n=3,a=0;
    a=avg(n);                   //函数调用
    printf("这%d个数据的平均值为：%d\n",n,a);
    return 0;
}
