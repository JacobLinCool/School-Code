while 1:
    w, h = map(float, input().split())
    bmi = w / ( h * h)
    if bmi >= 40:
        print("極度超重")
    elif bmi >= 30:
        print("嚴重超重")
    elif bmi >= 25:
        print("超重")
    elif bmi >= 18.5:
        print("一般體重")
    else:
        print("過輕")