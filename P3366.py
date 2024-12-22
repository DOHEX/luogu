class Edge:
    def __init__(self, x, y, z):
        self.x = x
        self.y = y
        self.z = z


class Dsu:
    def __init__(self, size):
        self.pa = list(range(size + 1))

    def find(self, x):
        if self.pa[x] != x:
            self.pa[x] = self.find(self.pa[x])
        return self.pa[x]

    def merge(self, x, y):
        self.pa[self.find(x)] = self.find(y)


if __name__ == "__main__":
    n, m = map(int, input().split())
    edges = []
    for i in range(m):
        edges.append(Edge(*map(int, input().split())))
    dsu = Dsu(n)
    edges = sorted(edges, key=lambda x: x.z)

    tot = ans = 0
    for edge in edges:
        xr = dsu.find(edge.x)
        yr = dsu.find(edge.y)
        if xr != yr:
            dsu.merge(xr, yr)
            tot += 1
            ans += edge.z
    if tot >= n - 1:
        print(ans)
    else:
        print("orz")
