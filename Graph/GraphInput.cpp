#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 123;
int graph1[N][N];
vector<int> graph2[N];

int main() {
    int v, e;
    cin >> v >> e;
    for (int i = 1; i <= e; i++) {
        int v1, v2;
        cin >> v1 >> v2;
        // Matrix
        graph1[v1][v2] = 1;
        graph1[v2][v1] = 1;

        // List
        graph2[v1].push_back(v2);
        graph2[v2].push_back(v1);
    }

///Printing array of vector
    for (int i = 1; i <= v; i++) { // Corrected: iterate over vertices
        cout << "Node " << i << ": ";
        for (auto node : graph2[i]) { // Corrected: iterate over neighbors
            cout << node << " ";
        }
        cout << "\n";
    }

    return 0;
}
