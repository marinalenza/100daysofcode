items = ['first string', 'second string']

html_str = "<ul>\n"  
# The "\n" here is the end-of-line char, causing
                     
# chars after this in html_str to be on next line


# write your code here

for item in items:

    html_str += "<li>" + item + "</li> \n"

html_str += "</ul>"


print(html_str)