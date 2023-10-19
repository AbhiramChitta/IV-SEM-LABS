#include<iostream>
using namespace std;
int partition_quick(int a[],int start,int end)
{
    int pivot = a[start];
    int count = 0;
    for (int i = start + 1; i <= end; i++)
    {
        if (a[i] <= pivot)
            count++;
    }
    int pivotInd= start + count;
    swap(a[pivotInd], a[start]);
    int i = start, j = end;
    while (i < pivotInd && j > pivotInd)
    {
        while (a[i] <= pivot)
        {
            i++;
        }
        while (a[j] > pivot)
        {
            j--;
        }
        if (i < pivotInd && j > pivotInd)
        {
            swap(a[i++], a[j--]);
        }
    }
    return pivotInd;
}
void quick_sort(int a[],int start,int End)
{
    if(start>=End)
        return;
    int p=partition_quick(a,start,End);
    quick_sort(a,start,p-1);
    quick_sort(a,p+1,End);
}
int main()
{
    int n;
    cout<<"Enter no. of elements"<<endl;
    cin>>n;
    cout<<"Enter elements"<<endl;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    quick_sort(a,0,n-1);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
