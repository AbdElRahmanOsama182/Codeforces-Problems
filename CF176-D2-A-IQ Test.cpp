#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool count3(string s[],int r,int c){
    int sum = 0;
    for (int i = r; i < r+2; i++)
    {
        for (int j = c; j < c+2; j++)
        {
            if (s[i].at(j)=='#')
                sum++;
        }
    }
    if (sum!=2)
        return true;
    return false;
}
int main() {
	string s[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> s[i];
    }
    bool found = false;
    for (int i = 0; i < 3; i++)
    {
        if(found)
            break;
        for (int j = 0; j < 3; j++)
        {
            if (count3(s,i,j))
            {
                found = true;
                cout << "YES";
                break;
            }
        }
    }
    if (!found)
    {
        cout << "NO";
    }
    return 0;
}
