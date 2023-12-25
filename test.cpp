#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    // TODO: Implement your solution here.
    int n;
    cin >> n;
    string s;
    cin >> s;
    int character[26] = {0};
    for(int i = 0; i < n; i++){
        character[s[i] - 'a']++;
    }
    for(int i = 0; i < 26; i++){
        for(int j = 0; j < character[i]; j++){
            cout<<char('a'+i);
        }
    }

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // int t;
    // cin>>t;

    // while(t--){
        solve();
    //  }
    return 0;
}