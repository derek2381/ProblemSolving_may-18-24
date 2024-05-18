// problem link
// https://codeforces.com/problemset/problem/115/A


#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n+1];

    for(int i = 1;i <= n;i++){
        cin >> arr[i];
    }

    int count = 1;

    for(int i = 1;i <= n;i++){
        int val = arr[i];
        int dep = 1;
        while(val != -1){
            dep++;
            val = arr[val];
        }

        count = max(count, dep);
    }

    cout << count << endl;
}
