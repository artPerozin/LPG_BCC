#include <stdio.h>
#include <stdbool.h>

bool ehPalindrome(char s[]);

int main() {
    char s[] = "subinoonibus";

    if (ehPalindrome(s)) {
        printf("eh palindrome\n");
    } else {
        printf("nao eh palindrome\n");
    }

    return 0;
}

bool ehPalindrome(char s[]) {
    int i = 0;
    
    while (s[i] != '\0') {
        i++;
    }

    int inicio = 0;
    int fim = i - 1;

    while (inicio < fim) {
        if (s[inicio] != s[fim]) {
            return false;
        }
        inicio++;
        fim--;
    }

    return true;
}
