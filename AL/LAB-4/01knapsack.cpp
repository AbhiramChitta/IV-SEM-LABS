#include <iostream>
using namespace std;
#include<bits/stdc++.h>
class Container
{
public:
    int w,p;
    double r;
}; 
bool Compareratio(Container t1, Container t2)
{
return(t1.r>t2.r);
}
int main()
{
Container arr[10];
Container temp;
int n,c;
cout<<"enter the total number of containers"<<endl;
cin>>n;
cout<<"enter the total capacity"<<endl;
cin>>c;
cout<<"enter the individual container weight and profit"<<endl;
for(int i=0;i<n;i++)
{
  cin>>arr[i].w>>arr[i].p;
} 
for(int i=0;i<n;i++)
{   
arr[i].r=(arr[i].p/arr[i].w);
}
 sort(arr,arr+n,Compareratio);
/*for(int i=0;i<n;i++){    for(int j=i+1;j<n;j++)    {if(arr[j].r<arr[i].r){      temp=arr[i];      arr[i]=arr[j];      arr[j]=temp;}     }}*/
 for(int i=0;i<n;i++)
    cout<<arr[i].w<<" "<<arr[i].p<<endl;
 bool x[n];
for(int i=0;i<n;i++)
    x[i]=false;
 int tot=0;
int i=0;
while(tot+arr[i].w<=c)
{
tot=tot+arr[i].w;
x[i]=true;
i++;
}
int tp=0;
cout<<"the containers loaded are"<<endl;
for(i=0;i<n;i++)
{
    if(x[i]==true)
{       
cout<<"profit: "<<arr[i].p<<" "<<"wight: "<<arr[i].w<<endl;
        tp=tp+arr[i].p;
    }
}
cout<<"total profit= "<<tp;
return 0;
}
