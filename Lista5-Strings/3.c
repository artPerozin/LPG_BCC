#include <stdio.h>

char str1[] = "ola";
char str2[] = " mundo";

void concatena(char str1[], char str2[]);

int main() {
    char s1[50] = "ola";
    char s2[] = " mundo";
    concatena(s1, s2);
    printf("%s\n", s1);
    return 0;
}

void concatena(char str1[], char str2[]) {
    int i = 0, j = 0;

    while (str1[i] != '\0') {
        i++;
    }

    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';
}

