/*
* Course: Competitive Programming Sessional (CCE-2310)
* Assignment: Codeforces ICPC Assiut University Community
* Problem ID: I
* Author: Sultana Jahan Tahmina (ID:E243419)
* Language/Version: GNU G++20 13.2 (64 bit, winlibs)
* Codeforces Profile: https://codeforces.com/profile/hscsultana22
* Date: 2025-11-07
* Statement: 
https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I
*/


#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    int tens = N / 10;
    int units = N % 10;
    if ((units != 0 && tens % units == 0) || (tens != 0 && units % tens == 0)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
