/* 归并排序 */
#include <stdio.h>

#define MAX 10  
// 打印结果  
void show(int arr[], int n)  
{  
    int i;
    for (i = 0; i < n; i++) { 
        printf("%d ", arr[i]);
    }
    printf("\n");  
}  
  
void merge(int array[], int start, int middle, int end)  
{  
    int tmp[MAX] = {0};  // 临时数组 
    int i; //第一个数组索引  
    int j; //第二个数组索引  
    int k; //临时数组索引  
      
    for (i = start, j = middle+1, k = 0; k <= end-start; k++) // 分别将 i, j, k 指向各自数组的首部。  
    {  
        //若 i 到达第一个数组的尾部，将第二个数组余下元素复制到 临时数组中  
        if (i == middle+1)  
        {  
            tmp[k] = array[j++];  
            continue;  
        }  
        //若 j 到达第二个数组的尾部，将第一个数组余下元素复制到 临时数组中  
        if (j == end+1)  
        {  
            tmp[k] = array[i++];  
            continue;  
        }  
        //如果第一个数组的当前元素 比 第二个数组的当前元素小，将 第一个数组的当前元素复制到 临时数组中  
        if (array[i] < array[j])  
        {  
            tmp[k] = array[i++];  
        }  
        //如果第二个数组的当前元素 比 第一个数组的当前元素小，将 第二个数组的当前元素复制到 临时数组中  
        else  
        {  
            tmp[k] = array[j++];  
        }  
    }  
      
    //将有序的临时数组元素复制到array中，  
    //i = start 被排序的数组array 的起始位置  
    //j = 0， 临时数组的起始位置  
    for (i = start, j = 0; i <= end; i++, j++)  
    {  
        array[i] = tmp[j];  
    }  
}  

//我们继续看归并排序的实现：
// 归并排序  
void mergesort(int array[], int start, int end)  
{  
    if (start < end)  
    {  
        int middle;  
        middle = (end + start) / 2;  
        // 对前半部分进行排序  
        mergesort(array, start, middle);  
        // 对后半部分进行排序  
        mergesort(array, middle + 1, end);  
        // 合并前后两部分  
       	merge(array, start, middle, end);  
    }  
}  

int main(void)  
{   //测试数据  
    int arr_test[MAX] = { 8, 4, 2, 3, 5, 1, 6, 9, 0, 7 };  
    //排序前数组序列  
    show( arr_test, MAX );  
    mergesort( arr_test, 0, MAX-1 );  
    //排序后数组序列  
    show( arr_test, MAX );  
    return 0;  
}
