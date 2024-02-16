//백준 2869번 문제 : 달팽이는 올라가고 싶다
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
int a,b,v;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a >> b >> v;
    if ((v - a) % (a - b) == 0)
		cout << (v - a) / (a - b) + 1;
	else
		cout << (v - a) / (a - b) + 2;    
    return 0;
}