s=input()
n=len(s)
t=0
if n<2:
    print(0)
else:
    for i in range (n//2):
        if(s[0:i+1] == s[n-i-1:n]):
            t=i+1
    if t==0:
        print(0)
    else:
        print(t)
        
