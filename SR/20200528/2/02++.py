ans, n = input().split()
gifts = list(map(int, input().split()))
while(1):
    std = input()
    score = 0
    for i in range(len(std)):
        if std[i] == ans[i] or i+1 in gifts:
            score += 1
    print(score)