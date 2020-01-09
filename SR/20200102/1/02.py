while(1):
    a, b, c = map(float, input().split(" "))
    s = (a + b + c) / 2
    area = (s*(s-a)*(s-b)*(s-c)) ** (1/2)
    print(area)
