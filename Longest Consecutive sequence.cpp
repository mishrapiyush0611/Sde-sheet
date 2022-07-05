int longestConsecutive(vector<int>& nums) {
      
        vector<int>v;
        int res=0,ans=1;
        set<int> st;
        for(auto x:nums){
            st.insert(x);
        }
        for(auto x:st){
            v.push_back(x);
        }
          if(st.size()==0)
            return 0;
                if(st.size()==1)
            return 1;
    for(int i=0;i<v.size()-1;i++){
     
            if(abs(v[i+1]-v[i])==1){
                cout<<ans;
                ans++;
            }
            else{
                ans=1;
            }
            res=max(res,ans);
        }
        return res;
    }