#include<stdio.h>
#include<stdlib.h>
//Author N.D.Th(e)hacker

int main()
{
    int total_ele;
    printf("Enter number of elements:");
    scanf("%d", &total_ele);
    int arr[total_ele];
    int i, j, temp;
    for(i = 0; i < total_ele; i++)
        scanf("%d", &arr[i]);
    for(i = 0; i < total_ele-1; i++)
    {
        for(j = 0; j < total_ele-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(j=0; j < total_ele; j++)
        printf("%d\t", arr[j]);
}
