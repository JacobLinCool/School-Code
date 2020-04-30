while 1:
    a = int(input())
    t = 99*int(a/3) + 39*(a%3)
    if t > 3000:
        t *= 0.7
    elif t > 2000:
        t *= 0.8
    elif t > 1000:
        t *= 0.9
    print(int(t))