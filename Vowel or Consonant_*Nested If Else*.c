/*
    Program Check if a character is Vowel or Consonant
*/

#include<stdio.h>

int main()
{
    printf("Program Check if a character is Vowel or Consonant by using *Nested If Else*\n\n");
    
    char ch;

    printf("Enter an alphabet : ");
    scanf("%c", &ch);
    printf("\n");

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
    {
        
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
        {
            printf("%c is a Vowel", ch);
        }
        else 
        {
            printf("%c is a Consonant", ch);
        }
    }
    else
    {
        printf("Invalid input! Please enter an alphabet");
    }
    
    return 0;
}
