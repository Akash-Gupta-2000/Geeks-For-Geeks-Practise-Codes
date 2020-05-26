t = int(input())
for i in range(t):
    str=input()+' '
    current_no, max_no="",'-1'
    for j in range(len(str)):
        if ord(str[j])>=48 and ord(str[j])<=57:
            current_no += str[j]
            if (ord(str[j+1])<48 or ord(str[j+1])>57):
                if '9' not in current_no:
                    if int(max_no) < int(current_no):
                        max_no = current_no
                current_no=""
    
    print(max_no)
                