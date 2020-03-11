s=input()
n=len(s)
a=[]
t=0
for i in range(n):
    if s[i] in ['(','{','[']:
        a.append(s[i])
    elif s[i]==')':
        if '(' in a:
            a.remove('(')
        else :
            print(i+1)
            t=1
    elif s[i]=='}':
        if '{' in a:
            a.remove('{')
        else :
            print(i+1)
            t=1
    elif s[i]==']':
        if '[' in a:
            a.remove('[')
        else :
            print(i+1)
            t=1
if a==[] and t!=1:
    print(-1)
elif(t!=1):
    print(len(s)+1)