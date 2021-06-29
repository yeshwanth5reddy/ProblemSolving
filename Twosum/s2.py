l=[]
n=int(input())
for i in range(0,n):
    ele=int(input())
    l.append(ele)
tar=int(input("enter tar"))
for i in range(0,n):
    for j in range(i+1,n):
        if(l[i]+l[j]==tar):
            print(i,j)
