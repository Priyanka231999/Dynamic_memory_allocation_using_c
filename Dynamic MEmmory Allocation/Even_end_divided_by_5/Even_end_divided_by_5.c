/*Accept N numbers from user and display all such elements which are
even and divisible by 5.
Input : N : 6
Elements : 85 66 3 80 93 88
Output : 80*/

#include<stdio.h>
display_even_divide_by_5(int arr[], int ilength)
{
	for (int i = 0; i < ilength; i++)
	{
		if ((arr[i] % 2 == 0) &&(arr[i] % 5 == 0))
		{
			printf("%d", arr[i]);
		}
	}
}
int main()
{
	int iSize;int iCnt=0;
	int * p = NULL;

	    printf("Enter size off array:");
		scanf("%d", &iSize);

		p = (int *)malloc(iSize * sizeof(int));

		if (p == NULL)
		{
			printf("unable to allocate memory");

		}
		printf("Enter %d element:", iSize);
		for (iCnt = 0; iCnt < iSize; iCnt++)
		{
			printf("Enter %d element:", iCnt + 1);
			scanf("%d", &p[iCnt]);
		}
		display_even_divide_by_5(p, iSize);
		free(p);


}