def validity(i,j):
    if(i>=0 and i<n and j>=0 and j<n and mtr[i][j]==1):
        return True
    return False

def maze(i,j):
    if (i==n-1 and j==n-1):
        s[i][j] = 1
        return True
        
    if (validity(i,j)):
        s[i][j] = 1
        
        if (maze(i+1,j)):
            return True
        
        if (maze(i,j+1)):
            return True
        
        s[i][j] = 0
        return False

n= int(input())

temp = 0
t=[]

mtr=[]
s=[[0]*n for k in range(n)]

for i in input().split():
    t.append(int(i))
    temp+=1
    if(temp==n):
        temp=0
        mtr.append(t)
        t=[]

if(maze(0,0)):
    for i in s:
        for j in i:
            print(j,end=' ')
else:
    print('-1')
