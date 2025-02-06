# TODO: unfinished
ans = 0
i = 10
while i <= 1e8:
    n = len(str(i))
    if n % 2 != 0:
        i *= 10
        continue
    l = [int(c) for c in str(i)]
    if sum(l[: n // 2 - 1]) == sum(l[n // 2 :]):
        ans += 1
    i += 1
print(ans)
