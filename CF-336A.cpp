#include<bits/stdc++.h>
using namespace std;
 
int sgn(int x) {
        if (x > 0) return 1;
        if (x == 0) return 0;
        return -1;
}
 
int main() {
        int x, y;
        scanf("%d %d", &x, &y);
        int v = abs(x) + abs(y);
        pair<int,int> f = make_pair(v * sgn(x), 0);
        pair<int,int> s = make_pair(0, v * sgn(y));
        if (f.first > s.first) swap(f, s);
        printf("%d %d %d %d\n", f.first, f.second, s.first, s.second);
        return 0;
}