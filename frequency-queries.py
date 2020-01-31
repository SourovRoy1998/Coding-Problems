##https://www.hackerrank.com/challenges/frequency-queries/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=dictionaries-hashmaps

#!/bin/python3

import math
import os
import random
import re
import sys
from collections import defaultdict
# Complete the freqQuery function below.
def freqQuery(queries):
    hmap1=defaultdict(int)
    hmap2=defaultdict(int)
    for q in queries:
        if q[0]==1:
            hmap2[hmap1[q[1]]]=max(0,hmap2[hmap1[q[1]]]-1)
            hmap1[q[1]]=hmap1[q[1]]+1
            hmap2[hmap1[q[1]]]+=1
        if q[0]==2:
            hmap2[hmap1[q[1]]]=max(0,hmap2[hmap1[q[1]]]-1)
            hmap1[q[1]]=max(0,hmap1[q[1]]-1)
            hmap2[hmap1[q[1]]]+=1
            


        if q[0]==3:
            if hmap2[q[1]]>0:
                print(1)
            else: print(0)

q = int(input().strip())

queries = []

for _ in range(q):
    queries.append(list(map(int, input().rstrip().split())))

ans = freqQuery(queries)
