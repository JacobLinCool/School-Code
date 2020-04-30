while 1:
    a = int(input())
    t = 0
    
    print(a)
    
    t += a//50
    print("50 X " + str(a//50))
    a %= 50
    
    t += a//25
    print("25 X " + str(a//25))
    a %= 25
    
    t += a//10
    print("10 X " + str(a//10))
    a %= 10
    
    t += a//5
    print("5 X " + str(a//5))
    a %= 5
    
    print("1 X " + str(a))
    t += a
    
    print(t)