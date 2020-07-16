#MATRIX A AND B MULTIPLICATION UPDATED VERSION
import sys
Amatrix = [[2,7,4],#Defining A matrix (3x3)
    [5,3,0],
    [4,2,8]]

Bmatrix = [[2,7,5],#Bmatrix (3x3)
    [0 ,4,3],
    [8 ,7,2]]

def matrixmult (A, B):#function to multiply matrices, Arows
    if len(B)!=len(A[0]): 
      sys.exit("Multiplication error, check your matrices")
    C = [[0 for row in range(len(A))] for col in range(len(B[0]))]
    for i in range(len(A)):
        for j in range(len(B[0])):
            for k in range(len(B)):
                C[i][j] += A[i][k]*B[k][j]   
    print(C)                    

matrixmult(Amatrix,Bmatrix)
matrixmult(Bmatrix,Amatrix)
