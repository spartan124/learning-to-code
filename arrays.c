#include <stdio.h>
int main ()
{
    char ch[5]={'H', 'E', 'L', 'L', 'O'};
    int i=0;
    
    while (i<5){
        printf("ch[%d]=%c\n", i, ch[i]);
        i=i+1;
    }
}