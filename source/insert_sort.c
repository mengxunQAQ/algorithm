#include <stdio.h>
#include <stdlib.h>

#define SIZE 5 // 数组长度
 
void insert_sort(int array[], int len);
 
int main()
{
	int num[SIZE] = {5, 2, 3, 9, 1};
 	
	//调用函数
	insert_sort(num, SIZE);

        //打印输出
	for(int i = 0; i < SIZE; i ++)
	{
		printf("%d ",num[i]);
	}
	printf("\n");

	return 0;
}

void insert_sort(int array[], int len)
{
	int i, j, temp;
 
	for (i = 1; i < len; i ++)
	{
		temp = array[i];
		for (j = i - 1; j >= 0; j --)
		{
			if (array[j] > temp)
			{
				array[j + 1] = array[j];	
			} else
			{
				break;
			}
		}
		array[j + 1] = temp;
	}
}
