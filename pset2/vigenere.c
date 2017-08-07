#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if(argc != 2)
    {
        printf("Usage: vigenere <key>\n");
        return 1;
    }
    
    string key = argv[1];
    
    for(int i = 0; i < strlen(key); i++)
    {
        if(!isalpha(key[i]))
        {
            printf("Usage: Alphabet\n");
            return 1;
        }
    }
    
    
    
    string text = GetString();
    char textcap, keycap;
    
    
    for(int i = 0, j = 0, n = strlen(text); i < n; i++)
    {
            if(isalpha(text[i]))
            {
                if(isupper(text[i]))
                    textcap = 'A';
                else
                    textcap = 'a';
                if(isupper(key[j%strlen(key)]))
                    keycap = 'A';
                else
                    keycap = 'a';
                
                printf("%c", (text[i]-textcap+key[j%strlen(key)]-keycap)
                                % 26 + textcap);
                j++;
            }
            else
                printf("%c",text[i]);
     }                          
     printf("\n");
     return 0;
}                    
