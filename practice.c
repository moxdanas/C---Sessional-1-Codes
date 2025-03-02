#include <stdio.h>

int main(){
    int input;
    printf("which month name you wanna know : ");
    scanf("%d",&input);

    switch (input)
    {
    case 1:
        printf("January \n");
        break;
        
    case 2:
            printf("February \n");
            break;
        
        
    case 3:
            printf("March \n");
            break;
        
        
    case 4:
            printf("April \n");
            break;
        
    case 5:
            printf("may \n");
            break;
        
    case 6:
            printf("june \n");
            break;
        
    case 7:
            printf("july \n");
            break;
        
    case 8:
            printf("aug \n");
            break;
        
    case 9:
            printf("sep \n");
            break;
        
    case 10:
            printf("oct \n");
            break;
        
    case 11:
            printf("nov \n");
            break;
        
    case 12:
            printf("dec \n");
            break;
         
    default:
         printf("invalid month number , please enter the month number between 1 and 12");
            break;
        
    }
    
}











