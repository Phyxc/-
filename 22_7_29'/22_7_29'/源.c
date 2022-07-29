#include<stdio.h>
void my_ch_stract(char* ch1, char* ch2, int n)
{
	int x = 0;
	for (; 1;)
	{
		if (*ch1 == 0)
			break;
		else
		{
			ch1++;
		}
	}
	for (x=0;x<n;x++)
	{
		*ch1 = *ch2+x;
		ch1++;
	}
}
int main()
{
	char arr1[20] = "abcd";
	char arr2[] = "efgh";
	my_ch_stract(arr1, arr2, 5);
	printf("%s", arr1);
	return 0;
}