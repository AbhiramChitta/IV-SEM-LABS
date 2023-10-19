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

};

int main()
{
    graph s;
    int n;
    while(n!=3)
    {
        cout<<"Choose:\n1)Create edge\n2)Create vertex\n3)Print(!)\n4)Transpose"<<endl;
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
    }
    return 0;
}
