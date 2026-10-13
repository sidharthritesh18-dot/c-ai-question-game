#include <stdio.h>

int main(void) {
    int answer;
    int score = 0;

    printf("=================================\n");
    printf("       C AI Question Game\n");
    printf("=================================\n\n");

    printf("Question 1:\n");
    printf("What is a variable in C?\n\n");
    printf("1. A place used to store data\n");
    printf("2. A type of computer monitor\n");
    printf("3. A programming error\n");
    printf("4. A web browser\n\n");

    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 1) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Incorrect. The correct answer is 1.\n\n");
    }

    printf("Question 2:\n");
    printf("Which symbol ends most statements in C?\n\n");
    printf("1. :\n");
    printf("2. ;\n");
    printf("3. .\n");
    printf("4. ,\n\n");

    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Incorrect. The correct answer is 2.\n\n");
    }

    printf("Question 3:\n");
    printf("Which function displays text on the screen in C?\n\n");
    printf("1. scanf()\n");
    printf("2. input()\n");
    printf("3. printf()\n");
    printf("4. display()\n\n");

    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Incorrect. The correct answer is 3.\n\n");
    }

    printf("=================================\n");
    printf("Your final score: %d/3\n", score);
    printf("Thanks for playing!\n");

    return 0;
}
