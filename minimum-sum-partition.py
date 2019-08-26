##https://practice.geeksforgeeks.org/problems/minimum-sum-partition/0

def portfolioDiversification(assets):
    total=sum(assets)
    n=len(assets)
    table = [[False for x in range(total+1)] for y in range(n+1)]
    for i in range(n+1):
        table[i][0]=True
    for i in range(1,total+1):
        table[0][i]=False
    for i in range(1,n+1):
        for j in range(1,total+1):
            table[i][j]=table[i-1][j]
            if(j>=assets[i-1]):
                table[i][j]=table[i][j] or table[i-1][j-assets[i-1]]
    diff=float('inf')
    for i in range(total//2,-1,-1):
        if table[n][i]==True:
            diff=total-2*i
            break
    return diff
    
    
    
    
    
    
for _ in range(int(input())):
    n=int(input())
    assets=list(map(int,input().strip().split(" ")))
    print(portfolioDiversification(assets))
