import numpy as np

#Creating an array full of zzeros
x = np.zeros((5,5))
#printing it
print("Original array:")
print(x)
#Add row values from 0 to 4 to fill array
print("Row values ranging from 0 to 4.")
x += np.arange(5)
#prinitng new array
print(x)
#finding the transpose od the x matrix
x_transpose = np.transpose(x)
#printing transpose matrix
print("Transpose matrix:")
print(x_transpose)
#Doing a dot product of inicial matrix and its transpose
result1 = np.dot(x, x_transpose)
#Printing result
print("Dot product x*xtranspose:")
print(result1)
#Multiplying result by a scalar(3 in this case)
result2 = result1*3
#Printing last result
print("Previous result * 3 :")
print(result2)
