/*Accept N numbers from user and return the difference between largest
and smallest number.
Input : N : 6
Elements : 85 66 3 66 93 88
Output : 90 (93 -3)*/
#include<stdio.h>
void calculate_difference(int  *arr, int length)
{
	int i, max, min,diff;
	 max=arr[0];
	 min = arr[0];
	for (i = 0; i < length; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
	    }
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	printf("didderance:%d", max - min);
	
}
int main()
{
	int isize, icnt;
	int *p=NULL;

	printf("Enter array of size=");
	scanf("%d", &isize);

	p = (int *)malloc(isize * sizeof(int));
	if (p==NULL)
	{
		printf("unable to allocate memory");
	}

	for (icnt = 0; icnt < isize; icnt++)
	{
		scanf("%d", &p[icnt]);
	}
	for (icnt = 0; icnt < isize; icnt++)
	{
		printf("%d ", p[icnt]);
	}

	calculate_difference(p, isize);
	return 0;
}