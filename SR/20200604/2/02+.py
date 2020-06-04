import sys

while(1):
    dna1 = input()
    
    if dna1 == "exit":
        sys.exit()
        
    dna2 = input()
    
    X = 0
    
    for i in range(max(len(dna1), len(dna2))):
        if (dna1[i] == "A" and dna2[i] != "T") or (dna1[i] == "T" and dna2[i] != "A") or (dna1[i] == "C" and dna2[i] != "G") or (dna1[i] == "G" and dna2[i] != "C"):
            X = 1
            break
    if X:
        print("X MEN")
    else:
        print("Human")