ans, gift = input().split()
gift = int(gift)
while(1):
    std = input()
    score = 0
    for i in range(len(ans)):
        if std[i] == ans[i] or i == gift-1:
            score += 1
    print(score)