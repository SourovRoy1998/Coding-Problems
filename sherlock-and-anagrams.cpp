##https://www.hackerrank.com/challenges/sherlock-and-anagrams/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=dictionaries-hashmaps


# Enter your code here. Read input from STDIN. Print output to STDOUT
t=int(input())

for _ in range(t):
    s=input()
    hmap=dict()
    ans=0

    for i in range(len(s)):
        for j in range(i+1,len(s)+1):
            st="".join(sorted(s[i:j]))
            hmap[st]=hmap.get(st,0)+1

    for k,v in hmap.items():
        ans+=(v*(v-1))//2
    print(ans)

