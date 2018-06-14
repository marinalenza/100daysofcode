lessons = ["Why Python Programming", "Data Types and Operators", "Control Flow", "Functions", "Scripting"]


def my_enumerate(iterable, start=0):

    n = start

    for x in iterable:

        yield n,x

for i, lesson in my_enumerate(lessons, 1):

    print("Lesson {}: {}".format(i, lesson))