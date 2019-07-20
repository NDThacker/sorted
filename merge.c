#include<stdio.h>
void merger(int *, int, int);
void sorter(int *, int, int, int);
//Author N.D.Th(e)hacker

int main()
{
	int total_ele;
	printf("Enter number of elements:");
	scanf("%d", &total_ele);
	int arr[total_ele];
	int i, j;
	for(i = 0; i < total_ele; i++)
		scanf("%d", &arr[i]);


	int *ar = &arr[0];
	merger(ar, 0, total_ele-1);
	printf("\n");
	for(j = 0; j < total_ele; j++)
		printf("%d\t", arr[j]);
}


void merger(int *ar, int low, int high)
{
	if(low != high)
	{
		int mid = (low + high) / 2;
		merger(ar, low, mid);
		merger(ar, mid+1, high);
		sorter(ar, low, mid, high);
	}
}

void sorter(int *ar, int low, int mid, int high)
{

	int lf[mid - low + 1], rf[high - mid];
	int i, j = 0, k = 0;
	for(i = low; i <= high; i++)
	{
		if(i <= mid)
		{
			lf[j] = ar[i];
			j++;
		}
		else
		{
			rf[k] = ar[i];
			k++;
		}
	}
	j = 0;
	k = 0;
	for(i = low; i <= high; i++)
	{
		if(j > mid - low)
		{
			ar[i] = rf[k];
			k++;
			continue;
		}
		if(k >= high - mid)
		{
			ar[i] = lf[j];
			j++;
			continue;
		}
		if(lf[j] < rf[k])
		{
			ar[i] = lf[j];
			j++;
		}
		else
		{
			ar[i] = rf[k];
			k++;
		}

	}


}
