# 依照出現次數依序排出字元
import sys

while(1):
    article = input()
    
    if article == "exit":
        sys.exit()
        
    words = {}
    for i in range(len(article)):
        w = article[i]
        if w in words:
            words[w] += 1
        else:
            words[w] = 1
            
    words = sorted(words.items(), key=lambda x:x[1], reverse=True)
    
    for i in range(len(words)):
        print(words[i][0], words[i][1])
    