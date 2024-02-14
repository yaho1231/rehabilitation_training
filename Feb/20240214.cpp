//백준 2609 최대공약수와 최소공배수
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
int n,m,g;

//유클리드 호제법 활용
int gcd(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    g = gcd(n,m);
    cout << g << endl << n*m/g;

    return 0;
}