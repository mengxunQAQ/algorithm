// 冒泡排序的实现
#include<stdio.h>
#include<stdlib.h>

void bubble_sort(int a[], int n);

int main(void)
{
    int num[] = {91, 58, 12, 45, 15, 71, 19, 28};
    int length =  sizeof(num)/sizeof(int);
    bubble_sort(num, length); // 调用排序函数
    
    // 打印排序完的结果
    for(int i=0; i<length; i++)
        printf("%d\n", num[i]);
    
    return 0;
}

/* 优化版本的冒泡排序，如果上一轮没有发生交换，
 * 则说明排序已经完成，不需要再继续进行比较
*/
void bubble_sort(int a[],int n)
{
    int isSorted = 1;  // flag，标识此轮排序是否发生交换
    
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-1-i; j++)
        {
            if(a[j] > a[j+1])
            {
                isSorted = 0;
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1]=temp;
            }
        }
        if(isSorted) break; //如果没有发生交换，说明数组已经排序好了
    }
}

