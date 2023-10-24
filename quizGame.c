#include <stdio.h>
#include <ctype.h>

int main() {
    char ques[][100] = {
        "1. What are we currently learning in Comp 333?: ",
        "2. Who created Computer?: ",
        "3. What is the predecessor of C?: "};

    char options[][4][100] = {
        {"A. Open MP", "B. Basic Java", "C. Functional Programming", "D. Adv. Java"},
        {"A. Elon Musk", "B. Charles Babbage", "C. Mark Zuckerberg", "D. Steve Jobs"},
        {"A. Java", "B. Python", "C. Ruby", "D. B"}};

    char answer[3] = {'A', 'B', 'D'};

    int numberOfQuestions = sizeof(ques) / sizeof(ques[0]);

    char guess = ' ';
    int score = 0;

    printf("QUIZ GAME\n");

    for (int i = 0; i < numberOfQuestions; i++) {
        printf("\n*********************************\n");
        printf("%s\n", ques[i]);
        printf("*********************************\n");

        for (int j = 0; j < 4; j++) {
            printf("%s\n", options[i][j]);
        }

        printf("guess: ");
        scanf(" %c", &guess);  // Use a space before %c to consume the newline character
        guess = toupper(guess);

        if (guess == answer[i]) {
            printf("Correct answer\n");
            score++;
        } else {
            printf("Wrong Answer\n");  // Added a missing newline character
        }
    }

    printf("*********************\n");
    printf("FINAL SCORE: %d/%d\n", score, numberOfQuestions);
    printf("*********************\n");

    return 0;
}
