#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    int array1[n];
    int array2[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array1[i]);
    }

    for (int i = 0; i < n; i++)
    {
        // printf("%d ", array1[i]);
    }
    // printf("\n");

    for (int i = 0; i < n; i++)
    {
        array2[i]=array1[i];
        // printf("%d ", array2[i]);
    }

    // printf("\n");

    int i,j;

    for(i=0,j=n-1;i<j;i++,j--){
        int temp;
        temp=array1[i];
        array1[i] = array1[j];
        array1[j]=temp;
    }

    for (int i = 0; i < n; i++)
    {
        // printf("%d ", array1[i]);
    }

    int flag = 1;

    for(int i = 0; i < n; i++){
       if(array1[i]!=array2[i]){
          flag=0;
          break;
       }
    }

    if(flag==0){
        printf("NO");
    }
    else if (flag==1){
         printf("YES");
    }

    return 0;
}