int main() {
    int secretnumber=5;
    int guess;
    printf("Guess the secret number between 1 and 10: ");
    scanf("%d", &guess);
    int guess_count = 0;
    int guess_limit = 3;
    int out_of_guesses = 0;

    while (guess != secretnumber && !out_of_guesses) {
        if (guess_count < guess_limit) {
            printf("Wrong guess! Try again: ");
            scanf("%d", &guess);
            guess_count++;
        } else {
            out_of_guesses = 1;
        }
    }
    if (out_of_guesses) {
        printf("Out of guesses! The secret number was %d.\n", secretnumber);
    } else {
        printf("Congratulations! You guessed the secret number.\n");
    }
    return 0;
}