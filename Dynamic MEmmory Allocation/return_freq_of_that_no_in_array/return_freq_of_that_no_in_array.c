/*Accept N numbers from user and return frequency of 11 form it.
Input : N : 6
Elements : 85 66 3 15 93 88
Output : 0*/

#include<stdio.h>

int find_no(int* arr, int num, int length)
{
	int ifreq = 0;
	for (int i = 0; i < length; i++)
	{
		if (num == arr[i])
		{
			ifreq++;
		}
	}
	 return ifreq;
}

int main()
{
	int ino, isize, icnt;
	int* p = NULL;

	printf("enter size of array=");
	scanf("%d", &isize);

	printf("enter no that you want to find in array=");
	scanf("%d", &ino);

	p = (int *)malloc(isize * sizeof(int));

	if (p == NULL)
	{
		printf("unable to allocate memory");
	}

	for (icnt = 0; icnt < isize; icnt++)
	{
		printf("%d no is=\n",icnt+1);
		scanf("%d", &p[icnt]);
	}

	int frequency= find_no(p, ino, isize);
	printf(" %d numbers's frequency is=%d",ino, frequency);


}