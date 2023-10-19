#include <iostream>
using namespace std;
void bubble_sort(int a[],int n)
{
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        count++;
        for(int j=0;j<n-i-1;j++)
        {
            count++;
            count++;
            if(a[j]>a[j+1])
            {
                count+=3;
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        count++;
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
     bubble_sort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;

}
