//백준 11650 좌표 정렬하기 Pair, vector, typedef, 정렬에 대해 배움.
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
typedef pair<int, int> Pair;
vector<Pair> PV;

int n,m,g;

bool func(Pair &a,Pair &b){
    return a.second < b.second || (a.second==b.second && a.first < b.first);
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i=0;i<n;i++){
        int F,S;
        cin >> F >> S;
        PV.push_back(make_pair(F,S));
    }
    sort(PV.begin(),PV.end(),func);
    for(int i=0;i<PV.size();i++){
        Pair &v = PV[i];
        cout << v.first << " " << v.second << endl;
    }

    return 0;
}