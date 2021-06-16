// problem link -> https://leetcode.com/problems/search-a-2d-matrix/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0,j,n=matrix.size(),m=matrix[0].size();
        j = m-1;
        while(i<n&&j>=0){
            if(matrix[i][j]==target)
                return true;
            if(matrix[i][j]>target)
                j--;
            else i++;
        }
        return false;
    }
};

// time -> O(n^2)
// space -> O(1)