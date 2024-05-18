#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<ll>v(n);
    for(int i=1;i<=n;i++)
    {
        cin >> v[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(v[i]>v[j])
            {
                int t=v[i];
                v[i]=v[j];
                v[j]=t;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
