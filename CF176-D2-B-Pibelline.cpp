#include <cmath>
#include <cstdio>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
#include <string>
#include<fstream>
#include <bits/stdc++.h>
#define all(v)      ((v).begin()), ((v).end())
using namespace std;
long long sum(long long num){
    return num*(num+1)/2;
}

long long sum(long long start,long long end){
    if (start<=1)
        return sum(end);
    return sum(end)-sum(start-1);
}

long long Splitters(long long n,long long k,long long start,long long end){
    if (start<end)
    {
        long long mid = (start+end)/2;
        long long splits = sum(mid,k);
        if (splits==n)
            return k-mid+1;
        if (splits<n)
            return Splitters(n,k,start,mid);
        else
            return Splitters(n,k,mid+1,end);
    }
    return k-start+2;
}

int main(){
    long long n,k;
    cin >> n >> k;
    if (n==1)
        cout << 0 ;
    else if (n<=k)
        cout << 1 ;
    else if ((n-1)>sum(k-1))
        cout << -1 ;
    else
        cout << Splitters(n-1,k-1,1,k);
}
