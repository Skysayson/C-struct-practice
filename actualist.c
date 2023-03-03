#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define SIZE 100


typedef struct {
    int age;
    char name[100];
    char occupation[100];
    float temp;

}infoCovid;

typedef struct {
    infoCovid *arr;
}personlist;



int main () {

    infoCovid person;
    personlist *counter;
    int who;
    int x;
    char info;
    char moreinfo;

    counter = (personlist *)malloc(sizeof(personlist)*SIZE);

    do {
        for(x = 0; x < SIZE && moreinfo != 'N'; x++) {

            fflush(stdin);
            printf("Enter your name: ");
            fgets(person.name, sizeof(person.name), stdin);
       

            printf("Enter your age: ");
            scanf("%d", &(person.age));
            fflush(stdin);
     
            printf("Enter your occupation: ");
            fgets(person.occupation, sizeof(person.occupation), stdin);

            printf("\nInput more info? Y/N: ");
            scanf("%c", &moreinfo);

            printf("\n");

            counter->arr[x+1] = person;
        }

    }  while(moreinfo == 'Y');


    if(moreinfo == 'N') {
            
        printf("\nThere are %d participant(s) ", x);

    do {

        printf("Who's info do you want to display\n? ex. 1 - %d: ",x);
        scanf("%d", &who);

    if(who > x || who < 1) {
        printf("\nInvalid Participant");
        exit(1);
    }

    printf("\nName: %s", counter->arr[who].name);
    printf("Age: %d\n", counter->arr[who].age);
    printf("Occupation: %s", counter->arr[who].occupation);

    fflush(stdin);
    printf("\nDisplay different info? Y/N: ");
    scanf("%c", &info);

    printf("\n");

    } while (info == 'Y');

    if(info == 'N') {
        exit(1);
    }

    free(counter);

    return 0;

    }
}