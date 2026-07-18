class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> arr2D(m , vector<int>(n));
        if(m*n != original.size()){
            return {};
        }
        int i=0,j=0;
        for(int k=0; k<original.size();k++){
            arr2D[i][j]=original[k];
            if(j==n-1){
                j=0;
                i++;
            }
            else {
                j++;
            }
        }
        return arr2D;
    }
};