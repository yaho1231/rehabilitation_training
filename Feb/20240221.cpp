//백준 1436 영화감독 숌, 브루트포스
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

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    while (a!=n)
    {
        k++;
        m = k;
        t = 0;
        while(m>0){
            if(m%10==6 && m/10%10==6 && m/100%10==6){
                a++;
                break;
            }
            m/=10;
        }
    }
    cout << k;
    

    return 0;
}