t=int(input())
for i in range(t):
    left,right,sum=[],[],0
    n=int(input())
    ar=[int(i) for i in input().split()]
    leftmax=ar[0]
    for j in ar:
        if j>leftmax:
            leftmax=j
        left.append(leftmax)
    ar=ar[::-1]
    rightmax=ar[0]
    for k in ar:
        if k>rightmax:
            rightmax=k
        right.append(rightmax)
    right=right[::-1]
    ar=ar[::-1]
    for i in range(n):
        sum+=(min(left[i],right[i])-ar[i])
    print(sum)
    
    
