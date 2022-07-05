/*Accept N numbers from user check whether that numbers contains 11 in
it or not.
Input : N : 6
Elements : 85 66 11 80 93 88
Output : 11 is present*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

int display_no_in_array_or_not(int* arr, int ilength)
{
	int freq = 0; int a[length];
	for (int i = 0; i < ilength; i++)
	{
		//int a = arr[i];
		
		if (a == arr[i])
		{
			printf("num=%d\n", arr[i]);
			freq++;
		}
	}
	return freq;
}

int main()
{
	int isize, icnt, ifreq ;
	int *p = NULL;

	printf("Enter array size=");
	scanf("%d", &isize);

	

	p = (int *)malloc(isize * sizeof(int));

	if (p == NULL)
	{
		printf("unable to allocate memory");
	}

	for (icnt = 0; icnt < isize; icnt++)
	{
		printf("Enter %d element=", icnt + 1);
		scanf("%d", &p[icnt]);
	}

	ifreq=display_no_in_array_or_not(p, isize);
	printf("freq=%d", ifreq);
}