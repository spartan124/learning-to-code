#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string A=get_string("What is ur name?\n");
    string B=get_string("What are your hobbies?\n");

    printf("My name is  %s\n", A);
    printf("My hobbies are %s\n", B);
}
