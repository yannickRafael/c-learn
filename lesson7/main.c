#include <stdio.h>

int main(){


    int bob_age = 12;
    int max_age = 24;

    if(bob_age >= 18){
        printf("Bob is an adult");
    }else{
        printf("Bob is not an adult");
    }

    if(max_age <= 0){
        printf("Max hasn't been born yet");
    }

    return 0;
}