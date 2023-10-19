#include<iostream>
using namespace std;

void insertion_sort(int a[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        count++;
        count+=2;
       int  key=a[i];
       int j;
        for(j=i-1;j>=0 && a[j]>key;j--)
        {
            count++;
            count++;
            a[j+1]=a[j];
        }
        count++;
        count++;
        a[j+1]=key;
    }
    count++;
    cout<<count<<endl;
}



int main()
{
    cout<<"Enter size of array"<<endl;
    int n;
    cin>>n;
    cout<<"Enter array elements"<<endl;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    insertion_sort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;

}

