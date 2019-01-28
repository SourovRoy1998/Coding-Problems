//https://practice.geeksforgeeks.org/problems/armstrong-numbers/0

for _ in range(int(input())):
    n=input()
    ans=0
    for x in n:
        ans+=int(x)**3
    if(ans==int(n)):
        print('Yes')
    else:
        print('No')
