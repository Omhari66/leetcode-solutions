class Solution {
// private:
//     int dfs(int i,int j,vector<vector<int>>& grid){

//         int r=grid.size();
//         int c=grid[0].size();
//         if(i<0||j<0||i>=r||j>=c||grid[i][i]!=0){
//             return 0;
//         }
//         int min+=dfs(i-1,j,grid)+grid(i+1,j,grid)+grid(i,j-1,grid)+grid(i,j+1,grid);
//         return min;
//     }
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        int r=grid.size();
        int c=grid[0].size();
        queue<pair<int,int>>q;
        int freshCount=0;
        bool rottedThisMinute = false;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]==1){
                    freshCount++;
                }else if(grid[i][j]==2){
                    q.push({i,j});
                }
            }
        }
        if(freshCount==0){
            return 0;
        }
        int minMin=-1;
        int dr[]={-1,1,0,0};
        int dc[]={0,0,-1,1};
        while(!q.empty()){
            int size=q.size();
            for(int i=0;i<size;i++){
                int u=q.front().first;
                int v=q.front().second;
                q.pop();
                for(int j=0;j<4;j++){
                    int nr=dr[j]+u;
                    int nc=dc[j]+v;
                    if(nr>=0&&nc>=0&&nr<r&&nc<c){
                    if(grid[nr][nc]==1){
                        grid[nr][nc]=2;
                        q.push({nr,nc});
                        freshCount--;
                    }

                    }
                }
            }
                minMin++;
        }
        return (freshCount!=0)?-1:minMin;
    }
};