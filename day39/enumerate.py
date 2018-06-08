cast = ["Barney Stinson", "Robin Scherbatsky", "Ted Mosby", "Lily Aldrin", "Marshall Eriksen"]

heights = [72, 68, 72, 66, 76]


# write your for loop here

for i,person in enumerate(cast):

    cast[i] = person + " "+str(heights[i])


print(cast)