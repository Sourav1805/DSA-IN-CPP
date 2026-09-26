class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        // vector<int>row(n,-1);
        // vector<int>col(m,-1);
        int k=1;
    
        //int col[m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    if(j!=0){
                        // matrix[i][0]=0;
                        matrix[0][j]=0;
                    }else{
                        k=0;

                    }
                        
                    
                }
            }
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(matrix[0][j]==0 ||matrix[i][0]==0)matrix[i][j]=0;
            }
        }
        // first row
        if(matrix[0][0] == 0) {
            for(int j = 0; j < m; j++) {
                matrix[0][j] = 0;
            }
        }

        // First column
        if(k == 0) {
            for(int i = 0; i < n; i++) {
                matrix[i][0] = 0;
            }
        }
        
        
    }
};