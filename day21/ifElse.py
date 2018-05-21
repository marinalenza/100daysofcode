# -*- coding: utf-8 -*-
"""
Created on Sun May 20 21:34:24 2018

@author: Marina
"""

points = 174  # use this input when submitting your answer

# write your if statement here
if points<=50:
    result = 'Congratulations! You won a wooden rabbit!'
elif (points>=51)&(points<=150):
    result = 'Oh dear, no prize this time.'
elif (points>=151)&(points<=180):
    result = 'Congratulations! You won a wafer-thin mint!'
elif (point>=181)&(points<=200):
    result = 'Congratulations! You won a penguin!'
  
print(result)