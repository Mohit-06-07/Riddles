#include <stdio.h>
#include <string.h>
int main() {
    int score = 0; 
    char ans1[50]={'K','E','Y','B','O','A','R','D'};
    char useans1[50];
     char ans2[50]={'S','U','N'};
    char useans2[50];
    char ans3[50]={'M','A','P'};
    char useans3[50];
    // Riddle 1
    printf("*/+-*/+- RIDDLES */+-*/+-");
    printf("\n WHO AM I????");
    printf("\n */+-*/+- RIDDLE 1 */+-*/+-");
    printf("\n I have keys, but open no locks. I have a space, but no room. You can enter,    but can't go outside.What am I?");
    printf("\n HINT 1-I have a space bar.\n HINT 2-I am used for typing.\n HINT 3-I have many letter keys.\n HINT 4-I have a numerical keypad.\n HINT 5-I am a common computer accessory.\n");
    printf("\nEnter the Guess(IN CAPITAL LETTERS)\n");
    scanf("%s",&useans1);
      char result1 = strcmp(useans1,ans1);
   if ( result1== 0) 
     {
        printf("Yes!!!! You guessed it right .\n");
        score++;
    } else {
        printf("Sorry the answer is %s",ans1);
    }




    // Riddle 2
    printf("\n */+-*/+- RIDDLE 2 */+-*/+-");
    printf("\n I'm hot and I live in the sky. I'm bright; don't look directly at me. I will disappear at night. What am I?");
    printf("\n HINT 1-You can't look directly at me without it hurting your eyes. \n HINT 2-I provide light and warmth for the Earth.\n HINT 3-I'm a star.\n HINT 4-Planets orbit around me.\n HINT 5-I'm not visible at night \n");
    printf("\nEnter the Guess(IN CAPITAL LETTERS)\n");
    scanf("%s",&useans2);


    char result2 = strcmp(useans2,ans2);
     if ( result2== 0) {
        printf("Yes!!!! You guessed it right .\n");
        score++;
    } else {
        printf("Sorry the answer is %s",ans2);
    }


// Riddle 3
    printf("\n WHO AM I????");
    printf("\n */+-*/+- RIDDLE 3 */+-*/+-");
    printf("\n I have cities, but no houses; forests, but no trees; and water, but no     fish. What am I? ");
    printf("\n HINT 1-I show you where things are.\n HINT 2-I am used to navigation.\n HINT 3-I use symbols to represent real-world objects.\n HINT 4-I have a scale.");
    printf("\nEnter the Guess(IN CAPITAL LETTERS)\n");
    scanf("%s",&useans3);
      char result3 = strcmp(useans3,ans3);
   if ( result3== 0) 
     {
        printf("Yes!!!! You guessed it right .\n");
        score++;
    }
 else {
        printf("Sorry the answer is %s",ans3);
    }
    // CALCULATE THE SMARTNESS OF USER
    printf("\nYour Smartness level is : ");
if (score == 3) 
    {
        printf("GENIUS \n");
    }
    else if (score == 2) 
    {
        printf("ABOVE AVERAGE \n");
    }
    else if (score == 1) 
    {
        printf("AVERAGE\n");
    }
    else {
        printf("NOT SO SMART\n");
    }
 return 0;
}


