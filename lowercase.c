#include <stdio.h>
#include <ctype.h>  
int main() 
{
    char u;
    scanf(" %c", &u);
    char l = tolower(u);
    printf("%c\n", l);
    return 0;
}