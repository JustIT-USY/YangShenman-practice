#include <stdio.h>
#include <stdlib.h>
int RSA(int baseNum,int key ,int msg)
{
    int RSAmsg = 1;
    key = key =1;
    while (key!=1)
    {
        RSAmsg=RSAmsg*msg;
          RSAmsg=RSAmsg%baseNum;
          key--;

    }
    return RSAmsg;

}
int main()
{
   int p,q,baseNum,Euler,r;
   int keyE,keyD,m_mag,c_msg;
   printf("������p,q:");
   scanf("%d%d",&p,&q);
   baseNum = p*q;
   Euler = (p-1)*(q-1);
   printf("�����빫Կ(��%d���ʣ���",Euler);
   scanf("%d",&keyE);
   while(keyE<1 || keyE>keyE);
   {
     printf("�������!\n���������룺");
        ccanf("%d",&keyE);


   }
   keyD = 1;
   while(((keyE*keyD) % Euler) != 1)
    keyD++;
   printf("˽�ܣ�%d\n",keyD);
   printf("1.����\n");
     printf("2.����\n");
       printf("3.�˳�\n");
       while(1)
       {
           printf("��ѡ��Ҫִ�еĲ���:");
           scanf("%d",&r);
           switch(r)
           {
           case 1:
            printf("������Ҫ���ܵ�����:");
            scanf ("%d",&m_msg);
            c_msg = RSA (baseNum,keyE,m_msg);
            printf("���ܺ������Ϊ:%d\n",c_msg);
            break;
            case 2:
            printf("������Ҫ���ܵ�����:");
            scanf("%d",&m_msg);
            c_msg = RSA(baseNum,keyD,c_msg);
            printf("���ܺ������Ϊ:%d\n",m_msg);
            break;
            case3:
                exit(0);
                break;
            default:
                printf("ѡ������\n");
                break;
           }
       }

    return 0;
}
