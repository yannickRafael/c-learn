#include <stdio.h>
#include <string.h>

int main(){

    char noun[50] = "";
    char verb[50] = "";
    char adjective1[50] = "";
    char adjective2[50] = "";
    char adjective3[50] = "";

    printf("Enter an adjective (description): ");
    fgets(adjective1, sizeof(adjective1), stdin);
    adjective1[strlen(adjective1)-1] = '\0';

    printf("Enter a noun(animal or person): ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun)-1] = '\0';    

    printf("Enter an adjective (description): ");
    fgets(adjective2, sizeof(adjective2), stdin);
    adjective2[strlen(adjective2)-1] = '\0';

    printf("Enter a verb(action, ending in -ing): ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb)-1] = '\0';

    printf("Enter an adjective (description): ");
    fgets(adjective3, sizeof(adjective3), stdin);
    adjective3[strlen(adjective3)-1] = '\0';

    
    printf("\nToday I went to a %s zoo.\n", adjective1);
    printf("In an exhibit, I saw a %s.\n", noun);
    printf("%s was %s and %s!\n", noun, adjective2, verb);
    printf("I was %s!\n", adjective3);



    return 0;
}