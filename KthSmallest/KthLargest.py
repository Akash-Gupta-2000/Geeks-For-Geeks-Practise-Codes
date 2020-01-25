t=int(input())
for i in range(t):
    ar,s=[],[]
    n=int(input())
    ar=input().split()
    k=int(input())
    for j in ar:
        s.append(int(j))
    s.sort()
    print(s[k-1])
        
    
