#include <iostream>
using namespace std;
#include <vector>
// void printGraph(int graph[i][j], int V) {
void printGraph(const vector<vector<int>>& graph, int V){
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int V;
    cout<<"Enter verticies";
    cin>>V;
    vector<vector<int>> graph(V, vector<int>(V));
    
    cout<<"Enter Array Elements: ";
    for(int i =0; i<V; i++){
      for(int j =0; j<V; j++){
        cin>>graph[i][j];
      }
      cout<<endl;
    }
    
    printGraph(graph, V);
    return 0;
}
