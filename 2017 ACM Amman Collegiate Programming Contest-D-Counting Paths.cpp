#include <cmath>
#include <cstdio>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
#include <string>
#include <fstream>
#include <bits/stdc++.h>
#define all(v)      ((v).begin()), ((v).end())
#define rall(v)     ((v).rbegin()), ((v).rend())
#define fori(i,x,n)   for(int i=x; i<n; i++)
#define gcd(a,b)    __gcd(a,b)//O(logN)//
#define lcm(a,b)    ((a/gcd(a,b))*b) //O(log(min(a,b)))//
#define unq(v)      sort(all(v));v.resize(distance(v.begin(),unique(v.begin(), v.end())));
#define MOD 1000000007
#define PI 3.141592653589793238462643383279502884197
#define int long long 
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;
int facts[100001];
int bigMod(int b,int p,int m){
    if (b==0)
        return 0;
    if (p==0)
        return 1%m;
    if (p%2==0)
    {
        int a = bigMod(b,p/2,m);
        return (a*a)%m;
    }
        return (b%m*bigMod(b,p-1,m))%m;
}

void fact(){
    facts[0]=1;
    fori(i,1,100001) facts[i]=(i*facts[i-1])%MOD;
}
int nCrMod(int n,int r){
    if(r==0) return 1;
    if(r>n) return 0;
    if(r==1) return n%MOD;
    return (((facts[n]%MOD)*bigMod(facts[r],MOD-2,MOD))%MOD*bigMod(facts[n-r],MOD-2,MOD))%MOD;
}
int32_t main(){
    //nCr%m = (n!%m * (r!^(m-2))%m * ((n-r)^(m-2))%m)%m
    fact();
    fast
    int t;
    cin >> t;
    while (t--)
    {
        int a,b;
        cin >> a >> b;
        int ans = (nCrMod(a-1,b)*2)%MOD;
        if(ans==0) cout << "1000000007\n";
        else cout<<ans<<endl;
    }
    

}
