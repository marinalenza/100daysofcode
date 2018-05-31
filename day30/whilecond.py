start_num = 35
end_num = 23

count_by = 1

break_num = start_num


# write a condition to check that end_num is larger than start_num before looping

if end_num < start_num:

    result ="Oops! Looks like your start value is greater than the end value. Please try again."

else:

    # write a while loop that uses break_num as the ongoing number to
 
    #   check against end_num

    while(break_num <= end_num):

        break_num += count_by

    result = break_num


print(result)