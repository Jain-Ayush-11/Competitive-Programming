# int n; cin>>n;
# bool f=0, m=0;
# int aw=1, ab=0, bw=0, bb=0, c=2;
# n--;
# while(n){
#     int k=(c+c+1);
#     if(!f) { if(k<=n) bb+=(int)floor(k/2+1), bw+=(int)floor(k/2), n-=k; else { ((n&1)?bb+=(int)floor(n/2+1), bw+=(int)floor(n/2):bb+=(int)floor(n/2), bw+=(int)floor(n/2)); break; } }
#     else { if(k<=n) ab+=(int)floor(k/2), aw+=(int)floor(k/2+1), n-=k; else { ((n&1)?aw+=(int)floor(n/2+1), ab+=(int)floor(n/2):ab+=(int)floor(n/2), aw+=(int)floor(n/2)); break; } }
#     f=!f, c+=2;
# cout<<aw<<" "<<ab<<" "<<bw<<" "<<bb<<endl;
# }
# cout<<aw<<" "<<ab<<" "<<bw<<" "<<bb<<endl;

t=int(input())
while t:
    n=int(input())
    f, m=0, 0
    aw, ab, bw, bb, c = 1, 0, 0, 0, 2
    n-=1
    while n:
        k=c+c+1
        if f:
            if k<=n:
                bb+=(k//2 + 1)
                bw+=(k//2)
                n-=k
            else:
                if (n%2):
                    bb+=(n//2+1)
                    bw+=(n//2)
                else:
                    bb+=(n//2)
                    bw+=(n//2)
                    break
        else:
            if k<=n:
                aw+=(k//2+1)
                ab+=(k//2)
                n-=k
            else:
                if (n%2):
                    aw+=(n//2+1)
                    ab+=(n//2)
                else:
                    ab+=(n//2)
                    aw+=(n//2)
                    break
        f=not f
        c+=2
    print(f'{aw} {ab} {bw} {bb}')
    t-=1