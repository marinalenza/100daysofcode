print_str = "Water falls"


#initialize a counting variable "i" to 0 - you'll use this to track which character of the string you're on

i = 0 

# write your while header line, comparing "i" to the length of the string

while i!=len(print_str):
    
#here in the body of the loop, print out the current character from the string

    print(print_str[i])
    
#increment your counter variable in the body of the loop, so you don't loop forever!

    i+=1