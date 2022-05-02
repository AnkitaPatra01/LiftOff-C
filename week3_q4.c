#include <stdio.h>

int swap(int*,int*);
int main() {
    int a,b;
    printf("Enter two numbers :");
    scanf("%d %d",&a,&b);
    printf("Swapped numbers are :%d and %d",b,a);
    swap(&a,&b);
}
int swap(int* p, int* q) {
    int c;
    c = *p;
    *p = *q;
    *q = c;
}