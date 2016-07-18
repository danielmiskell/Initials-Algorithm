#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    string name = GetString();
    
    int i,n;
    
    printf("%c", toupper(name[0]));
    
    for (i = 0, n = strlen(name); i < n; i++)
    { 
        if ( name[i] == ' ')
        {
            printf("%c", toupper(name[i + 1]));
        }
        
    }
    
    printf("\n");
}
