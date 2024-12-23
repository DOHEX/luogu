n, q = map(int, input().split())
from typing import List

g: List[List[int]] = [[] for _ in range(n + 1)]
for i in range(q):
    op = input().split()
    if op[0] == "1":
        i, j, k = op[1:]
        if len(g[i] < j + 1):
            g[i] = g[i] + [0] * (j - len(g[i]) - 1) + [k]
        else:
            g[i][j] = k
    elif op[0] == "2":
        i, j = op[1:]
        print(g[i][j])
