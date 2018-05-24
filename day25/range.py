usernames = ["Joey Tribbiani", "Monica Geller", "Chandler Bing", "Phoebe Buffay"]


# write your for loop here

for i in range(4):

    usernames[i]=usernames[i].lower().replace(" ","_")


print(usernames)