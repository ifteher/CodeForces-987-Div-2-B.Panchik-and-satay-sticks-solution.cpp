#include<bits/stdc++.h>
using namespace std;
void zayed()
{
        int n,f=1,ind=0;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for( ;ind<n;ind++,f++)
    {
        if(v[ind]==f) continue;
        if(abs(f-v[ind])!=1 || v[ind+1]!=f || f==n)
        {
            cout<<"NO"<<endl; 
            return;
        } 
        swap(v[ind],v[ind+1]);
    }
   
     cout<<"YES"<<endl;
   
}
int main()
{
 int t;
 cin >> t;
 while(t--)
{
zayed();
}
return 0;
}
