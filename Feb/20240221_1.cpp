//백준 10815 숫자 카드
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <string>
#include <stack>
#include <queue>
#include <utility>
#include <cmath>
#include <set>
#define endl '\n'
#include <stdio.h>
#define INF 999999999
using namespace std;

int n,k,m,t,a,mid;
vector<int> v1,v2;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    while(n--){
        cin >> k;
        v1.push_back(k);
    }
    sort(v1.begin(),v1.end());
    cin >> m;
    while(m--){
        cin >> k;
        v2.push_back(k);
    }
    
    for(int i=0;i<v2.size();i++){
        int lo = 0, hi = v1.size();
        while (lo + 1 < hi) {
            mid = (lo + hi) / 2;
            if(v2[i] == v1[mid]) break;
            else if (v2[i] > v1[mid]) lo = mid;
            else hi = mid;
        }
        if(lo+1 ==hi)
            mid = (lo + hi) / 2;
        if(v1[mid] == v2[i]) cout << 1;
        else cout << 0;
        cout << " ";
    }

    
    return 0;
}