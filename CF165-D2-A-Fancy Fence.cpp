#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void test(int angle){
    int i = 3;
    while (((i-2)*180.0/i)<=angle)
    {
        if (((i-2)*180.0/i)==angle)
        {
            cout << "YES\n";
            return;
        }
        i++;
    }
    cout << "NO\n";
}
int main() {
	int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int angle;
        cin >> angle;
        test(angle);
    }
    
    return 0;
}
