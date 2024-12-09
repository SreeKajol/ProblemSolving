#include <iostream>
#include <vector>
using namespace std;

void generateMagicSquare(int n) {
    if (n % 2 == 0) {
        cout << "Magic square is not possible for even-order matrices." << endl;
        return;
    }

    vector<vector<int>> magicSquare(n, vector<int>(n, 0));
    int i = 0, j = n / 2;

    for (int num = 1; num <= n * n; ++num) {
        magicSquare[i][j] = num;
        int new_i = (i - 1 + n) % n;
        int new_j = (j + 1) % n;

        if (magicSquare[new_i][new_j] != 0) {
            new_i = (i + 1) % n;
            new_j = j;
        }

        i = new_i;
        j = new_j;
    }

    cout << "Magic Square of order " << n << ":" << endl;
    for (int r = 0; r < n; ++r) {
        for (int c = 0; c < n; ++c) {
            cout << magicSquare[r][c] << "\t";
        }
        cout << endl;
    }

    int magicConstant = n * (n * n + 1) / 2;
    cout << "Magic Constant: " << magicConstant << endl;
}

int main() {
    int n;
    cout << "Enter the order of the magic square (odd number): ";
    cin >> n;

    generateMagicSquare(n);

    return 0;
}
