import re as regex
while 1:
    a = input()
    if regex.search('.*[0-9]+.*', a):
        print(a+"\nY")
    else:
        print(a+"\nN")