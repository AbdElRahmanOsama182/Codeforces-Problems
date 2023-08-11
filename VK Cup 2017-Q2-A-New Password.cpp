#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int len,chs;
    cin >> len >> chs;
    string pass = "";
    for (int i = 0; i < len; i++)
    {
        pass += (char)(i%chs+(int)'a');
    }
    cout << pass;
    return 0;
}
