class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {

        int r=grid.size();
        int c=grid[0].size();
        k=k%(r*c);
        for (int l=0;l<k;++l)
        {
            vector<vector<int>> temp(r,vector<int>(c));
            for (int i=0;i<r;++i)
            {
                for (int j=0;j<c;++j)
                {
                    if (j!=c-1 )
                    {
                        temp[i][j+1]=grid[i][j];
    
                    }
                    else if (j==c-1 && i!=r-1)
                    {
                        temp[i+1][0]=grid[i][j];
                    }
                    else if (j==c-1 && i==r-1)
                    {
                        temp[0][0]=grid[i][j];
                    }
                }
            }
            grid=temp;
                    
        }
    return grid;
    }
};