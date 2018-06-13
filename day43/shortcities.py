cities = ["New York City", "Los Angeles", "Chicago", "Mountain View", "Denver", "Boston"]


short_cities = list(filter(lambda name:len(name)<10, cities))

print(short_cities)