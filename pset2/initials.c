#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = GetString();
    
    if(s[0]>96)
        printf("%c",s[0]-32);
    else
        printf("%c",s[0]);
    
    for(int i = 0; i < strlen(s); i++)
    {
        if(s[i] == ' ')
        {
            if( s[i+1] > 96)
                printf("%c",s[i+1]-32);
            else
                printf("%c",s[i+1]);
        }
    }
    
    printf("\n");
}
