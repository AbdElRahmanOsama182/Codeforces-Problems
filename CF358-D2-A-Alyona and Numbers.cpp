#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long rep(int n , int i){
    long long rep = n/5;
    if (n%5>=i&&i!=0) rep++;
    return rep;
}
int main() {
	int n, m;
	long long sum =0;
    cin >> n >> m;
    for (int i = 0; i < 5; i++)
    {
        sum+= rep(n,i) * rep(m,5-i);
    }
    cout << sum;
    return 0;
}
