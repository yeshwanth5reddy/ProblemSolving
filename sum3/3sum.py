a=int(input("enter no. of elements :"))
t=int(input("enter the target:"))
l=[]
for i in range(a):
    ele=int(input())
    l.append(ele)
for i in range(0,a-2):
    for j in range(i+1,a-1):
        for k in range(j+1,a):
            if(l[i]+l[j]+l[k]==t):
                print(i,j,k)



