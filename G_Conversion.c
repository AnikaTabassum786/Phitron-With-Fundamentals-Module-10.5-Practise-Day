#include <stdio.h>

int main()
{

    char string[100001];
    fgets(string, 100001, stdin);

    for (int i = 0; string[i]!=0; i++)
    {
        if (string[i] == ',')
        {
            printf("%c", ' ');
        }
        if(islower(string[i])){
            printf("%c", toupper((string[i])));
        }
        if(isupper(string[i])){
            printf("%c", tolower((string[i])));
        }
    }

    return 0;
}