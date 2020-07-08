#merging two files
  
data1 = data2 = "" #string inicialization for data
  
#Reading data from file1 
with open('file1.txt') as file1: #opening "file1.txt" as a pointer called file1
    data1 = file1.read() #read whats inside the file
  
#Reading data from file2 
with open('file2.txt') as file2: #opening "file1.txt" as a pointer called file2
    data2 = file2.read() #read whats inside the file
  
# Merging 2 files 
data1 += "\n"
data1 += data2 
  
with open ('file3.txt', 'w') as file3: #open file3 with writing permission
    file3.write(data1) #write all the data collected
