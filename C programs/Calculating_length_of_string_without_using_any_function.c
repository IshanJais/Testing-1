//for calculating length of string without using strlen() function
#include <stdio.h>
int main()
{
    char str[100];
    int i = 0;

    printf("Input a string: ");
    scanf("%s", str);
    //for calculation after the spaces this eleventh line used
    fgets(str, 100, stdin);

    while (str[i] != '\0')
        i++;

    printf("Length of the string: %d\n", i);
    
    return 0;
}