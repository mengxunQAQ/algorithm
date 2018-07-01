class Suduko:

    def __init__(self, s):
        """input sudoku"""
        self.s = s

    def check_all(self, i, j, value):
        """check whether the number is complied with rule"""
        return self.check_row(i, j, value) and self.check_column(i, j, value)\
               and self.check_small_sudoku(i, j, value)

    def check_row(self, i, j, value):
        """check row"""
        return value not in self.s[i]

    def check_column(self, i, j, value): 
        """check column"""
        column = [self.s[v][j] for v in range(9)]
        return value not in column

    def check_small_sudoku(self, i, j, value):
        """check the small nine palace"""
        small_sudoku = [self.s[m][n] for m in range(i//3*3,(i//3+1)*3) for n in range(j//3*3,(j//3+1)*3)]
        return value not in small_sudoku

    def recursion_search(self):
        """back-track algorithm, If both i, j = 8, pass"""
        i,j = self.start_point()
        if i >=8 and j >=8 and self.s[8][8]:
            return True

        for value in range(1,10):
            if self.check_all(i, j, value):
                self.s[i][j] = value
                if not self.recursion_search():
                    self.s[i][j] = 0
                else:
                    return True
        return False

    def start_point(self):
        """find zero, zero representative needs to fill in"""
        for i in range(9):
            for j in range(9):
                if not self.s[i][j]:
                    return i,j
        return i,j


if '__main__' == __name__:

    s = [[8,0,0,0,0,0,0,0,0],
         [0,0,3,6,0,0,0,0,0],
         [0,7,0,0,9,0,2,0,0],
         [0,5,0,0,0,7,0,0,0],
         [0,0,0,0,4,5,7,0,0],
         [0,0,0,1,0,0,0,3,0],
         [0,0,1,0,0,0,0,6,8],
         [0,0,8,5,0,0,0,1,0],
         [0,9,0,0,0,0,4,0,0]]

    S = Suduko(s)
    S.recursion_search()

    for i in range(9):
        print(S.s[i])
