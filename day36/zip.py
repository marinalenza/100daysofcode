x_coord = [23, 53, 2, -12, 95, 103, 14, -5]

y_coord = [677, 233, 405, 433, 905, 376, 432, 445]

z_coord = [4, 16, -6, -42, 3, -6, 23, -1]

labels = ["F", "J", "A", "Q", "Y", "B", "W", "X"]


points = []

# write your for loop here

for x,y,z,label in zip(x_coord,y_coord,z_coord,labels):

    points.append("{}: {}, {}, {}".format(label,x,y,z))


for point in points:

    print(point)