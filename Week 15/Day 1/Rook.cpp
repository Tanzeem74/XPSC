#include<bits/stdc++.h>
using namespace std;
void solution()
{

    char s;
    int i;
    cin >> s >> i;
    for (char j='a'; j<='h'; j++)
    {
        if (j!=s)
        {
            cout << j << i << endl;
        }
    }
    for (int k=1; k<=8; k++)
    {
        if (k!=i)
        {
            cout << s << k << endl;
        }
    }

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t ;
    while(t--)
    {
        solution();
    }
}