T = int(input())
for i in range(T):
    n,m=map(bin,map(int,input().split()))
    n=n[2:]
    m=m[2:]
    a=int(len(m)>len(n))
    b=int(len(m)<len(n))
    for j in range(min(len(n)-1,len(m)-1)):
        
        a+=int(n[j]<m[j])
        b+=int(n[j]>m[j])
        
    print(int(a>0)+int(b>0))
    