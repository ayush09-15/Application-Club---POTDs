class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int minr=0,minc=0;
        int maxr=m-1,maxc=n-1;
        int te=m*n;
        int c=0;
        vector<int>v;
        while(c<te)
        {
            for(int j=minc;j<=maxc;j++)
            {
                v.push_back(matrix[minr][j]);
                c++;
            }
            minr++;
            if(c>=te)
            {
                break;
            }
            for(int i=minr;i<=maxr;i++)
            {
                v.push_back(matrix[i][maxc]);
                c++;
            }
            maxc--;
            if(c>=te)
            {
                break;
            }
            for(int j=maxc;j>=minc;j--)
            {
                v.push_back(matrix[maxr][j]);
                c++;
            }
            maxr--;
            if(c>=te)
            {
                break;
            }
            for(int i=maxr;i>=minr;i--)
            {
                v.push_back(matrix[i][minc]);
                c++;
            }
            minc++;
            if(c>=te)
            {
                break;
            }
        }
       return v;
    }
};