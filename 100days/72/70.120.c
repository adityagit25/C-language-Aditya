//Write a program to take a string input. Change it to sentence c
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define M 256

void sentence(char *s)
{
    int i = 0;
 
    int w = 1; 

    if (s == NULL)
    {
        return;
    }

    while (s[i] != '\0')
    {
        if (isspace(s[i]))
        {
     
            w = 1;
        }
        else if (w == 1)
        {
           
            s[i] = (char)toupper(s[i]);
           
            w = 0; 
        }
        else
        {
        
            s[i] = (char)tolower(s[i]);
        }
        i++;
    }
    //@copyrighted by adityadabral2006
}

int main()
{
    char a[M];

    printf("Enter a string:\n");
    
    if (fgets(a, M, stdin) == NULL)
    {
        return 1;
    }

    size_t l = strlen(a);
    if (l > 0 && a[l - 1] == '\n')
    {
        a[l - 1] = '\0';
    }

    sentence(a);

    printf("\n%s\n", a);

    return 0;
}

