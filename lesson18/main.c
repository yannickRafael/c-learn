#include <stdio.h>
#include <string.h>

#define SIZE 3

typedef struct {
    char name[50];
    char phone[20];
    int age;
} Contact;

int main() {
    Contact contacts[SIZE];

    for (int i = 0; i < SIZE; i++) {
        printf("Enter contact %d name: ", i + 1);
        fgets(contacts[i].name, sizeof(contacts[i].name), stdin);
        contacts[i].name[strcspn(contacts[i].name, "\n")] = '\0';  // remove newline

        printf("Enter contact %d phone: ", i + 1);
        fgets(contacts[i].phone, sizeof(contacts[i].phone), stdin);
        contacts[i].phone[strcspn(contacts[i].phone, "\n")] = '\0';

        printf("Enter contact %d age: ", i + 1);
        scanf("%d", &contacts[i].age);
        getchar(); // consume leftover newline
    }

    printf("\nContacts List:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d. %s | %s | %d\n", i + 1, contacts[i].name, contacts[i].phone, contacts[i].age);
    }

    return 0;
}