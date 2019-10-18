#include <stdio.h>

int main() {
    printf("Let's chat\n");
    char userInput[100];
    char name[20];
    int age;
    gets(userInput);
    printf("%s to you too.  I am HAL, what is your first name?\n", userInput);
    scanf("%s", name);
    printf("Oh hi, %s. How old are you?\n",name);
    scanf("%d", &age);
    printf("Wow. %d is quite something\n",age);
    gets(userInput);
    gets(userInput);
    printf("sorry, not sure what this \"%s\" means",userInput);
    return 0;
}