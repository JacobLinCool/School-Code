while 1:
    a, b, c, d = map(int, input().split("."))
    if a == 140 and b == 131 and c == 149 and d >= 0 and d < 256:
        print("login successfully")
    else:
        print("access denied")