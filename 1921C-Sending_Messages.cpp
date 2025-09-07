#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        long long n, f, a, b, prev = 0, m; cin >> n >> f >> a >> b;
        bool ans = true;
        for(int i = 0; i < n; i++){
            cin >> m;
            if(ans && ((f -= min((m - prev) * a, b)) <= 0)) ans = false;
            prev = m;
        }
        cout << (ans ? "YES" : "NO") << "\n";
    }
}
