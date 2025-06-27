#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int checkList(input){
    return (input >= 1 && input <= 3); 
}

int main(){
    int user_choice = 10;
    srand((unsigned)time(NULL));
    
    while (user_choice != 0){ 
        int pc_choice = rand() % 3 + 1;

        // get user choice
        do {
        printf("1 - r\n2 - p\n3 - s\n");
        scanf("%d", &user_choice);

        if (!checkList(user_choice)) {
            printf("Invalid Option\n");
        }

    } while (!(checkList(user_choice)));

        //compare and return result
        if (user_choice == pc_choice) {
            printf("Tie\n");
        }
        else {
            switch (user_choice){
                case 1:
                    if (pc_choice == 2){
                        printf("You lose\nYou: Rock | PC: Paper");
                        break;
                    }
                    else if (pc_choice == 3){
                        printf("You win\nYou: Rock | PC: Scissors");
                        break;
                    }
                case 2: 
                    if (pc_choice == 1){
                        printf("You win\nYou: Paper | PC: Rock");
                        break;
                    }
                    else if (pc_choice == 3){
                        printf("You lose\nYou: Paper | PC: Scissors");
                        break;
                    }
                case 3:
                    if (pc_choice == 1){
                        printf("You lose\nYou: Scissors | PC: Rock");
                        break;
                    }
                    else if (pc_choice == 2){
                        printf("You win\nYou: Scissors | PC: Paper");
                        break;
                    }
            }
      
        printf("\n");

        }
    }

    return 0;
}