while(1):
    line = input()
    if float(line.count("說")) / float(line.count("道")) == 0.75:
        print("Y");
    else:
        print("N");