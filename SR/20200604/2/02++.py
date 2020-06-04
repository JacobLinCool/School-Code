# DNA 輸入檢查
import sys

while(1):
    dna = input()
    
    if dna == "exit":
        sys.exit()
    
    errors = []    
    
    for i in range(len(dna)):
        t = dna[i]
        if t != "A" and t != "T" and t != "C" and t != "G":
            errors.append(i+1)
    
    if len(errors) == 0:
        print("DNA 無誤")
    else:
        print("DNA 出現問題, 位於第", end="")
        for err in errors:
            print(err, end=", ")
        print("個位置有誤")