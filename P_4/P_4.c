#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void generatePermutations(char **strings, int start, int end) {
    if (start == end) {
        for (int i = 0; i < end; i++) {
            printf("%s ", strings[i]);
        }
        printf("\n");
    } else {
        for (int i = start; i < end; i++) {
            // Swap the current element with itself and all the following elements
            for (int j = start; j < i; j++) {
                if (strcmp(strings[i], strings[j]) == 0) {
                    continue; // Skip duplicates
                }
            }
            swap(strings[start], strings[i]);
            generatePermutations(strings, start + 1, end);
            swap(strings[start], strings[i]);
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    char *strings[n];
    for (int i = 0; i < n; i++) {
        strings[i] = malloc(100); // Allocate memory for each string
        scanf("%s", strings[i]);
    }

    generatePermutations(strings, 0, n);

    for (int i = 0; i < n; i++) {
        free(strings[i]); // Free allocated memory
    }

    return 0;
}
