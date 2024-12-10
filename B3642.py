class node:
    def __init__(self):
        self.left = None
        self.right = None


def front(x: int):
    print(x, end=" ")
    if t[x].left:
        front(t[x].left)
    if t[x].right:
        front(t[x].right)


def mid(x: int):
    if t[x].left:
        mid(t[x].left)
    print(x, end=" ")
    if t[x].right:
        mid(t[x].right)


def back(x: int):
    if t[x].left:
        back(t[x].left)
    if t[x].right:
        back(t[x].right)
    print(x, end=" ")


if __name__ == "__main__":
    n = int(input())
    t = [node() for _ in range(n + 5)]
    for i in range(1, n + 1):
        t[i].left, t[i].right = map(int, input().split())
    front(1)
    print()
    mid(1)
    print()
    back(1)
