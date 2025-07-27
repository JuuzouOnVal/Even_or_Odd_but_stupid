#include <stdio.h>

const int stringLength = 7;
char word[] = "eovdedn";
char newLine = '\n';

void resetEvenOdd() {
    char resetWord[] = "eovdedn";
    for(int i = 0; i < stringLength; ++i) {
        word[i] = resetWord[i];
    }
}

void evenOrOdd(int number) {
    resetEvenOdd();
    int index = number % 2;
    int len = index * (-1) + 4;
    int i = 0;
    while(i < len) {
        word[i] = word[index];
        ++i;
        index += 2;
    }
    while(i < stringLength) {
        word[i] = ' ';
        ++i;
    }
}

int main() {
    printf("%s %c", word, newLine);
    evenOrOdd(2);
    printf("%s %c", word, newLine);
    evenOrOdd(21);
    printf("%s %c", word, newLine);
    evenOrOdd(120);
    printf("%s %c", word, newLine);
    return 0;
}