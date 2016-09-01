#include <stdio.h>
#include <stdlib.h>
int processed[1001];
int discovered[1001];
int parent[1001];
struct qnode
{
    int data;
    struct qnode *next;
};
struct queue
{
  struct qnode *front;
  struct qnode *rear;
};
struct node
{
    int data;
    int weight;
    struct node *next;
};
struct graph
{
    struct node *array[1001];
    int edgdegree[1001];
    int vertices;
    int edges;
    int directed;
};
void initialize_queue(struct queue *q)
{
    q->front=NULL;
    q->rear=NULL;
    return;
}
void enqueue(struct queue **q, int key)
{
    struct qnode *temp=(struct qnode *)malloc(sizeof(struct qnode));
    temp->data=key;
    temp->next=NULL;
    if(isempty(*q))
    {
        (*q)->front=temp;
        (*q)->rear=temp;
        return;
    }
    (*q)->rear->next=temp;
    (*q)->rear=temp;
    return;
}
int isempty(struct queue *q)
{
    if(q->front==NULL)
        return 1;
    return 0;
}
int dequeue(struct queue *q)
{
    if(isempty(q))
        return -1;
    struct qnode *temp=q->front;
    int key=temp->data;
    q->front=temp->next;
    if(q->front==NULL)
        q->rear=NULL;
    free(temp);
    return key;
}
void initalizeGraph(struct graph *g, int n, int m, int d)
{
    g->vertices=n;
    g->edges=m;
    g->directed=d;
    int i;
    for(i=1;i<=n;i++)
        g->array[i]=NULL;
    for(i=1;i<=n;i++)
        g->edgdegree[i]=0;
    return;
}
void readgraph(struct graph *g, int d)
{
    int n=100;
    int m=300;
    int x,i,j,k,l;
    initalizeGraph(g,n,m,d);
    for(i=1;i<=8;i++)
    {
        //printf("vishal");
    for(j=1;j<=8;j++)
    {
       x=i*10+j;
       k=i-2;
       l=j+1;
       if(k>=1 && l<=8)
       insertedge(g,x,k*10+l,d);
       k=i+2;
       l=j+1;
       if(k<=8 && l<=8)
       insertedge(g,x,k*10+l,d);
       k=i-1;
       l=j+2;
       if(k>=1 && l<=8)
        insertedge(g,x,k*10+l,d);
        k=i+1;
        l=j+2;
        if(k<=8 && l<=8)
        insertedge(g,x,k*10+l,d);
    }
    }
    return;
}
void insertedge(struct graph *g, int x, int y, int d)
{
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->weight=0;
    temp->data=y;
    temp->next=g->array[x];
    g->array[x]=temp;
    g->edgdegree[x]++;
    if(d==0)
        insertedge(g,y,x,1);
    return;
}
void bfs(struct graph *g, int start, int end)
{
   struct queue *q=(struct queue *)malloc(sizeof(struct queue));
   initialize_queue(q);
   enqueue(&q,start);
   enqueue(&q,-3);
   struct node *temp=g->array[start];
   int v,y;
   int count=0;
    discovered[start]=1;
    parent[start]=-1;
    while(!isempty(q))
    {
        v=dequeue(q);
       // processed_vertex_early(v);
       if(v==end)
        break;
       if(v==-3)
       {
           enqueue(&q,-3);
           count++;
           continue;
       }
        processed[v]=1;
        temp=g->array[v];
        while(temp!=NULL)
        {
            y=temp->data;
            if(discovered[y]==0)
            {
                enqueue(&q,y);
                discovered[y]=1;
                parent[y]=v;
            }
           // else if(processed[y]==0 || g->directed==1)
            //processed_edge(v,y);
            temp=temp->next;
        }
    }
    printf("%d\n",count);
    return;
}
void initialize_search(struct graph *g)
{
    int i;
    for(i=1;i<=g->vertices;i++)
    {
        processed[i]=0;
        discovered[i]=0;
        parent[i]=-1;
    }
}
int main()
{
    struct graph *g=(struct graph *)malloc(sizeof(struct graph));
    readgraph(g,0);
    //initialize_search(g);
    //bfs(g,88,88);
    int t,x,y,s,d;
    char arr[4];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",arr);
        x=arr[0]-96;
        y=arr[1]-'0';
        s=x*10+y;
        scanf("%s",arr);
        x=arr[0]-96;
        y=arr[1]-'0';
        d=x*10+y;
        initialize_search(g);
        bfs(g,s,d);
    }
    return 0;
}
