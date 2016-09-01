#include <bits/stdc++.h>
using namespace std;
#define INF 99999999
typedef pair<int, int> ppi;
int dist[100010];
class Graph
{
    int v;
    vector <list <pair <int, int> > > adj;
    public:
    Graph (int v);
    void add_edge(int x, int y, int w);
    void dijkastra(int s);
};
Graph :: Graph(int v)
{
    this->v=v;
    adj.resize(v+1);
}
void Graph :: add_edge(int x, int y, int w)
{
    adj[x].push_back(make_pair(y,w));
    adj[y].push_back(make_pair(x,w));
}
void Graph :: dijkastra(int s)
{
    priority_queue<ppi,vector<ppi>, greater<ppi> > pq;
    pq.push(make_pair(0,s));
    dist[s]=0;
    int j;
    for(j=0;j<v && !pq.empty();j++)
    {
        int u=pq.top().second;
        pq.pop();
        list<ppi> :: iterator i;
        for(i=adj[u].begin();i!=adj[u].end();i++)
        {
            int v=(*i).first;
            int weight=(*i).second;
            if(dist[v]>dist[u]+weight)
            {
                dist[v]=dist[u]+weight;
                pq.push(make_pair(dist[v],v));
            }
        }
    }
}
int main()
{
    int t,v,e,i,s,d,x,y,w;
    cin>>t;
    while(t--)
    {
        cin>>v;
        cin>>e;
        cin>>s;
        cin>>d;
        Graph g(v);
        for(i=0;i<=v;i++)
        dist[i]=INF;
        for(i=1;i<=e;i++)
        {
           cin>>x;
           cin>>y;
           cin>>w;
           g.add_edge(x,y,w);
        }
        g.dijkastra(s);
        if(dist[d]==INF)
        cout<<"NONE"<<endl;
        else
        cout<<dist[d]<<endl;
    }
    return 0;
}
