#include <stdio.h>
 int main() {
    int reg;
    char name[25], branch[14], hobbies[100];
    printf("Enter your name :\n");
    gets(name);
    printf("Enter your Reg. no (last three digits):\n");
    scanf("%d", &reg);
    printf("Enter your branch : \n");
    gets(branch);
    printf("Your hobbies :\n");
    gets(hobbies);
    printf("\n\n");
    printf("Hello %s" ,name );
    printf("The informtion you entered are\n  Reg No : %d \n Branch : %s \n Hobbies : %s", reg, branch, hobbies );
    return 0;


}