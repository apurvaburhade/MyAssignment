#include <stdio.h>
#include <string.h>

int main()
 {
    
    char *names[] = {"Apurva", "Jyoti", "Nilam", "Apurva", "Mohini", "Jyoti"};
    int n = 6;   
    int i, j;

    printf("Duplicate Strings:\n");

    for (i = 0; i < n; i++)
	 {
        for (j = i + 1; j < n; j++)
		{
            if (strcmp(names[i], names[j]) == 0)
			{
                printf("%s\n", names[i]);
                break;  
            }
        }
    }

    return 0;
}
