#include<iostream>
using namespace std;
void selection_sort(int a[],int n)
{
    int count =0;
    for(int i=0;i<n-1;i++)
    {
        count++;
        count++;
        int m=i;
        for(int j=i+1;j<n;j++)
        {
            count++;
            count++;
            if(a[j]<a[m])
            {
                count++;
                m=j;
            }
        }
        count+=4;
        int temp =a[m];
        a[m]=a[i];
        a[i]=temp;
    }
    count++:
        cout<<count;
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
    selection_sort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;

}
