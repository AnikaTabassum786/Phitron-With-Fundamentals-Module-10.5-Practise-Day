#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char string[101];
        scanf("%s", string);
        int length_of_string = strlen(string);
        if (length_of_string > 10)
        {
            int length = length_of_string - 2;

            printf("%c", string[0]);

            printf("%d", length);
            printf("%c\n", string[length_of_string - 1]);
        }
        else if (length_of_string <= 10)
        {
            printf("%s\n", string);
        }
    }

    return 0;
}