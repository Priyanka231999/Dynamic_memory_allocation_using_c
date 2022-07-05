/*Accept N numbers from user and display summation of digits of each
number.
Input : N : 6
Elements : 8225 665 3 76 953 858
Output : 17 17 3 13 17 21*/


#include<stdio.h>
void display_summation_of_digit(int arr[], int length)
{
	int i, num, sum,rem;
	printf("enter number  of array:\n");
	for (i = 0; i < length; i++)
	{
		printf("enter %d  number:\n", i + 1);
		scanf("%d", &arr[i]);
	}
	printf("array is:\n", i + 1);
	for (i = 0; i < length; i++)
	{
		
		printf("%d ", arr[i]);
	}
	printf("\nsummation of digit is:\n", i + 1);
	for (i = 0; i < length; i++)
	{
		num = arr[i];
		sum = 0;
		while (num > 0)
		{
			rem = num % 10;
			sum = sum + rem;
			num = num / 10;
		}
		printf("%d ", sum);
	}

}
int main()
{
	int size;
	int *p = NULL;

	printf("enter size of array:\n");
	scanf("%d", &size);

	p = (int *)malloc(size * sizeof(int));

	

	
	display_summation_of_digit(p, size);
	
}