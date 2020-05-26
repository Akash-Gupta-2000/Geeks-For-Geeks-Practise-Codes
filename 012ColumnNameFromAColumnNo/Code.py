t=int(input())
for i in range(t):
    n=int(input())
    ans=""
    while n:
        ans = ('Z' + ans) if ((n%26) == 0) else (chr(64+n%26) + ans)
        n= ((n//26) - 1) if ((n%26) == 0) else n//26
    print(ans)
