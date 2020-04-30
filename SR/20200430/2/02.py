while 1:
    a = int(input())
    t = 0
    
    t += int(a/50)
    a %= 50
    
    t += int(a/25)
    a %= 25
    
    t += int(a/10)
    a %= 10
    
    t += int(a/5)
    a %= 5
    
    t += a
    
    print(t)