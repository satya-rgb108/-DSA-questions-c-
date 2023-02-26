// Given a 2D binary matrix A of dimensions NxM, determine the row that contains a minimum number of 1's. Note - The matrix contains only 1s and 0s. Also, if two or more rows contain the minimum number of 1's, the answer is the lowest of those indices.
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int minRow(int N, int M, vector<vector<int>> A)
    {
        // code here
        int mini = INT_MAX;
        int row;
        for (int i = 0; i < N; i++)
        {
            int count = 0;
            for (int j = 0; j < M; j++)
            {
                if (A[i][j] == 1)
                {
                    count += 1;
                }
            }
            if (count < mini)
            {
                swap(count, mini);
                row = i;
            }
        }
        return row + 1;
    }
};