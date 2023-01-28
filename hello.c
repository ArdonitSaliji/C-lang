#include <stdio.h>

int main(void) 
{
    char name[100];
    printf("Hi, what's your name? ");
    scanf("%s", name);
    printf("Hello %s and welcome! \n", name);
}