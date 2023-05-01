#include<bits/stdc++.h>
using namespace std;

const int maxn=100;
bool adjMatrix[maxn][maxn];
bool visited[maxn];

void bfs(int start){
    queue<int>q;
    q.push(start);
    visited[start]=true;
    while(!q.empty()){
        int curr=q.front();
        q.pop();
        cout<<curr<<" ";
        for(int i=0;i<maxn;i++){
            if(adjMatrix[curr][i]&&!visited[i]){
                q.push(i);
                visited[i]=true;
            }
        }
    }

}

int main(){
    int node, edges;
    cin>>node>>edges;
     memset(adjMatrix, false, sizeof(adjMatrix));
    memset(visited, false, sizeof(visited));
    for(int i=0;i<edges;i++){
        int u,v;
        cin>>u>>v;
        adjMatrix[u][v]=adjMatrix[v][u]=true; // undirected graph
    }
    bfs(0);
    return 0;
}