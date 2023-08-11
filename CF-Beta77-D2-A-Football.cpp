#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	string word,out;
    cin >> word;
    bool dang = false;
    if (word.length()>6)
    {
        int strike = 0;
        for (int i = 0; i < word.length(); i++)
        {
            if (i==0||word.at(i)==word.at(i-1))
                strike++;
            else
                strike = 1;
            if (strike>6)
            {
                dang = true;
                break;
            }
        }
    }
    if (dang)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
