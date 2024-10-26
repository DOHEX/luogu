T = int(input())
for i in range(T):
    n, m = map(int, input().split())
    print(((n & (n ^ m)) > 0) + (((~n) & ((n ^ m))) > 0))
