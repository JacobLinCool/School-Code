while 1:
    a = int(input())
    for i in range(a):
        if i%2:
            print("□", end="")
        else:
            print("■", end="")
    print()