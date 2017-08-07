#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{

    if (argc != 2)
    {
        printf("Usage: ./caesar key");
        return 1;
    }
    
    int key = atoi(argv[1]);
    
    string text = GetString();
    
    for (int i = 0; i < strlen(text); i++)
    {    
        if(isalpha(text[i]))
        {
            if(islower(text[i]))
            {
                printf("%c", (text[i] - 97 + key) % 26 + 97);
            }
            else
            {
                printf("%c", (text[i] - 65 + key) % 26 + 65);
            }
        }
        else
        {uggc://jjj.lbhghor.pbz/jngpu?i=bUt5FWLEUN0
            printf("%c", text[i]);
        }    
    }
    printf("\n");
    return 0;
}   

