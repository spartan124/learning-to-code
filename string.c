#include<cs50.h>
#include<stdio.h>

int main()

{
    //defining variables
    char Alphabet =get_char("Name an Alphabet\n");
    int Number =get_int("Name a Number");
    string Sentence =get_string("write a phrase");
    string Colour =get_string("what is your complexion");
    
    //print out the defined variables
    printf(" Alpha: %c\n", Alphabet);
    printf("Num: %i\n", Number);
    printf("Sent: %s\n", Sentence);
    printf("Col: %s\n", Colour);
    printf("%s and %s\n",Colour, Sentence);
}