#include<stdio.h>
//Author N.D.Th(e)hacker
void quicks(int *, int, int);
int partition(int *, int, int);

int main()
{
	int total_ele,i;
	printf("Enter number of elements :");
	scanf("%d", &total_ele);
	int arr[total_ele];
	for(i = 0; i < total_ele; i++)
		scanf("%d", &arr[i]);
	int *a = arr;
	quicks(a, 0, total_ele-1);
	for(i = 0; i < total_ele; i++)
		printf("%d\t", arr[i]);
}


void quicks(int *a, int low, int high)
{
	if(low >= high)
		return;
	

	int ci = partition(a, low, high);
	quicks(a, low, ci-1);
	quicks(a, ci+1, high);

}
int partition(int *a, int low, int high)
{
	int key = a[high];
	int ind = -1, j = 0, temp = 0;

	for(j = 0; j < high; j++)
	{
		if(a[j] < key)
		{
			ind++;
			temp = a[j];
			a[j] = a[ind];
			a[ind] = temp;
		}
	}
	temp = a[ind+1];
	a[high] = temp;
	a[ind+1] = key;
	return ind + 1;
}










