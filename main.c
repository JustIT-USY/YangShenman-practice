#include <stdio.h>
#include <stdlib.h>
float sum;
void Add(float op1,float op2)
{
    sum = (float)op1 + op2;
    printf("%.2f\n",sum);


}
   void Sub(float op1,float op2)
{
    sum = op1 - op2;
     printf("%.2f\n",sum);

}
    void Mult(float op1,float op2)
{
    sum = op1 * op2;
     printf("%.2f\n",sum);

}
  void Div(float op1,float op2)
{
    if (op2 == 0)
     printf("被除数不能为0!");
     else{
        sum =op1/op2;
        printf("%.2f\n",sum);

     }

}


int main()
{
    float op1,op2;
    char ch;
    while (1)
    {
        scanf("%f%c%f",&ch,&op2);
        swich(ch)
        {
        case '+':
            Add (op1,op2);
            break;
            case '-':
             Sum (op1,op2);
            break;
            case '*':
             Mult (op1,op2);
            break;
            case '/':
             Div (op1,op2);
            break;
            default:
                break;

        }
    }

    return 0;
}
