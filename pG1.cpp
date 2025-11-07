/*
* Course: Competitive Programming Sessional (CCE-2310)
* Assignment: Codeforces ICPC Assiut University Community
* Problem ID: G
* Author: Sultana Jahan Tahmina (ID:E243419)
* Language/Version: GNU G++20 13.2 (64 bit, winlibs)
* Codeforces Profile: https://codeforces.com/profile/hscsultana22
* Date: 2025-11-07
* Statement: 
https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/G
*/


#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, m, k;
    cin >> n >> m >> k;
    long long max_kat = min({k, n, (n + m) / 2});
    cout << max_kat << endl;
    return 0;
}

