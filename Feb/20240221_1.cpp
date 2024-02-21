//백준 11866 요세푸스 문제 0
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

int n,k,m,t,a;
queue<int> qu;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k;
    for(int i=1;i<=n;i++)
        qu.push(i);
    cout << "<";
    for(int i=1;i<n;i++){
        for(int j=1;j<k;j++){
            int a = qu.front();
            qu.pop();
            qu.push(a);
        }
        cout << qu.front() << ", ";
        qu.pop();
    }
    cout << qu.front() << ">";
    
    return 0;
}