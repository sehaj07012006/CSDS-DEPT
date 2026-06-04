#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c)
{
    int m = mat.size();
    int n = mat[0].size();

    if (m * n != r * c)
        return mat;
    vector<vector<int>> res(r, vector<int>(c));
    for (int k = 0; k < m * n; k++)
    {
        res[k / c][k % c] = mat[k / n][k % n];
    }

    return res;
}

int main()
{
    vector<vector<int>> mat = {{1, 2}, {3, 4}};
    int r = 1, c = 4;
    vector<vector<int>> res = matrixReshape(mat, r, c);
    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[0].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}