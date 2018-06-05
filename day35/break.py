# HINT: modify the headlines list to verify your loop works with different inputs

headlines = ["Local Bear Eaten by Man",

             "Legislature Announces New Laws",

             "Peasant Discovers Violence Inherent in System",

             "Cat Rescues Fireman Stuck in Tree",
             "Brave Knight Runs Away",

             "Papperbok Review: Totally Triffic"]


news_ticker = ""

i = 0

# write your loop here

while(i<6):

    news_ticker+=headlines[i]+" "

    i+=1

    if(len(news_ticker)>=140):

        news_ticker = news_ticker[:140]


print(news_ticker)