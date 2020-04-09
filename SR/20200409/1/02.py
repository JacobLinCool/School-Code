while 1:
    a = int(input())
    if (a % 400) == 0:
        print("閏年")
    elif (a % 100) == 0:
        print("平年")
    elif(a % 4) == 0:
        print("閏年")
    else:
        print("平年")