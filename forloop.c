#include<stdio.h>
PROGRAM TO WRITE THE  NUMBERS BETWEEN 1-10.

int main(){
    int i;
    for (i = 0; i <=10; i++)
    {
        printf("%d \n",i );
    }
}

FIND THE SUM OF ODD NUMBER BETWEEN 1-10.
#include<stdio.h>
int main(){
    int i , sum=0;
    for(i=1;i<=10;i+=2){
        if(i%2!=0){
            printf("%d \n",i);
            sum+=i;  //sum= sum + i
        }
    }
    printf("The sum of odd numbers between 1-10 is %d ",sum);
}

PRINT THIS PATTERN
/*

*****
****
***
**
*

*/

#include<stdio.h>
int main(){
    int a,b;
    for(a=5;a>=1;a--){
        for(b=1;b<=a;b++){
            printf("* ");
        }
        printf("\n");
    }
}

PRINT THIS PATTERN
/*
5 4 3 2 1 
5 4 3 2 
5 4 3 
5 4 
5
*/

#include<stdio.h>
int main(){
    int a , b;
    for (a=1;a<=5;a++){
        for (b=5;b>=a;b--){  //  b-- decrement logic
            printf("%d ",b);
            }
            printf("\n");
        }
    }


//  [1  10  2  9  3  8  4  7  5  6]
//   +9 -8  +7 -6 +5 -4 +3 -2 +1

#include<stdio.h>
int main(){
    int a=1,b=10;
    while (a<=10)
    {
        printf("%d\n%d \n",a,b);
        a++;
        b--;
    }
}

/*
1
1 2
1 2 3 
1 2 3 4 
*/

#include <stdio.h>
int main(){
int i ,j ;
for(i=1;i<=4;i++){
    for(j=1;j<=i;j++){
        printf("%d ",j);}
        printf("\n");}
   }



// #include <stdio.h>

// int main(){
//     int side;
//     printf("Enter side :");
//     scanf("%d",&side);
//     printf("THe area is: %d \n",side*side);
//     return 0;
// }


