#include <stdio.h>
#include <string.h>

int main()
{

    char string1[11];
    char string2[11];

    scanf("%s", string1);
    scanf("%s", string2);
    // printf("%s \n%s",string1,string2);

    int length1 = strlen(string1);
    int length2 = strlen(string2);

    printf("%d %d\n", length1, length2);
    printf("%s%s\n", string1, string2);

    int i = 0, j = 0;

    int temp;
    temp = string1[i];
    string1[i] = string2[j];
    string2[j] = temp;

    printf("%s %s", string1, string2);

    return 0;
}