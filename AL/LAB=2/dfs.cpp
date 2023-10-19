#include<iostream>
using namespace std;
#define M 100
void dfs(int k,int adjM[][M],int visited[],int q)
{
    int j;
    cout<<k<<" ";
    visited[k]=1;
    for(j=1;j<q+1;j++)
    {
        if(!visited[j]&&adjM[k][j]==1)
        {
            dfs(j,adjM,visited,q);
        }
    }
}
int main()
{
    cout<<"Enter no. of vertices"<<endl;
    int v;
    cin>>v;
    cout<<"Enter no. of edges"<<endl;
    int e;
    cin>>e;
    int p,q;
    int adjM[M][M]={0};
    cout<<"Enter source and destination"<<endl;
    for(int i=0;i<p;i++)
    {
        cin>>p>>q;
        adjM[p][q]=1;
        adjM[q][p]=1;
    }
    cout<<"Adjacency matrix is:"<<endl;
    for(int i=0;i<q;i++)
    {
        for(int j=0;j<q;j++)
        {
            cout<<adjM[i][j]<<" ";
        }
        cout<<endl;
    }
    int visited[q+1]={0};
    cout<<"Enter starting vertex";
    int k;
    cin>>k;
    dfs(k,adjM,visited,q);
}
