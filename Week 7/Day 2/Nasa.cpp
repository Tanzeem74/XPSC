#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
const int maxN = (1LL << 15);
vector<int> allPalindrome;
bool isPalindrome(int x) {
   string s = to_string(x);
   int len = s.size();
   for (int i = 0;i < len / 2;i++) {
      if (s[i] != s[len - i - 1]) {
         return false;
      }
   }
   return true;
}
void markPalindrome() {
   for (int i = 0;i < maxN;i++) {
      if (isPalindrome(i)) {
         allPalindrome.push_back(i);
      }
   }
}

int main() {
    faster
    markPalindrome();
    int t; cin >> t;
   while (t--) {
      int n; cin >> n;
      vector<int> a(n), cnt(maxN + 1);
      for (int i = 0;i < n;i++) {
         cin >> a[i];
         cnt[a[i]]++;
      }

      ll ans = n;
      for (int i = 0;i < n;i++) {
         for (int j = 0;j < allPalindrome.size();j++) {
            int curr = (a[i] ^ allPalindrome[j]);
            ans += cnt[curr];
         }
      }

      cout << (ans / 2) << endl;
   }
}