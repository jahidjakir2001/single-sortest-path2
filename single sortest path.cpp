
   /*******************************************************
    *   IN THE NAME OF ALLAH  ,  BISMILLAHIR RAHMANIR RAHIM*
    ********************************************************/
    /**.....................................আল্লাহ্ ব্যাতিত কোন মাবুদ নাই............................**/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9+7
#define endl '\n'
#define faster() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
string s="abcdefghijklmnopqrstuvwxyz";
int dx[]={-1,1,0,0,-1,-1,1,1};
int dy[]={0,0,1,-1,-1,1,1,-1};
int node,edge;
vector<int>v[1000];
bool vis[1000];
int dis[1000];
void DFS(int x,int y)
{
    vis[x]=true;
    dis[x]=y;
    for(int i=0;i<v[x].size();i++)
    {
        if(vis[v[x][i]]==false)
        {
            DFS(v[x][i],y+1);
        }
    }
}
int main()
{
    cout<<"Enter the node and edge:"<<endl;
    cin>>node>>edge;
    cout<<"Enter the vertex:"<<endl;
    for(int i=1;i<=edge;i++)
    {
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    cout<<"Enter the source:"<<endl;
    int x;
    cin>>x;
    DFS(x,0);
    cout<<"Printing single sorce sortest path:"<<endl;
    for(int i=1;i<=node;i++)
    {
        cout<<x<<"->"<<i<<" = "<<dis[i]<<endl;
    }
}
