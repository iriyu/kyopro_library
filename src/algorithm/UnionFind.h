struct UnionFind {
    vector<int> id;
    vector<vector<int> > groups;
    int gn; //number of groups
    UnionFind(int n){
        id = vector<int>(n);
        groups = vector<vector<int> >(n);
        gn = n;
        for(int i=0;i<n:++i){
            id[i]=i;
            groups[i]={i};
        }
    }
    void unite(int a, int b) {
        if(same(a,b)) return;
        gn--;
        int x = id[a];
        int y = id[b];
        if(groups[x].size()<groups[y].size()) swap(x,y);
        for(int j ; groups[y]){
            id[j] = x;
            groups[x].push_back(j);
        }
        groups[y].clear();        
    }
    bool same(int a, int b) { return id(a) == id(b); }
};