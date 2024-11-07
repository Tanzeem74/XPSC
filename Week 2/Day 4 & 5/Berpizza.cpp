#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long int
using namespace std;
int main() {
   faster
   int n,No = 1;
   cin >> n;
   set<pair<int, int>> s;
   multiset<pair<int, int>> ms;
   vector<int> res;
   for (int i=1;i<=n;i++) {
      int type;
      cin >> type;
      if (type==1) {
         int money;
         cin >> money;
         s.insert({ No,money });
         ms.insert({ money,-No });
         No++;
      }
      else if (type==2) {
         int pos = s.begin()->first, money = s.begin()->second;
         res.push_back(pos);
         s.erase(s.begin());
         ms.erase({ money,-pos });
      }
      else {
         int pos = -ms.rbegin()->second, money = ms.rbegin()->first;
         res.push_back(pos);
         ms.erase(--ms.end());
         s.erase({ pos,money });
      }
   }

   for (auto val : res) cout << val << " ";
   cout << endl;

   return 0;
}