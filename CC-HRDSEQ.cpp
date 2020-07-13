#include<bits/stdc++.h>
using namespace std;

void shammi() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int isThere(int* arr, int idx) {
    int curr_idx = -1;
    for (int i = 0; i < idx; i++) {
        if (arr[i] == arr[idx]) {
            curr_idx = i;
        }
    }
    if (curr_idx == -1) return 0;
    else return idx - curr_idx;
}

int main() {
    shammi();
    int t; cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int count = 0;
        int arr[10000];
        arr[0] = 0, arr[1] = 0;
        //count[0] = 2;
        for (int i = 2; i < n; i++) {
            arr[i] = isThere(arr, i - 1);

        }
        for (int i = 0; i < n; i++) {
            if (arr[i] == arr[n - 1]) count++;
        }
        if (n == 1) {
            cout << 1 << endl;
            continue;
        }
        if (n == 2) {
            cout << 2 << endl;
            continue;
        }
        cout << count << endl;
    }
    return 0;
}