// rotate matrix by 90`
#include <bits/stdc++.h>
using namespace std;

// 90 degree rotation means our row becomes columns, we simple
// take transpose that is rows becomes columns but reverse the all rows
// as first row become last column not the first column so by reversing rows

void rotate(vector<vector<int>> &matrix)
{
    int n = matrix.size()/*row*/, m = matrix[0].size()/*col*/;

    cout << n << m;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < m; j++)
            swap(matrix[i][j], matrix[j][i]);
    }
    for (int i = 0; i < n; i++)
        reverse(matrix[i].begin(), matrix[i].end());
}

//2nd method
void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();
    
    // changing symmetrically from middle row
    for(int i = 0; i < n/2; i++) {
        for(int j = 0; j < n; j++) {
            swap(matrix[i][j], matrix[n-1-i][j]);
        }
    }
    
    // taking transpose
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }