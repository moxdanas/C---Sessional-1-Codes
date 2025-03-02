#include <stdio.h>

int main(){
    float a , b , sum,multiplication,division;
    printf("Enter a : ");
    scanf("%f",&a);
    printf("Enter b : ");
    scanf("%f",&b);
    sum=a+b;
    multiplication=a*b;
    division=a/b;
    printf("The sum  is %f :" , sum);
    printf("The multiplication is %f :" , multiplication);
    printf("The division is  %f :" , division);
    return 0;
}


#include <stdio.h>
int main(){
    int a,b,sum,sub,mul,div;
    char input;
    printf("enter a: ");
    scanf("%d",&a);
    printf("enter b: ");
    scanf("%d",&b);
    
    sum=a+b;
    div=a/b;
    mul=a*b;
    sub=a-b;

    fflush(stdin);
    printf("enter mathematical operation you wanna do(+,-,*,/):  ");
    scanf("%c",&input);

    switch (input)
    {
    case '+':
        printf("%d\n",sum);
        break;
    
    case '-':
        printf("%d\n",sub);
        break;
    
    case '*':
        printf("%d\n",mul);
        break;
    
    case '/':
        printf("%d\n",div);
        break;


    default:
    printf("JNL \n");
        break;
    }

}