#include<iostream>
#include<stack>
using namespace std;
const int MAX=5;
class graph
{
    public:
    int vertex,n=0;
    int adj_mat[MAX][MAX];
    graph()
    {
        vertex=1;
         for(int i=0;i<MAX;i++)
        {
            for(int j=0;j<MAX;j++)
            {
               adj_mat[i][j]=0;
            }
        }
    }
    void create_vertex()
    {
        vertex+=1;
        cout<<"vertex created"<<endl;
    }
    void create_edge()
    {
        int a,b;
        cout<<"Enter vertices number b/w which edge is to be created"<<endl;
        cin>>a;
        cin>>b;
        adj_mat[a-1][b-1]=1;

    }
    void print()
    {
         for(int i=0;i<vertex;i++)
        {
            for(int j=0;j<vertex;j++)
            {
                cout<<adj_mat[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    void transpose()
    {
        int b[MAX][MAX];
        for(int i=0;i<vertex;i++)
        {
            for(int j=0;j<vertex;j++)
            {
                b[i][j]=adj_mat[j][i];
            }
        }
        for(int i=0;i<vertex;i++)
        {
            for(int j=0;j<vertex;j++)
            {
                cout<<b[i][j]<<" ";
            }
            cout<<endl;
        }
    }
        void DFS(int source)
        {
        bool vis[n+1] = {false};
        stack <int> s;
        s.push(source);
        vis[source] = true;
        int curr=source;
        cout<<curr<<" ";
        while(!s.empty())
            {
            bool f=true;
            for(int i=1;i<n+1;i++)
            {
                if(adj_mat[i][curr]==1 && (!vis[i]))
                {
                    vis[i]=true;
                    f=false;
                    curr=i;
                    cout<<curr<<" ";
                    s.push(i);
                    break;
                }
            }
            if(f){
                curr=s.top();
                cout<<s.top()<<" ";
                s.pop();

            }
        }
    }
};


int main()
{
    graph s;
    int n;
    while(n!=3)
    {
        cout<<"Choose:\n1)Create edge\n2)Create vertex\n3)Print(!)\n4)Transpose\n5)DFS"<<endl;
        cin>>n;
        if(n==1)
        {
            s.create_edge();
        }
        if(n==2)
            s.create_vertex();
        if(n==3)
        {
            s.print();
        }
        if(n==4)
        {
            s.transpose();
        }
        if(n==5)
            s.DFS(1);
    }
    return 0;
}
