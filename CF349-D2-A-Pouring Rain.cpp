#define _USE_MATH_DEFINES
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
    // area = (d**2/4)*pi
    //Linear v = v / area
    // Lv*t = h+et
    //t = h/(lv-e)
    //lv > e
int main() {
	int d, h, v, e;
    float lv;
    cin >> d >> h >> v >> e;
    lv = v / ((pow(d,2)/4.0)*M_PI);
    if (lv > e)
        cout << "YES\n" << fixed << h/(lv-e);
    else
        cout << "NO";
    return 0;
}
