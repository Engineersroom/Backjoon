a = int(input())

flag = 0
if (a%400==0):
    flag = 1
elif( ((a%4)==0) & ~((a%100)==0) ):
    flag = 1
else:
    flag = 0

print(flag)