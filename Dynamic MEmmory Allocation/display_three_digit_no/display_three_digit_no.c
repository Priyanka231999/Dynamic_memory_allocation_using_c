/* Accept N numbers from user and display all such numbers which contains
3 digits in it.
Input : N : 6
Elements : 8225 665 3 76 953 858
Output : 665 953 858*/

#include<stdio.h>

int main()
{

	int num, size,i,counter,rem;
	int *p = NULL;

	printf("enter size of array:\n");
	scanf("%d", &size);

	p = (int *)malloc(size * sizeof(int));
	printf("enter number  of array:\n");
	
	for (i = 0; i < size; i++)
	{
		printf("enter %d  number:\n",i+1);
		scanf("%d",&p[i] );
	}

	for (i = 0; i < size; i++)
	{   
		num = p[i];
		counter = 0;
		while (num > 0)
		{
			rem = num % 10;
			
			counter++;
			
			num = num / 10;
			
		}
		
		if (counter == 3)
		{
			printf("three digit number % d\n", p[i]);
		}
	}

	
}