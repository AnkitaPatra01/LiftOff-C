#include <stdio.h>
int main() {
    int number, result;
    
    printf("Enter a number :");
    scanf("%d", &number);
    result = number%2;
    switch(result){
        case 0: {
            printf("The number is Even");
            break;
        }
        case 1: {
            printf("The number is Odd");
            break;
        }
        return 0;



      }

}