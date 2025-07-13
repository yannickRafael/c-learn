#include <stdio.h>
#include <string.h>

#define TOTAL_NAMES 5
#define MAX_LENGTH 31  // 30 chars + '\0'

int main() {
    char names[TOTAL_NAMES][MAX_LENGTH];
    int maxIndex = 0;
    size_t maxLength = 0;

    // Input
    for (int i = 0; i < TOTAL_NAMES; i++) {
        printf("Enter name %d: ", i + 1);
        fgets(names[i], MAX_LENGTH, stdin);

        // Remove newline character if present
        names[i][strcspn(names[i], "\n")] = '\0';
    }

    // Find longest
    for (int i = 0; i < TOTAL_NAMES; i++) {
        size_t len = strlen(names[i]);
        if (len > maxLength) {
            maxLength = len;
            maxIndex = i;
        }
    }

    printf("\nThe longest name is: %s\n", names[maxIndex]);
    return 0;
}
