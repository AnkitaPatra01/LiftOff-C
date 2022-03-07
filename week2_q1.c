#include <stdio.h> 
#include <string.h> 

int main() {
    int n,i;
    char string1[100],string2[100];
    printf("String 1 :\n");
    gets(string1);
    printf("String 2 :\n"); 
    gets(string2);
    strcat(string1,string2);
    n = strlen(string1);
    for(i = n - 1; i >= 0 ; i-- ) {
        printf("%c",string1[i]);
    }
    
    
    



}