/*
* Course: Competitive Programming Sessional (CCE-2310)
* Assignment: Codeforces ICPC Assiut University Community
* Problem ID: B
* Author: Sultana Jahan Tahmina (ID:E243419)
* Language/Version: GNU G++20 13.2 (64 bit, winlibs)
* Codeforces Profile: https://codeforces.com/profile/hscsultana22
* Date: 2025-11-07
* Statement: 
https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B
*/


#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    bool found = false;
    
    for (int i = 2; i <= N; i += 2) {
        cout << i << endl;
        found = true;
    }
    
    if (!found)
        cout << -1 << endl;

    return 0;
}
