#include <stdio.h> 

int main() {
    int a, b, i;
    printf("Enter two numbers :");
    scanf("%d %d", &a ,&b);
    printf("Arithmatic Operations\n\n 1. Addition \n 2. Substraction \n 3. Multiplication \n 4. Division \n");
    printf("Select one of the Operation :");
    scanf("%d", &i);
    switch(i){
        case 1: {
            printf("Addition : Adding %d and %d gives %d", a, b, a + b);
            break;
        }
        case 2: {
            printf("Subtraction : Subtracting %d from % d gives %d", b, a, a - b);
            break;
        }
        case 3: {
            printf("Multiplication : multiplying %d with %d gives %d", a, b, a * b);
            break;
        }
        case 4: {
            float result = a/b;
            printf("Division : Dividing %d from %d gives %f", a, b, result);
            break;
        }
        default :{
            printf("invalid");
        }
    }
    return 0;


    


}