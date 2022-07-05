/*Accept N numbers from user and return the largest number.
Input : N : 6
Elements : 85 66 3 66 93 88
Output : 93*/

#include<stdio.h>
int LargeNumber(int* arr, int length)
{
	int max = arr[0];
	for (int i = 0; i < length; i++)
	{
		
		if (max < arr[i])
		{
			max = arr[i];
		}
	}

	return max;
}
int main()
{
	int icnt,isize,large_no;
    int * p = NULL;

	printf("Enter array size=");
	scanf("%d", &isize);

	p = (int*)malloc(isize * sizeof(int));

	if (p == NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}

	for (int icnt = 0; icnt < isize; icnt++)
	{
		scanf("%d",&p[icnt]);
		
	}
	for (int icnt = 0; icnt < isize; icnt++)
	{
		
		printf("%d ", p[icnt]);
	}

	large_no = LargeNumber(p, isize);
	printf("\nLargeNumber=%d", large_no);
}