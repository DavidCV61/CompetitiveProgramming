#Link: https://www.spoj.com/problems/GCD2/
def gcd(a,b):
    if b==0:
        return a
    return gcd(b,a%b)
def solve():

    a, b = map(int, input().split()) 
    if a==0:
        print(b)
    else:
        print(gcd(a,b))

def main():

    t=int(input())
    while t>0:
        solve()
        t-=1

if __name__ == "__main__":
    main()
