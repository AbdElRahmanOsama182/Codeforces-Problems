#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int lines,len;
    cin >> lines >> len;
    string evenL,leftL,rightL;
    evenL=leftL=rightL="#";
    for (int i = 0; i < len-1; i++)
    {
        evenL+='#';
        leftL+='.';
        rightL = '.'+rightL;
    }
    for (int i = 0; i < lines; i++)
    {
        if (i%2==0)
            cout << evenL;
        else if ((i+1)%4==0)
            cout << leftL;
        else
            cout << rightL;
        cout << endl;
    }
    return 0;
}
