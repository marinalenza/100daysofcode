#Example 1


result = 0

basket_items = {'pears': 5, 'grapes': 19, 'kites': 3, 'sandwiches': 8, 'bananas': 4}

fruits = ['apples', 'oranges', 'pears', 'peaches', 'grapes', 'bananas']


# Your previous solution here

for key, value in basket_items.items():

    for fruit in fruits:

        if key == fruit:

            result += value


print(result)


#Example 2


result = 0

basket_items = {'peaches': 5, 'lettuce': 2, 'kites': 3, 'sandwiches': 8, 'pears': 4}

fruits = ['apples', 'oranges', 'pears', 'peaches', 'grapes', 'bananas']


# Your previous solution here

for key, value in basket_items.items():

    for fruit in fruits:

        if key == fruit:

            result += value


print(result)



#Example 3


result = 0

basket_items = {'lettuce': 2, 'kites': 3, 'sandwiches': 8, 'pears': 4, 'bears': 10}

fruits = ['apples', 'oranges', 'pears', 'peaches', 'grapes', 'bananas']


# Your previous solution here

for key, value in basket_items.items():

    for fruit in fruits:

       if key == fruit:

            result += value


print(result)
