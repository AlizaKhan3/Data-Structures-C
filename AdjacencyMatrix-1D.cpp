#include <iostream>
using namespace std;
#include <vector>

void printAdjacencyMatrix(int graph[5][5], int V){
  for(int i =0; i<V ; i++){
    for(int j =0; j<V ; j++){
      cout<<graph [i][j]<<" ";
  }
cout<<endl;
  }
}

int main(){
  int V =5;
  int graph [5][5] = {{0,1,1,1,0},{0,1,1,1,0},{0,1,1,1,0},{0,1,1,1,0},{0,1,1,1,0}};
  printAdjacencyMatrix(graph, V);
  return 0;
}
