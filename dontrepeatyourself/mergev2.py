#merging two files 
data1 = data2 = "" #string inicialization for data
#Function for both opening and reading file
def readfile(FILE):
    with open(FILE, 'r') as read_stream:
        file_data = read_stream.read()
    return file_data
#getting data from 2 files by calling readfile funciton
data1 = readfile("file1.txt")
data2 = readfile("file2.txt")
# Merging 2 files 
data1 += "\n"
data1 += data2 
with open ('file3.txt', 'w') as file3: #open file3 with writing permission
    file3.write(data1) #write all the data collected
