ans = input()
while(1):
    std = input()
    score = 0
    for i in range(len(ans)):
        if std[i] == ans[i]:
            score += 1
    print(score)