#include<bits/stdc++.h>
using namespace std;
class Graph {
  int num;
  list<int>* adj;
  bool* vis;

   public:
  Graph(int v);
  void edge(int v1, int v2);
  void BFS(int root);
};
Graph::Graph(int v) {
  num = v;
  adj = new list<int>[v];
}

void Graph::edge(int v1, int v2) {
  adj[v1].push_back(v2);
  adj[v2].push_back(v1);
}

// BFS algorithm
void Graph::BFS(int root) {
  vis = new bool[num];
  for (int i = 0; i < num; i++)
    vis[i] = false;

  list<int> queue;

  vis[root] = true;
  queue.push_back(root);

  list<int>::iterator i;

  while (!queue.empty()) {
    int c = queue.front();
    cout << "Visited " << c << " ";
    queue.pop_front();

    for (i = adj[c].begin(); i != adj[c].end(); ++i) {
      int adjv = *i;
      if (!vis[adjv]) {
        vis[adjv] = true;
        queue.push_back(adjv);
      }
    }
  }
}
int main(){
// your graph here
}
