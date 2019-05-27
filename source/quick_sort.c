# include <stdio.h>

void quick_sort(int a[]);

int main() {
	int arr[] = {21, 16, 7, 55, 23};
	quick_sort(arr);
	for (i = 0; i <= (sizeof(arr)/sizeof(int)); i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	return 0;
}

void quick_sort(int arr[]) {
	int high = sizeof(arr)/sizeof(int);
	
}
