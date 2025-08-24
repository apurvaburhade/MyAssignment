#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
 {
    char str[100];
    int count[26] = {0}; 
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    for (i = 0; str[i] != '\0'; i++) 
	{
        if (isalpha(str[i])) 
		{  
            char ch = toupper(str[i]);   
            count[ch - 'A']++;
        }
    }

    printf("\nOccurrences of Alphabets:\n");
    for (i = 0; i < 26; i++) 
	{
        if (count[i] > 0)
		{
            printf("%c : %d\n", 'A' + i, count[i]);
        }
    }

    return 0;
}
