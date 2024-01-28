n=int(input("Enter teh value of n:"))
lst=[]
for i in range(n):
    if(i%2!=0):
     lst.append(i)
print(*lst,sep=",")