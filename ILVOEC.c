#include <stdio.h>

int main(){
    int number;
    int *pointer = NULL;

    number = 1;

    printf("%zu\n", sizeof(number));
    printf("%zu\n", sizeof(*pointer));
    

    return 0;
}