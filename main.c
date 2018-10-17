#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    srand((unsigned int)time(NULL));
    int d1,d2,c1,c2,i,j;
    c1 = c2 = 0;
    for (j=1;j<=6;j++)
    {
        d1=d1+rand()%6+1;
        d2=d2+rand()%6+1;
    }
    if(d1>d2)
        c1++;
    else if(d1<d2)
        c2++;

}
   if (c1 > c2)
{
    printf("\nThe first win.");

}
else
{
       if (c1 < c2)
        printf("\nThe second win.");
      else
        printf("\nThe tie.");
  }
    return 0;
}
