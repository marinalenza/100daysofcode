# -*- coding: utf-8 -*-
"""
Created on Mon May 21 16:32:26 2018

@author: Marina
"""

# '''
# You decide you want to play a game where you are hiding 
# a number from someone.  Store this number in a variable 
# called 'answer'.  Another user provides a number called
# 'guess'.  By comparing guess to answer, you inform the user
# if their guess is too high or too low.

# Fill in the conditionals below to inform the user about how
# their guess compares to the answer.
# '''
answer = 23
guess = 37

if guess<answer:
    result = "Oops!  Your guess was too low."
elif guess>answer:
    result = "Oops!  Your guess was too high."
elif guess==answer:
    result = "Nice!  Your guess matched the answer!"

print(result)