/*Accept N numbers from user and return frequency of even numbers.
Input : N : 6
Elements : 85 66 3 80 93 88
Output : 3*/

#include<stdio.h>
int display_frequency(int* arr, int ilength)
{
	int freq=0;
	for (int i = 0; i < ilength; i++)
	{
		if ((arr[i] % 2 == 0))
		{
			freq++;
		}
	}
	return freq;
}
int main()
{
	int icnt = 0, isize, frequency;
	int *p = NULL;

	printf("Enter Number of array size=");
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

	frequency=display_frequency(p, isize);

	printf("frquency=%d", frequency);

}