n = int(input())
s = []

for i in range(n):
    inp = list(map(int, input().split()))
    s.append([sum(inp), inp[0], -(i + 1), inp[1], inp[2]])

s = sorted(s, reverse=True)
for i in s[:5]:
    print(-i[2], i[0])
