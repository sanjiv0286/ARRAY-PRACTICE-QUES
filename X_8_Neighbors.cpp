#include <iostream>
using namespace std;

bool check_neighbors(char A[][100], int x, int y, int n, int m) {
    for(int i=max(0,x-1); i<=min(n-1,x+1); i++) {
        for(int j=max(0,y-1); j<=min(m-1,y+1); j++) {
            if(i==x && j==y) continue; // Skip the center cell
            if(A[i][j] == '.') return false; // A neighbor is not 'x'
        }
    }
    return true;
}

int main() {
    int n, m, x, y;
    cin >> n >> m;

   
    char A[100][100];
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> A[i][j];
        }
    }

    cin >> x >> y;

    if(check_neighbors(A, x-1, y-1, n, m)) {
        cout << "yes\n";
    } else {
        cout << "no\n";
    }

    return 0;
}
