
#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define pb push_back
#define sd(a) scanf("%lld",&a)
#define pd(a) printf("%lld\n",a)
#define F first
#define S second
#define setl set<long long int>
#define sets set<string>
#define msetl multiset<long long int>
#define msets multiset<string>
#define vll vector<lli>
#define vstr vector<string>
#define pii pair<int , int>
#define SZ(x) (int)x.size()
 #define mod  1000000007
 
map<lli, lli> mp;

long long int fibo(long long int n) {
    //using memoization technique 
    if (mp.count(n)) 
        return mp[n];
    long long int k=n/2;
    if (n%2==0) { 
    // as N is even breaking it into as n = 2*k
        return mp[n] = ( (fibo(k)*fibo(k) )% mod + (fibo(k-1)*fibo(k-1) )% mod ) % mod;
    } else {
        //N is odd
     // breaking N as n = (2*k+1)
        return mp[n] = ( (fibo(k)*fibo(k+1) )% mod + ( fibo(k-1) * fibo(k) ) % mod) % mod;
    }
}

main(){
    lli t,n;
    mp[0]=mp[1]=1;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        //using fibonacci series concept as sol(n) = (N+2)th term of fibonacci series
        printf("%lld\n",fibo(n+1) % mod );
    }
    return 0;
}
