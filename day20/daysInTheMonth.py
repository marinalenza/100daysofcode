# -*- coding: utf-8 -*-
"""
Created on Sat May 19 17:31:56 2018

@author: Marina
"""

month = 8
days_in_month = [31,28,31,30,31,30,31,31,30,31,30,31]

# use list indexing to determine the number of days in month
num_days = days_in_month[month-1]

print(num_days)