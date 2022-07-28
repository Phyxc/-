#include<stdio.h>
void swp(char* e1, char* e2, int size)
{
	int x = 0;
	for (x = 0; x < size; x++)
	{
		char tmp = *e1;
		*e1 = *e2;
		*e2 = tmp;
		e1++;
		e2++;
	}
}
void my_up(void* base, int num, int size, int(*way)(void* e1, void* e2))
{
	int i = 0;
	int n = 0;
	for (n = 0; n < num - 2; n++)
	{
		for (i = 0; i < num - 1; i++)
		{
			if (way((void*)((char*)base + i * size), (void*)((char*)base + (i + 1) * size)) > 0)
			{
				swp((char*)base + i * size, (char*)base + (i + 1) * size, size);
			}
		}
	}
}
struct Stu
{
	char name[10];
	int age;
	int height;
};
int way_Stu_height(void* e1, void* e2)
{
	return ((struct Stu*)e1)->height - ((struct Stu*)e2)->height;
}

int main()
{
	struct Stu stu[4] = { {"张三",20,170},{"李四",17,184},{"王五",24,174},{"李华",18,177} };
	int se = sizeof(stu) / sizeof(stu[0]);
	int size = sizeof stu[0];
	int y = 0;
	my_up((void*)stu, se, size, way_Stu_height);
	for (y = 0; y < se; y++)
	{
		printf("%s ", (stu+y)->name);
	}
	return 0;
}