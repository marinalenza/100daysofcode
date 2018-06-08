cast = (("Barney", 72), ("Robin", 68), ("Ted", 72), ("Lily", 66), ("Marshall", 76))


names = []

heights = []

# define names and heights here

for name, height in cast:

    names.append(name)

    heights.append(height)

names = tuple(names)

heights=tuple(heights)

print(names)

print(heights)