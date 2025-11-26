Activity 8
RIDDLES-WHO AM I?
Research 
Strings are used to represent and process text, enabling us to store user input, display messages, and manipulate textual data in applications. This makes the programmer input the text from the user. They are fundamental for handling any data that is not a number, such as names, addresses, or any other alphanumeric characters, and are crucial for user interfaces, data representation, and text-based operations in programming.Programmers across the globe to take feedback from the user in form of a completely readable form.
Strings are the primary way to store and work with text in programming, from simple words to complex sentences. They are used to get input from a user and to display messages, prompts, and results back to the user. Strings can represent other data types, like dates ("YYYY-MM-DD") or numbers, that are easier to read and write as text. 
They provide a wide range of built-in methods for operations like searching, replacing, sorting, concatenating (joining), and extracting substrings. Strings are used to store and process data from files, databases, or APIs. Text processing is a vast field that relies heavily on strings. As a universal data type across many programming languages, strings are a reliable way to share and transfer data between different systems and platforms. 
Analysis
String operations cover a wide range of operations making it an important function not only in c but in any programing language.It includes
Concatenation consists of joining two or more strings together to form a new one.
We can also find the size of the string using the direct function  Accessing characters and retrieving individual characters by their index (position) can be done.
Comparison of  two strings if they are equal or not can also be done.
Finding the occurrence of a specific character or substring within a string.
Modification of the  characters or substrings, or changing case can also be performed.
These wide range of operations make string usage ideal for efficient transition between an application owner and end user. Key applications include text processing (like spell-checking and formatting), search engines (keyword searching and suggestions), network communication (handling HTTP requests), data analysis (natural language processing), security (hashing passwords), bioinformatics (DNA sequencing), and handling user input and file paths.  
Ideate
The objective of the program is to make a riddle which is based on the game “who am i?”.the system will ask the user a question/riddle along with some hints.
The user will enter the word that he thinks it possibly fits the best. Then the system will compare the user answer along with the actual answer of the questions.
If the guess is correct then the next question will be displayed and if the guess is incorrect then the user will get a message for wrong guess.
Step 1-Start
Step 1-Display the Question along with hints 
Step 1-Input the answer in form of string 
Step 1-Check if the answer is correct or not 
Step 1-Display the answer 
Step 1-End 


Build 
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




TESTING 
CASE 1
*/+-*/+- RIDDLES */+-*/+-
 WHO AM I????
 */+-*/+- RIDDLE 1 */+-*/+-
 I have keys, but open no locks. I have a space, but no room. You can enter,    but can't go outside.What am I?
 HINT 1-I have a space bar.
 HINT 2-I am used for typing.
 HINT 3-I have many letter keys.
 HINT 4-I have a numerical keypad.
 HINT 5-I am a common computer accessory.
Enter the Guess(IN CAPITAL LETTERS)
KEYBOARD
Yes!!!! You guessed it right .
 */+-*/+- RIDDLE 2 */+-*/+-
 I'm hot and I live in the sky. I'm bright; don't look directly at me. I will disappear at night. What am I?
 HINT 1-You can't look directly at me without it hurting your eyes. 
 HINT 2-I provide light and warmth for the Earth.
 HINT 3-I'm a star.
 HINT 4-Planets orbit around me.
 HINT 5-I'm not visible at night 
Enter the Guess(IN CAPITAL LETTERS)
SUN
Yes!!!! You guessed it right .
WHO AM I????
 */+-*/+- RIDDLE 3 */+-*/+-
 I have cities, but no houses; forests, but no trees; and water, but no fish. What am I? 
 HINT 1-I show you where things are.
 HINT 2-I am used to navigation.
 HINT 3-I use symbols to represent real-world objects.
 HINT 4-I have a scale.
Enter the Guess(IN CAPITAL LETTERS)
MAP
Yes!!!! You guessed it right .
Your Smartness level is : GENIUS 


CASE 2
*/+-*/+- RIDDLES */+-*/+-
 WHO AM I????
 */+-*/+- RIDDLE 1 */+-*/+-
 I have keys, but open no locks. I have a space, but no room. You can enter,    but can't go outside.What am I?
 HINT 1-I have a space bar.
 HINT 2-I am used for typing.
 HINT 3-I have many letter keys.
 HINT 4-I have a numerical keypad.
 HINT 5-I am a common computer accessory.
Enter the Guess(IN CAPITAL LETTERS)
MOUSE
Sorry the answer is KEYBOARD
 */+-*/+- RIDDLE 2 */+-*/+-
 I'm hot and I live in the sky. I'm bright; don't look directly at me. I will disappear at night. What am I?
 HINT 1-You can't look directly at me without it hurting your eyes. 
 HINT 2-I provide light and warmth for the Earth.
 HINT 3-I'm a star.
 HINT 4-Planets orbit around me.
 HINT 5-I'm not visible at night 
Enter the Guess(IN CAPITAL LETTERS)
SUN
Yes!!!! You guessed it right .
WHO AM I????
 */+-*/+- RIDDLE 3 */+-*/+-
 I have cities, but no houses; forests, but no trees; and water, but no fish. What am I? 
 HINT 1-I show you where things are.
 HINT 2-I am used to navigation.
 HINT 3-I use symbols to represent real-world objects.
 HINT 4-I have a scale.
Enter the Guess(IN CAPITAL LETTERS)
MAPS
Sorry the answer is MAP
Your Smartness level is : AVERAGE
CASE 3-
*/+-*/+- RIDDLES */+-*/+-
 WHO AM I????
 */+-*/+- RIDDLE 1 */+-*/+-
 I have keys, but open no locks. I have a space, but no room. You can enter,    but can't go outside.What am I?
 HINT 1-I have a space bar.
 HINT 2-I am used for typing.
 HINT 3-I have many letter keys.
 HINT 4-I have a numerical keypad.
 HINT 5-I am a common computer accessory.


Enter the Guess(IN CAPITAL LETTERS)
COMPUTER
Sorry the answer is KEYBOARD
 */+-*/+- RIDDLE 2 */+-*/+-
 I'm hot and I live in the sky. I'm bright; don't look directly at me. I will disappear at night. What am I?
 HINT 1-You can't look directly at me without it hurting your eyes. 
 HINT 2-I provide light and warmth for the Earth.
 HINT 3-I'm a star.
 HINT 4-Planets orbit around me.
 HINT 5-I'm not visible at night 


Enter the Guess(IN CAPITAL LETTERS)
EARTH
Sorry the answer is SUN
 WHO AM I????
 */+-*/+- RIDDLE 3 */+-*/+-
 I have cities, but no houses; forests, but no trees; and water, but no fish. What am I? 
 HINT 1-I show you where things are.
 HINT 2-I am used to navigation.
 HINT 3-I use symbols to represent real-world objects.
 HINT 4-I have a scale.
Enter the Guess(IN CAPITAL LETTERS)
GLOBE
Sorry the answer is MAP
Your Smartness level is : NOT SO SMART
Implementation
https://github.com/Mohit-06-07/Riddles/blob/main/Riddles.c


References
https://www.goodhousekeeping.com/life/a41779999/riddles-for-adults/
https://en.akinator.com/
Conclusion
In this program, we explored the use of strings to present and evaluate riddles. By storing clues, questions, and answers as string data, the program can display riddles, accept user input, and compare responses in an interactive way. This not only demonstrates how flexible and useful strings are for handling text-based information, but also shows how simple logic and string operations can be combined to create an engaging user experience. Overall, the project highlights the importance of string manipulation in building fun and dynamic applications.



















































