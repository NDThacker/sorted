#include<stdio.h>

//Author N.D.Th(e)hacker

int main()
{
    int total_ele;
    printf("Enter number of elements:");
    scanf("%d", &total_ele);
    int arr[total_ele];
    int i, j, key;
    for(i = 0; i < total_ele; i++)
        scanf("%d", &arr[i]);
   for(i = 1; i < total_ele; i++)
   {
       key = arr[i];
       for(j = i-1; j >= 0; j--)
       {
           if(arr[j] > key)
                arr[j+1] = arr[j];
           else
            break;
       }
       arr[j+1] = key;
   }
    for(j = 0; j < total_ele; j++)
        printf("%d\t", arr[j]);
}
