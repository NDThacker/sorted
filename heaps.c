#include<stdio.h>
void heapify(int *,int);
void mxheapify(int *,int,int);
void mnheapify(int *,int,int);
//Author N.D.Th(e)hacker

int main()
{
    int total_ele;
    printf("Enter number of elements:");
    scanf("%d",&total_ele);
    int arr[total_ele];
    int i,j;
    for(i=0;i<total_ele;i++)
        scanf("%d",&arr[i]);
    int *a=arr;
    heapify(a,total_ele);
    for(j=0;j<total_ele;j++)
        printf("%d\t",arr[j]);
}
void heapify(int *a,int size)
{
    int choice,i,temp;
    printf("Max heap or Min Heap:0//1\n");
    scanf("%d",&choice);
    if(choice==0)
        for(i=0;i<size;i++)
        {
            mxheapify(a,size,i);
            //printf("%d\n",a[0]);
            temp=a[0];
            a[0]=a[size-1-i];
            a[size-1-i]=temp;

        }
    else
        for(i=0;i<size;i++)
        {
            mnheapify(a,size,i);
             temp=a[0];
            a[0]=a[size-1-i];
            a[size-1-i]=temp;
        }

}

void mxheapify(int *a,int size,int stop)
{
    int i,left,right,key,large;
        for(i=0;i<size-stop;i++)
        {
            left=2*i+1;
            right=2*i+2;
            large=i;
            if(left<=size-1-stop && a[left]>a[large])
                large=left;
            if(right<=size-1-stop && a[right]>a[large])
                large=right;
            if(large!=i)
            {
                key=a[i];
                a[i]=a[large];
                a[large]=key;
                mxheapify(a,size,stop);
            }


        }
}
void mnheapify(int *a,int size,int stop)
{
    int i,left,right,key;
        for(i=0;i<size-stop;i++)
        {
            left=2*i+1;
            right=2*i+2;
            int large=i;
            if(left<=size-1-stop && a[left]<a[large])
                large=left;
            if(right<=size-1-stop && a[right]<a[large])
                large=right;
            if(large!=i)
            {
                key=a[i];
                a[i]=a[large];
                a[large]=key;
                mnheapify(a,size,stop);
            }

        }

}
















