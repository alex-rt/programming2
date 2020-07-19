import numpy as np

#declaring list of values
l = [12, 13, 100, 36, 43, 45, 37 ]
#printing oriignal list
print("Original List:",l)
#creating an array of the list
a = np.array(l)
#printing array
print("One-dimensional NumPy array: ",a)
#changing sixth value to 38
print("Update sixth value to 38")
a[6] = 38
#printing new array
print(a)
#getting the type of array(should be int)
print("Type of array:",a.dtype)
#Changing type to float and doubling values
x = np.asfarray(a*2)
#printing new float array
print("Array converted to a float type and doubled values:")
print(x)
#checking the type is indeed a float
print("Updated array type: ",x.dtype)
#creating new array from x values to do a unit conversion
F = np.array(x)
#prinitng Fahrenheit array
print("Values in Fahrenheit degrees:")
print(F)
#Doing a conversion to centigrade and printing results
print("Values in  Centigrade degrees:") 
print(5*F/9 - 5*32/9)
