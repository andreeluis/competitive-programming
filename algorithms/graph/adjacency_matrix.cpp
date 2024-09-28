#include <bits/stdc++.h>

using namespace std;

#define TAM 10

bool matrix[TAM][TAM] = { false };

void addEdge(int i, int j, bool directed) {
  if (i >= TAM || j >= TAM) {
    return;
  }

  matrix[i][j] = true;

  if (!directed) {
    matrix[j][i] = true;
  }
}

void dfs(int from, int to) {
  cout << "DFS from: " << from << " to: " << to << endl;

  vector<int> visited; // Keep track of visited nodes
  stack<int> next;     // Stack to hold the next nodes to visit

  next.push(from);
  visited.push_back(from);

  while (!next.empty()) {
    int i = next.top();
    next.pop();

    if (i == to) {
      cout << " -> " << i << endl;
      cout << "Path found!" << endl << endl;
      return;
    }

    cout << " -> " << i;

    // Explore all adjacent nodes
    for (int j = 0; j < TAM; j++) {
      if (matrix[i][j] && find(visited.begin(), visited.end(), j) == visited.end()) {
        next.push(j); // Add the next node to the stack
        visited.push_back(j); // Mark it as visited
      }
    }
  }

  cout << endl << "No path found" << endl << endl;
}

void bfs(int from, int to) {
  cout << "BFS from: " << from << " to: " << to << endl;

  vector<int> visited; // Keep track of visited nodes
  queue<int> next;     // Stack to hold the next nodes to visit

  next.push(from);
  visited.push_back(from);

  while (!next.empty()) {
    int i = next.front();
    next.pop();

    if (i == to) {
      cout << " -> " << i << endl;
      cout << "Path found!" << endl << endl;
      return;
    }

    cout << " -> " << i;

    // Explore all adjacent nodes
    for (int j = 0; j < TAM; j++) {
      if (matrix[i][j] && find(visited.begin(), visited.end(), j) == visited.end()) {
        next.push(j); // Add the next node to the stack
        visited.push_back(j); // Mark it as visited
      }
    }
  }

  cout << endl << "No path found" << endl << endl;
}

int main() {
  addEdge(1, 2, false);
  addEdge(1, 3, false);
  addEdge(2, 6, false);
  addEdge(2, 5, false);
  addEdge(3, 6, false);
  addEdge(3, 4, false);
  addEdge(4, 5, false);
  addEdge(4, 8, false);
  addEdge(6, 8, false);

  dfs(1, 7); // has no path
  dfs(1, 8);

  bfs(1, 7); // has no path
  bfs(1, 8);

  return 0;
}
