while(1):
    a = int(input())
    sumn = 0
    for i in range(1, a+1):
        if a % i == 0:
            sumn += i
    print(sumn)