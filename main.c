#include <stdio.h>
#include <stdlib.h>

int avg(int n)
{
    int sum=0;
    int data;
    int i=n;
    printf("������%d�����ݣ�\n",n);
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
    a=avg(n);                   //��������
    printf("��%d�����ݵ�ƽ��ֵΪ��%d\n",n,a);
    return 0;
}
