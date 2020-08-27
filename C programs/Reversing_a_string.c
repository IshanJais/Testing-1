#include <stdio.h>
int main()
{
    int s[10], i;
    for (i = 0; i < 10; i++)
    {
        scanf_s("%d", &s[i]);
    }
    for (i = 0; i<10; i++)
    {
        printf("%d", s[i]);
    }
    for (i = 9; i >= 0; i--)
    {
        printf("%d ", s[i]);
    }
}