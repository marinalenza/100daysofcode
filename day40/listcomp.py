names = ["Rick Sanchez", "Morty Smith", "Summer Smith", "Jerry Smith", "Beth Smith"]


first_names = [name.lower().split(' ')[0] for name in names]

print(first_names)