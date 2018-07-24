L = [90,89,78,67,56,45,34,23,12,0]

# 这里实现第一轮排序，不妨称第一个元素为锚，
# i，j分别指向待排序序列的第一和最后一个元素，
# j与锚比较，若大于锚则左移，直到小于锚的元素停下，与i指向元素交换，i后移
# 接着，i与锚比较，若小于则右移，直到大于锚的元素停下，与j指向的元素交换，j前移
# i,j交替移动，i==j时，锚temp到达最终位置
def first_sort(numbers,i,j):
    temp = numbers[i]
    while i!=j:
        while i<j and numbers[j]>temp:
            j = j - 1
        if i<j:
            numbers[i] = numbers[j]
            i = i + 1
        while i<j and numbers[i]<temp:
            i = i + 1
        if i<j:
            numbers[j] = numbers[i]
            j = j - 1
        numbers[i] = temp
        return i
        
def quick_sort(numbers,i,j):
    if i<j:
        middle = first_sort(numbers,i,j)
        quick_sort(numbers,i,middle-1)
        quick_sort(numbers,middle+1,j)

if __name__=='__main__':
    quick_sort(L,0,len(L)-1)
    print L
