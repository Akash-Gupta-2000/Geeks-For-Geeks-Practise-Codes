t=int(input())
for i in range(t):
    n=int(input())
    ar=[int(i)**2 for i in input().split()]
    ar.sort()
    flag=0
    for i in range(n-1):
        for j in range(i+1,n):
            if(ar[i]+ar[j])in ar:
                flag=1
                break
        if flag==1:
            print("Yes")
            break
    if(flag==0):
        print("No")
    
