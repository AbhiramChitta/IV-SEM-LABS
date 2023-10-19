#include<iostream>
using namespace std;
#define M 10
class Queue
{
    public:
        int a[100];
        int front, rear;
        Queue()
        {
            front = -1;
            rear = 0;
        }
        bool isEmpty()
        {
            if (front == rear)
            return true;
            else
            return false;
        }
        void enqueue(int x)
        {
            if (rear == 99)
            cout << "Queue is full";
            else if (rear == 0)
            {
                a[rear++] = x;
                front = 0;
            }
            else
            {
                a[rear++] = x;
            }
        }
        int dequeue()
        {
            if (isEmpty())
                cout << "Queue is Emtpy";
            else
            {
                return (a[front++]);
            }
            return -1;
        }
        void display()
        {
            int i;
            cout << "\nQueue : ";
            for (i = front; i <= rear; i++)
            cout << a[i] << "\t";
        }
};
void bfs(int a[10][10],int source,int visited[],int n)
{


    //a->vertices
    //b-> edges
    Queue q;
    q.enqueue(source);
    int z;
    while (!q.isEmpty())
    {
        z = q.dequeue();
            cout << (z) << " ";
        for (int i = 0; i < n; i++)
        {
            if (a[z - 1][i] == 1 && visited[i] == 0)
            {
            visited[i] = 1;
            q.enqueue(i + 1);
            }
        }
    visited[z - 1] = 1;
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
    bfs(adjM,k,visited,v);
}
