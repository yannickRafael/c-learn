#include <stdio.h>

int main() {
    FILE *file = fopen("contacts.txt", "r");

    if (file == NULL) {
        printf("Could not open 'contacts.txt'. Make sure the file exists.\n");
        return 1;
    }

    char line[100];

    printf("Contact List:\n");
    printf("------------------\n");

    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);  // Each line already contains '\n'
    }

    fclose(file);

    return 0;
}
