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
   printf("请输入p,q:");
   scanf("%d%d",&p,&q);
   baseNum = p*q;
   Euler = (p-1)*(q-1);
   printf("请输入公钥(与%d互质）：",Euler);
   scanf("%d",&keyE);
   while(keyE<1 || keyE>keyE);
   {
     printf("输入错误!\n请重新输入：");
        ccanf("%d",&keyE);


   }
   keyD = 1;
   while(((keyE*keyD) % Euler) != 1)
    keyD++;
   printf("私密：%d\n",keyD);
   printf("1.加密\n");
     printf("2.解密\n");
       printf("3.退出\n");
       while(1)
       {
           printf("请选择要执行的操作:");
           scanf("%d",&r);
           switch(r)
           {
           case 1:
            printf("请输入要加密的数据:");
            scanf ("%d",&m_msg);
            c_msg = RSA (baseNum,keyE,m_msg);
            printf("加密后的数据为:%d\n",c_msg);
            break;
            case 2:
            printf("请输入要解密的数据:");
            scanf("%d",&m_msg);
            c_msg = RSA(baseNum,keyD,c_msg);
            printf("解密后的数据为:%d\n",m_msg);
            break;
            case3:
                exit(0);
                break;
            default:
                printf("选择有误\n");
                break;
           }
       }

    return 0;
}
