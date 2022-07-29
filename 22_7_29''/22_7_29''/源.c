#include<stdio.h>
#include <cassert>
int my_stringlen1(char* p)
{
	int i = 0;
	for (i = 0; 1; i++)
	{
		if (*(p + i) == 0)
			break;
	}
	return i;
}
int my_stringlen2(char*p)
{
	if (*p == 0)
		return 0;
	else
		return my_stringlen2(p + 1)+1;
}
void my_string_copy(char* e1, char* e2)
{
	
}
int main()
{
	char arr[] = "asdf";
	printf("%d", my_stringlen2(arr));
	return 0;
}