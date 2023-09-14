class OrderedStream {
public:
    vector<string> s;
    int ptr=0,n1;
    OrderedStream(int n) {
        for(int i=0;i<n;i++){
              s.push_back("");
        }
        n1=n;
    }
    
    vector<string> insert(int idKey, string value) {
        vector<string> ans;
        s[idKey-1]=value;

        while(ptr < n1 && s[ptr] != ""){
    ans.push_back(s[ptr]);
    ptr++;
}

        return ans;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */