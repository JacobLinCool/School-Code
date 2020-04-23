while 1:
    w, h = map(float, input().split())
    bmi = w / ( h * h)
    if bmi < 16.5 or bmi > 31.5:
        print("N")
    else:
        print("Y")