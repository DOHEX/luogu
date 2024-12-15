class node:
    def __init__(self):
        self.l = None
        self.r = None


def front(x: int):
    print(x, end=" ")
    if t[x].l:
        front(t[x].l)
    if t[x].r:
        front(t[x].r)


def mid(x: int):
    if t[x].l:
        mid(t[x].l)
    print(x, end=" ")
    if t[x].r:
        mid(t[x].r)


def back(x: int):
    if t[x].l:
        back(t[x].l)
    if t[x].r:
        back(t[x].r)
    print(x, end=" ")


if __name__ == "__main__":
    n = int(input())
    t = [node() for _ in range(n + 1)]
    for i in range(1, n + 1):
        t[i].l, t[i].r = map(int, input().split())
    front(1)
    print()
    mid(1)
    print()
    back(1)
