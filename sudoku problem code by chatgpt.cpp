#include <iostream>
#include <cstdio>
using namespace std;

const int N = 9;
int a[N][N];

bool check(int x, int y, int num) {
    // check row
    for (int i = 0; i < N; i++) {
        if (a[x][i] == num) return false;
    }
    // check column
    for (int i = 0; i < N; i++) {
        if (a[i][y] == num) return false;
        
        
    }
    // check sub-grid
    int sx = (x / 3) * 3, sy = (y / 3) * 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (a[sx + i][sy + j] == num) return false;
        }
    }
    return true;
}

bool solve(int x, int y) {
    if (x == N) return true;
    if (y == N) return solve(x + 1, 0);
    if (a[x][y] != 0) return solve(x, y + 1);
    for (int i = 1; i <= N; i++) {
        if (check(x, y, i)) {
            a[x][y] = i;
            if (solve(x, y + 1)) return true;
            a[x][y] = 0;
        }
    }
    return false;
}

int main() {
    // input
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> a[i][j];
        }
    }
    if (solve(0, 0)) {
        // output
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "No solution!" << endl;
    }
    return 0;
}
