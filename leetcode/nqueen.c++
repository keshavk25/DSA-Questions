class Solution {
// public:
// bool insert(int col,int row, int n, vector<string> chess){
    
// int colm =col;
// int roww =row;

// while(col>=0 && row>=0){
//     if(chess[col][row] == 'Q') return false;
//     col--;
//     row--;
// }
// row = roww;
// col= colm;
// while(col>=0 ){
//     if(chess[col][row] == 'Q') return false;
//     col--;
// }
// row = roww;
// col= colm;
// while(col>=0 && row<n){
//     if(chess[col][row] == 'Q') return false;
//     col--;
//     row++;
// }
// return true;
// }

// public:
// void queen(int col, int n ,vector<vector<string>> &ans, vector<string> &chess){
//     if(col==n){
//         ans.push_back(chess);
//         return;
//     }
    
//     for(int row=0;row<n;row++){

//     if(insert(col,row,n,chess)){
//         chess[col][row]='Q';
//          queen(0,n, ans,chess);
//          chess[col][row]='.';
//     }
//         }
   
// }

// public:
//     vector<vector<string>> solveNQueens(int n) {
        
//         vector<vector<string>> ans;
//         vector<string> chess(n);
//         string s(n,'.');
//     for(int i=0; i<n;i++){
//       chess[i]=s;
//     }
//         queen(0,n, ans,chess);

//         return ans;


// optimal approach

void queen(int col, int n ,vector<vector<string>> &ans, vector<string> &chess,vector<int> &left,vector<int> &upper,vector<int> &lower){
     if(col==n ){
        
        ans.push_back(chess);
        return;
    }
    
    for(int row=0;row<n;row++){

        if(left[row]== 0 &&  lower[row+col] == 0 && upper[n-1 + (row-col)] ==0) {
        
            chess[row][col] = 'Q';
            left[row] = 1;
            upper[n-1 +(row-col)] =1;
            lower[row+col] = 1;

            queen(col+1,n, ans,chess , left,upper, lower);

            chess[row][col] = '.';
            left[row] = 0;
            upper[n-1 +(row-col)] =0;
            lower[row+col] = 0;

        }

    }
}

public:
    vector<vector<string>> solveNQueens(int n) {
        
        vector<vector<string>> ans;
        vector<string> chess(n,string (n,'.'));

vector<int> left(n,0), upper(2*n-1,0), lower(2*n-1,0);
        queen(0,n, ans,chess , left,upper, lower);

        return ans;

    }
};