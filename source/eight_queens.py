def queen(A, cur=0):
    if cur == len(A):
        print(A)
        return 0
    for row in range(len(A)):
        A[cur], flag = row, True
        for col in range(cur):
            if A[col] == row or abs(row - A[col]) == cur - col:
                flag = False
                break
        if flag:
            queen(A, cur+1)


if __name__ == '__main__':
    queen([None]*8)

