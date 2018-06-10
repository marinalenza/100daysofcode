scores = {

             "Rick Sanchez": 70,

             "Morty Smith": 35,

             "Summer Smith": 82,

             "Jerry Smith": 23,

             "Beth Smith": 98

          }


passed = [key for key,value in scores.items() if value >= 65]

print(passed)