/*Accept N numbers from user and return the smallest number.
Input : N : 6
Elements : 85 66 3 66 93 88
Output : 3*/
#include<stdio.h>
int find_minimum_number(int *arr,int length)
{
	int min = arr[0]; int max;
	for (int i = 0; i< length; i++)
	{
		if (min < arr[i])
		{
			 max = arr[i];
		 }
		else
		{
			min = arr[i];
		}
		
	}
	
	
	return min;
}
int main()
{
	int isize, icnt, min_no;
	int* p = NULL;

	printf("Enter size of array=");
	scanf("%d", &isize);

	p = (int*)malloc(isize * sizeof(int));

	if (p == NULL)
	{
		printf("unable to allocate to memory");

	}

	for (icnt = 0; icnt < isize; icnt++)
	{
		scanf("%d", &p[icnt]);
	}
	for (icnt = 0; icnt < isize; icnt++)
	{
		printf("%d ", p[icnt]);
	}
	min_no = find_minimum_number(p, isize);
	printf("minimum no=%d", min_no);
}