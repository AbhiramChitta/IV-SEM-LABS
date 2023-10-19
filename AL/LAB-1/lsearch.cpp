#include<iostream>
using namespace std;
int main()
{
    int ele,n,count=0;
    cout<<"Enter no. of elements"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter elements"<<endl;
    count++;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter element to be found"<<endl;
    cin>>ele;
    for(int i=0;i<n;i++)
    {count++;
    count++;
        if(a[i]==ele){
                count++;
                break;

    }

    }
    count++;
    cout<<count;
    return 0;

}
