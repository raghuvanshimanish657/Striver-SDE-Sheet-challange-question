#include<bits/stdc++.h>
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> r;  
        vector<int> c;

        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                r.push_back(i);
                c.push_back(j);  
                }  
            }
        }

        //all elements of a row containg zero is assigned to 0
        for(auto a:r){
                int i=a;
                for(int j=0;j<matrix[i].size();j++)
                        matrix[i][j]=0;
        }

        //all elements of a column containg zero is assigned to 0
        for(auto b:c){
            for(int i=0;i<matrix.size();i++){
                        int j=b;
                        matrix[i][j]=0;
            }
        }
    }
};