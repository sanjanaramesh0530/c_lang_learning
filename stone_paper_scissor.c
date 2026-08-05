#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

const char *choices[] = {"Stone", "Paper", "Scissor"};

int get_computer_choice(void) {
    return rand() % 3;
}

int get_user_choice(void) {
    char input[16];
    while (1) {
        printf("Enter your choice (stone/paper/scissor) or q to quit: ");
        if (!fgets(input, sizeof(input), stdin)) {
            return -1;
        }

        for (int i = 0; input[i] != '\0'; i++) {
            input[i] = (char)tolower((unsigned char)input[i]);
        }

        if (input[0] == 'q') {
            return -1;
        }

        if (strstr(input, "stone") != NULL) {
            return 0;
        }
        if (strstr(input, "paper") != NULL) {
            return 1;
        }
        if (strstr(input, "scissor") != NULL) {
            return 2;
        }

        printf("Invalid input. Please type stone, paper, scissor, or q.\n");
    }
}

int determine_winner(int user, int computer) {
    if (user == computer) {
        return 0; // tie
    }
    if ((user == 0 && computer == 2) ||
        (user == 1 && computer == 0) ||
        (user == 2 && computer == 1)) {
        return 1; // user wins
    }
    return -1; // computer wins
}

int main(void) {
    int user_score = 0;
    int computer_score = 0;
    int round = 1;

    srand((unsigned)time(NULL));

    printf("Stone Paper Scissor Game\n");
    printf("-------------------------\n");
    printf("Type stone, paper, or scissor to play. Type q to quit.\n\n");

    while (1) {
        printf("Round %d:\n", round);
        int user_choice = get_user_choice();
        if (user_choice < 0) {
            break;
        }

        int computer_choice = get_computer_choice();
        printf("You chose: %s\n", choices[user_choice]);
        printf("Computer chose: %s\n", choices[computer_choice]);

        int result = determine_winner(user_choice, computer_choice);
        if (result == 0) {
            printf("Result: It's a tie!\n");
        } else if (result == 1) {
            printf("Result: You win!\n");
            user_score++;
        } else {
            printf("Result: Computer wins!\n");
            computer_score++;
        }

        printf("Score -> You: %d, Computer: %d\n\n", user_score, computer_score);
        round++;
    }

    printf("\nFinal score: You %d - Computer %d\n", user_score, computer_score);
    printf("Thanks for playing!\n");
    return 0;
}
