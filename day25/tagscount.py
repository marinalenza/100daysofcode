tokens = ['<greeting>', 'Hello World!', '</greeting>']

count = 0


# write your for loop here

for token in tokens:

    if token[0] == '<' and token[-1] == '>':

        count += 1;


print(count)