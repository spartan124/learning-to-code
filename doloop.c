#include <stdio.h>

int main()

{
    int i=10;
    do{
        
        if (i==7){
            i=i-1;
            continue;
        }
        printf("i is greater than 5\n");
        i=i-1;
    }
    while (i>5);
}