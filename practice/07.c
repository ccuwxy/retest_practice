#include<stdio.h>
#include<string.h>
/*
int strlen(char* a)
{
    return 0;
}*/

int main()
{
    
    char a[20] = "cehiknqtw";
    char s[] = "fbla";
    int i, k, j;
    printf("%d ", strlen(a));
    for (k = 0; s[k] != '\0'; k++)
    {
        j = 0;
        while (s[k] >= a[j] && a[j] != '\0')
            j++;
        for (i = strlen(a); i >= j; i--)
            a[i + 1] = a[i];
        a[j] = s[k];

    }
    puts(a);
    return 0;
}