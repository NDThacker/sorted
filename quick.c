#include<stdio.h>
//Author N.D.Th(e)hacker
void quicks(int *, int, int);

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
	int down = low;
	int up = high;
	int key = a[down];
	int temp;
	down++;
	while(down < up)
	{

		while(a[down] < key && down < high)
			down++;
		while(a[up] >= key && up > low)
			 up--;
		if(down < up)
		{
			temp = a[down];
			a[down] = a[up];
			a[up] = temp;
		}
	}
	a[low] = a[up];
	a[up] = key;
	quicks(a, low, up-1);

	quicks(a, up+1, high);

}










