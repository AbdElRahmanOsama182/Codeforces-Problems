#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
double Dist(int first[], int last[]){
 return sqrt(pow((last[0]-first[0]),2)+pow((last[1]-first[1]),2));
}
int main() {
	int n, k;
    cin >> n >> k;
    double dist = 0.0;
    int first[2], last[2];
    for (int i = 0; i < n-1; i++)
    {
        if (i==0)
            cin >> first[0] >> first[1];
        else{
            first[0] = last[0];
            first[1] = last[1];
        }
        cin >> last[0] >> last[1];
        dist += Dist(first,last);
    }
    cout << fixed<< dist*k/50.0;
    return 0;
}
