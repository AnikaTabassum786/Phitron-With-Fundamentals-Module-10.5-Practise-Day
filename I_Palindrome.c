#include <stdio.h>

int main()
{

    char string1[1001];
    char string2[1001];
    scanf("%s", string1);
    // printf("%s\n", string1);

    int length = strlen(string1);
    // printf("%d\n", length);

    for (int i = 0; string1[i] != 0; i++)
    {
        string2[i] = string1[i];
    }

    // printf("%s\n", string2);

    int i, j;

    for (int i = 0, j = length - 1; i < j; i++, j--)
    {
        int temp;
        temp = string1[i];
        string1[i] = string1[j];
        string1[j] = temp;
    }
    // printf("%s\n", string1);

    int flag = 1;

    for (int i = 0; i < length; i++)
    {
        if (string1[i] != string2[i])
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}