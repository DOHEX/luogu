n, m = map(int, input().split())
l = list(range(1, n + 1))
for i in range(n):
    for j in range(m - 1):
        l.append(l.pop(0))
    print(l.pop(0), end=" ")
