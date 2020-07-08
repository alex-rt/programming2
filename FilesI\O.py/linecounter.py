#LINE COUNTER
sourcefile = "sourcefile.txt"

counter = 0#counter for lines 

with open(sourcefile, 'r') as sf:#opening sourcefile for reading as a pointer called sf

    for line in sf:
        counter += 1#for each line add 1 to the counter

print("Total number of lines is:", counter)#outputing total of lines
