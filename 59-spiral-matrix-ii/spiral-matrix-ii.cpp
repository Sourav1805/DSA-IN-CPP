class Solution {
public:
    vector<vector<int>> generateMatrix(int p) {
        vector<vector<int>>ans(p,vector<int>(p));



        int m=p;
        int n=p;
        // vector<int>vec;

        int minrow=0;
        int mincolumn=0;
        int maxrow=m-1;
        int maxcolumn=n-1;
        int k=1;

        while(minrow<=maxrow && mincolumn<=maxcolumn){

        


        for(int i=mincolumn;i<=maxcolumn;i++){
            // cout<<matrix[minrow][i]<<" ";
            // minrow++;
            // vec.push_back(matrix[minrow][i]);
            ans[minrow][i]=k;
            k++;
           

        }
        minrow++;
        if(minrow>maxrow || mincolumn>maxcolumn) break;

        for(int i=minrow;i<=maxrow;i++){
            // cout<<matrix[i][maxcolumn]<<" ";
            ans[i][maxcolumn]=k;
            k++;
           

            

        }
        maxcolumn--;
        if(minrow>maxrow || mincolumn>maxcolumn) break;

        for(int i=maxcolumn;i>=mincolumn;i--){
            // cout<<matrix[maxrow][i]<<" ";
            // vec.push_back(matrix[maxrow][i]);
            ans[maxrow][i]=k;
            k++;
           
        }
        maxrow--;
        if(minrow>maxrow || mincolumn>maxcolumn) break;
        for(int i=maxrow;i>=minrow;i--){
            // cout<<matrix[maxrow][i]<<" ";
            // vec.push_back(matrix[i][mincolumn]);
            ans[i][mincolumn]=k;
            k++;
           
        }
        mincolumn++;

         if(minrow>maxrow || mincolumn>maxcolumn) break;
        }
        return ans;


        

        









    }
};