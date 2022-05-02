#include <stdio.h>
char* odd_even(int num);
int main() {
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    printf("Result : %s",odd_even(num));
    return 0;
}
char* odd_even(int num) {
    if(num % 2 == 0) {
        return("Even");
    }else{
        return("Odd");
    }
}