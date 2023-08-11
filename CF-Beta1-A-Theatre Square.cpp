#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n,m,a;
    long long w,h;
    scanf("%d %d %d", &n, &m, &a);
    w = n/a;
    h = m/a;
    if (n%a)
        w++;
    if (m%a)
        h++;
    long long s = h*w;
    cout << s;
    return 0;
}
