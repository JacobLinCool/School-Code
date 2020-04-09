while(1):
    m = int(input())
    d = int(input())
    s = (m * 2 + d) % 3
    if s == 0:
        print("普通")
    if s == 1:
        print("吉")
    if s == 2:
        print("大吉")