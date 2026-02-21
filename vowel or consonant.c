#include <stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
    {
        if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
            printf("%c is Vowel",ch);
        }
        else {
        printf("%c is Consonant",ch);
        }
    }
    else 
    {
        printf("%c is Invalid",ch);
    }
    
    return 0;
}