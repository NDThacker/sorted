#include<stdio.h>
#include<stdlib.h>
//Author N.D.Th(e)hacker

int main()
{
    int total_ele;
    printf("Enter number of elements:");
    scanf("%d",&total_ele);
    int arr[total_ele];
    int i,j,k=0,min;
    for(i=0;i<total_ele;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<total_ele;i++)
    {
        k=-1;
        min=arr[i];
        for(j=i+1;j<total_ele;j++)
        {

            if(min>arr[j])
            {
                min=arr[j];
                k=j;
            }
        }
        if(k!=-1)
        {
        arr[k]=arr[i];
        arr[i]=min;
        }

    }
    for(j=0;j<total_ele;j++)
        printf("%d\t",arr[j]);
}
