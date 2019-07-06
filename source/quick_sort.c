/* 快速排序 */
#include<stdio.h> 

void quicksort(int [], int, int);

int main()
{
    int  arr[6] = {21 ,54 ,6 ,23, 45, 78};
    int i;
    quicksort(arr,0,5);
    for(i=0;i<6;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void quicksort(int a[],int low,int high)
{
    int i = low;
    int j = high;  
    int temp = a[i]; 
  
    if( low > high)
    {          
       return ;
    }
    while(i < j) 
        {
            while((a[j] >= temp) && (i < j))
            { 
                j--; 
            }
            a[i] = a[j];
            while((a[i] <= temp) && (i < j))
            {
                i++; 
            }  
            a[j]= a[i];
        }
     a[i] = temp;
     quicksort(a, low, i-1);
     quicksort(a, j+1, high);
}
 
