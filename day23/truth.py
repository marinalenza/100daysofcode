# -*- coding: utf-8 -*-
"""
Created on Tue May 22 22:37:08 2018

@author: Marina
"""

points = 174  # use this input when submitting your answer

# set prize to default value of None
prize = 'None'
# use the value of points to assign prize to the correct prize name
if points <= 50:
    prize = 'wooden rabbit'
elif points > 150 and points <= 180:
    prize = 'wafer-thin mint'
else:
    prize = 'penguin'

# use the truth value of prize to assign result to the correct message
if prize == 'None':
    result = 'Oh dear, no prize this time.'
else:
    result = 'Congratulations! You won a {}!'.format(prize)

print(result)