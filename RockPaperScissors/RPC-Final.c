#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int user_choice;
    srand((unsigned)time(NULL));
    int pc_choice = rand() % 3 + 1;

    enum {
        R = 1,
        P,
        s,
    };
    
    const char *choice_str[] = { "", "Rock", "Paper", "Scissors" };
    const char *outcome_str[] = { "Tie", "You win", "You lose" };

    // get user choice
    printf("1 - r\n2 - p\n3 - s\n");
    scanf("%d", &user_choice);
    
    int outcome = (user_choice - pc_choice + 3) % 3;

    printf("PC: %s | You: %s → %s\n",
        choice_str[pc_choice],
        choice_str[user_choice],
        outcome_str[outcome]);

    printf("\n");

    return 0;
}
