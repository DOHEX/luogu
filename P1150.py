n,k=list(map(int,input().split()))
sum=n
while(n>=k):
    sum+=n//k
    n=n%k+n//k
print(sum)