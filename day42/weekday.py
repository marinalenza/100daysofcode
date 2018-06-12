def readable_timedelta(days):

    return "{} week(s) and {} day(s).".format(int(days/7),days%7)

# test your function

print(readable_timedelta(9))