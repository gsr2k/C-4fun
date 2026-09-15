#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

// 1 for = animes lib
// 2 for = anime quiz

int main () {
//7 chars (8 "\0")
char welcomeText [] = "Welcome!";
char fakeText [] = "????????";
//for the switch case
int userDecision;
int userAnime;
int j;
//fix bool later....
bool isValid = true;
bool isRunning = true;

for (int i = 0; i < 8; i++) {
    fakeText[i] = welcomeText[i];
    printf("%s\n", fakeText);

    for (int j = 7; j >= 0; j--) {


        //printf ("%c", fakeText [j]);

    }


}
    printf ("========================================\n");
    printf ("Please select one of the options: \n");
    printf ("1 = Anime library || 2 = Anime Quiz\n");
    scanf("%d", &userDecision);
    while (isRunning){
        switch (userDecision) {
            case 1: 
            printf ("========================================\n");
            printf ("Select one of the options bellow: \n");
            printf ("1 = Konosuba || 2 = Angel Beats\n");
            scanf("%d", &userAnime);
            //1 = Konosuba
            //2 = Angel Beats
            switch (userAnime){
                case 1:
                    printf ("========================================\n");
                    printf ("Are you sure you selected: Konosuba?\n");
                    printf ("1 = yes | 2 = no\n");
                    int input;
                    scanf ("%d", &input);
                    if (input == 1)
                    {
                        printf ("Konosuba Characters: Aqua \n Megumin \n Darkness \n");
                        printf ("Main Character: **Satou Kazuma**\n");
                        printf ("Genre: Comedy, Isekai\n");
                        printf ("Release Date: 2015\n");
                    }
                    
                    else {
                        printf ("going back to the start!\n");
                    }          
                    
                    break;

                    default:
                    printf("Error: insert a valid number.");
                    break;
            }





            break;

            case 2:

            break;

            case 3:

            break;

            default:
                printf ("Error: insert a valid number");
            break;
        }

    }
}