#include <stdio.h>

int main(){
    float first_num;
    float second_num;
    float result;
    char operation;

    printf("Num 1, Num2, Operation\n");
    scanf("%f %f %c", &first_num, &second_num, &operation);

    switch (operation) {
        case '+':
            result = first_num + second_num;
            break;
        case '-':
            result = first_num - second_num;
            break;
        case '*':
            result = first_num * second_num;
            break;
        case '/':
            if (second_num){
            result = first_num / second_num;
            break;
            }
            else {
                break;
            }
    }

    (second_num) ? printf("%lf", result) : printf("cannot divide by zero");

    return 0;
}