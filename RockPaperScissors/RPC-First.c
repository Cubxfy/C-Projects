#include <stdio.h>
#include <stdlib.h>

int main(){
    int user_choice;
    int pc_choice = rand() % (4);

    // get user choice
    printf("1 - r\n2 - p\n3 - s\n");
    scanf("%d", &user_choice);

    //compare and return result
    if (user_choice == pc_choice){
        printf("Tie");
    }
    else if (user_choice == 1 && pc_choice == 2){
        printf("You picked rock and PC picked paper\nYou lose");
    }
    else if (user_choice == 1 && pc_choice == 3){
        printf("You rock PC scissor\nYou win");
    }
    else if (user_choice == 2 && pc_choice == 1){
        printf("won");
    }
    else if (user_choice == 2 && pc_choice == 3){
        printf("lost");
    }
    else if (user_choice == 3 && pc_choice == 1){
        printf("lost");
    }
    else if (user_choice == 3 && pc_choice == 2){
        printf("won");
    }

    printf("\n");

    return 0;
}