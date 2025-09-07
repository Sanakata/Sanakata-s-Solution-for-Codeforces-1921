#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, a = 0, b = 0; cin >> n;
        char s[n], f[n];
        for(int i = 0; i < n; i++) cin >> s[i];
        for(int i = 0; i < n; i++){
            cin >> f[i];
            if(s[i] == '0' && f[i] == '1') a++;
            else if(s[i] == '1' && f[i] == '0') b++;
        }
        cout << max(a, b) << "\n";
    }
}
