#include <stdio.h>
#include <string.h>

int main() {
    FILE *file = fopen("contacts.txt", "w");

    if (file == NULL) {
        printf("Error creating file.\n");
        return 1;
    }

    int count;
    printf("How many contacts do you want to save? ");
    scanf("%d", &count);
    getchar(); // consume leftover newline

    char name[50];
    char phone[20];

    for (int i = 0; i < count; i++) {
        printf("\nContact %d\n", i + 1);

        printf("Enter name: ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0'; // Remove newline

        printf("Enter phone number: ");
        fgets(phone, sizeof(phone), stdin);
        phone[strcspn(phone, "\n")] = '\0';

        fprintf(file, "Name: %s | Phone: %s\n", name, phone);
    }

    fclose(file);
    printf("\nAll contacts saved to contacts.txt\n");

    return 0;
}
