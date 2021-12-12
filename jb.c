#include <cs50.h>
#include <stdio.h>

int main()
{
    int X;
    X = get_int("X:\n");


    if (X>=70){
    printf("Student is Brilliant\n");
    }else{
        printf("Student is not brilliant\n");
    }

    if (X<=40){
    printf("Student is Poor\n");
    }

        if (X>40 && X<70)
    {
        printf("Student is Average\n");
    }

}