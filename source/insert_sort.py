def insertionSort(alist):
	for i in range(1, len(alist), 1):
		j = i - 1
		key = alist[i]
		while (j >= 0 and alist[j] > key):
			alist[j+1] = alist[j]
			j = j - 1
		alist[j + 1] = key 
				
alist = [54,26,93,17,77,31,44,55,20]
insertionSort(alist)
print(alist)
