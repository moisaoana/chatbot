#include <stdio.h>

int main() {
    printf("Let's chat\n");
    char userInput[100];
    char name[20], country[20];
    int age,years;
    gets(userInput);
    printf("%s to you too.  I am HAL, what is your first name?\n", userInput);
    scanf("%s", name);
    printf("Oh hi, %s. How old are you?\n",name);
    scanf("%d", &age);
    printf("Wow. %d is quite something\n",age);
    gets(userInput);
    gets(userInput);
    printf("What country are you from?\n");
    scanf("%s", country);
    printf("Oh, I've heard of %s. Such a lovely country!\n");
    gets(userInput);
    gets(userInput);
    printf("Can you recommend some attractions?\n");
    gets(userInput);
    printf("Thank you! That sounds amazing!\n");
    printf("What are you studying at university?\n");
    gets(userInput);
    printf("That sounds difficult! How many years does it take to major in %s?\n ", userInput);
    scanf("%d", &years);
    printf("Well, good luck!");
    return 0;
}