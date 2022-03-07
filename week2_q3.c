#include <stdio.h>
#include <math.h>
int main() {
    int num,digits,divide,first,midnum,last,swapnum;
    printf("Enter a number :");
    scanf("%d",&num);
    digits = log10(num);
    divide = pow(10,digits);
    first = num / divide;
    midnum = num / 10;
    last = num % 10;
    swapnum = last * divide + midnum * 10 + first;
    printf("Swap number is %d",swapnum);

}