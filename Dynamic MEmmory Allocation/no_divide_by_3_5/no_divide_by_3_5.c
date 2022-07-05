/*Accept N numbers from user and display all such elements which are
divisible by 3 and 5.
Input : N : 6
Elements : 85 66 3 15 93 88
Output : 15*/
#include<stdio.h>
void display_divide_by_3_5(int *arr, int ilength)//int arr[]==int *arr//aray imternally convert to pointer
{
	for (int i = 0; i < ilength; i++)
	{
		if ((arr[i] % 3 == 0) && (arr[i] % 5 == 0))
		{
			printf("%d", arr[i]);
		}
	}
}
int main()
{
	int isize, icnt = 0;
	int *p = NULL;

	printf("enter array of size=");
	scanf("%d", &isize);

	p = (int*)malloc(isize * sizeof(int));

	if (p == NULL)
	{
		printf("unable to allocate memory");
	}

	printf("Enter  element:");

	for (icnt = 0; icnt < isize; icnt++)
	{
		printf("Enter %d element:", icnt + 1);
		scanf("%d", &p[icnt]);
	}

	display_divide_by_3_5(p, isize);
}