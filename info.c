#include <cs50.h>
#include <stdio.h>

int main()
{
// This function collects the student's information
string Name = get_string("What is your name?\n");
string Class = get_string("What class are you in?\n");
char Section = get_char("What Section?\n");
int Age = get_int("What is your age?\n");
string Sex = get_string("Sex:\n");

// The printf() function prints out the student information on the computer screen
printf("\n\n");
printf("Student Records\n");
printf("\n");
printf("Name: %s\n", Name);
printf("Class: %s\n", Class);
printf("Section: %c\n", Section);
printf("Age: %i\n", Age);
printf("Sex: %s\n", Sex);

}