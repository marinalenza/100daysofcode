cast_names = ["Barney", "Robin", "Ted", "Lily", "Marshall"]

cast_heights = [72, 68, 72, 66, 76]


cast = {}
# replace with your code

for name, height in zip(cast_names,cast_heights):

    cast.update({name : height})


print(cast)