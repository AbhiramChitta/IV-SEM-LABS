#include<iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,c;
    cout<<"Enter no. of weights"<<endl;
    cin>>n;
    cout<<"Enter total capacity"<<endl;
    cin>>c;
    int w[n];
    int x[n];
    int pos[n];
    for(int i=0;i<n;i++)
    {
        x[i]=0;
    }
    cout<<"Enter weights"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>w[i];
        pos[i]=i;
    }

    sort(w,w+n);
    for(int i=0;i<n;i++)
    {
        cout<<w[i]<<" ";
    }
    for(int i=0;i<n&&w[i]<=c;i++)
    {
        x[pos[i]]=1;
        c-=w[i];
    }
    cout<<"Selected items: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<x[i]<<" ";
    }
}
