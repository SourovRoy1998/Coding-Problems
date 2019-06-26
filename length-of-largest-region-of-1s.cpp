//https://practice.geeksforgeeks.org/problems/length-of-largest-region-of-1s/1


/*  Function to find the area of 1s
*   SIZE: declared globally for matrix definition
*   n, m: row and column of matrix
*   g[][]: 2D matrix from input
*   vis[][]: visited array
*/
int count(int n,int m,int g[][SIZE], bool vis[SIZE][SIZE],int a,int b){
    // Your code here
    if(g[a][b]==0)
        return 0;
    int maxi_path=0;
    vector<pair<int,int>> path = {{1,1},{1,-1},{-1,1},{-1,-1},{0,1},{0,-1},{-1,0},{1,0}};
    queue<vector<int>> pq;
    pq.push({a,b});
    vis[a][b]=true;
    while(!pq.empty()){
        vector<int> temp=pq.front();
        pq.pop();
        maxi_path++;
        for(auto x:path){
            int i=temp[0]+x.first;
            int j=temp[1]+x.second;
            if(i<0 || j<0 || i>=n || j>=m || vis[i][j] || g[i][j]==0) continue;
            vis[i][j]=true;
            pq.push({i,j});
        }
    }
    
    return maxi_path;
}

int findAreaUtil(int n, int m, int g[SIZE][SIZE], bool vis[SIZE][SIZE]){
    
    // Your code here
    int maxi=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
            if(g[i][j]==1 && vis[i][j]==false)
                maxi=max(maxi,count(n,m,g,vis,i,j));
        }
    return maxi;
}
