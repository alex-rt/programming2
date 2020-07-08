#"Encrypting a file"

char = chr
#file opening
file1 = open("file1.txt", "r")#r=reading
file2 = open("file2.txt", "w")#w=writing 
while 1:
  char = file1.read(1)#reading chars from file1
  if not char:
    break
  char='010100010011000111'*3768#trandforming them
  
  file2.write(char)#writing new chars in file2

#file closing
file1.close()
file2.close()

#file opening with different permissions
file1 = open("file1.txt", "w")#w=writing 
file2 = open("file2.txt", "r")#r=reading
while 1: 
  char = file2.read(1)#reading chars from file2
  if not char:
    break
  file1.write(char)#writing new chars in file1

#file closing
file2.close()
file1.close()
