import sys

while(1):
    data = input()
    
    if data == "exit":
        sys.exit()
    
    test, dna = map(str, data.split())
    print(dna.count(test))