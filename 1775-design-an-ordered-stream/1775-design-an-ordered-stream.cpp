class OrderedStream {
public:
    vector<string> s;
    int ptr;
    OrderedStream(int n) : s(n), ptr(0) {}
    vector<string> insert(int idKey, string value) {
        vector<string> ans;
        s[idKey-1]=value;

        while(ptr < s.size() && s[ptr] != ""){
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