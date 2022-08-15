class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        
        """
        row=[1]*len(matrix)
        col=[1]*len(matrix[0])
        for i in range(len(matrix)):
            for j in range(len(matrix[0])):
                if matrix[i][j]==0:
                    row[i]=0
                    col[j]=0
        for i in range(len(matrix)):
            for j in range(len(matrix[0])):
                if row[i]==0 or col[j]==0:
                    matrix[i][j]=0
                    
                    
   
