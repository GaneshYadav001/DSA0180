#include <iostream>
#include <vector>
using namespace std;

void generatePascalsTriangle(int rows) {
    vector<vector<int>> triangle(rows);

    for (int i = 0; i < rows; i++) {
        triangle[i].resize(i + 1);
        
        triangle[i][0] = triangle[i][i] = 1;

        for (int j = 1; j < i; j++) {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }

    for (const auto& row : triangle) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows;

    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> rows;

    generatePascalsTriangle(rows);

    return 0;
}
