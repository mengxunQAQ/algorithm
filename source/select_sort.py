def selectionSort(alist):
	for i in range(0, len(alist), 1):
		min = alist[i]
		index = i
		for j in range(i, len(alist), 1):
			if ( alist[j] < min):
				min = alist[j]
				index = j
		tmp = alist[i]
		alist[i] = min
		alist[index] = tmp
 
				
alist = [54,26,93,17,77,31,44,55,20]
selectionSort(alist)
