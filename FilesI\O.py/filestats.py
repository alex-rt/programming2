#file stats program

#File opening
file = open("sourcefile.txt", "r")

#variable declaration and inicialization 
numberoflines = 0
numberofwords = 0
numberofchars = 0

#going through all th elines in the file
for line in file:
  line = line.strip("\n")#won't count \n as character

  words = line.split()
  numberoflines += 1#add one to line counter for each line
  numberofwords += len(words)#add one to word counter for each word
  numberofchars += len(line)#add one to char counter for each char

#file closing
file.close()

#printing output
print("lines:", numberoflines, "words:", numberofwords, "characters:", numberofchars)
