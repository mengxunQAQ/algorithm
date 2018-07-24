def bubbleSort(alist):
	for passnum in range(0, len(alist) - 1, 1):
		for i in range(0, len(alist) - passnum - 1, 1):
			if (alist[i] > alist[i+1]):
				tmp = alist[i+1]
				alist[i+1] = alist[i]
				alist[i] = tmp
				
                                
mylist = [54,26,93,17,77,31,44,55,20]
bubbleSort(mylist)
print(mylist)
