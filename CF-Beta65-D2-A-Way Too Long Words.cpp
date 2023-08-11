#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
    {
        string word,out;
        cin >> word;
        if (word.length()>10){
            out = word.at(0) + to_string(word.length()-2) + word.at(word.length()-1);
        }
        else
            out = word;
        cout << out << endl;
        
    }
    return 0;
}
