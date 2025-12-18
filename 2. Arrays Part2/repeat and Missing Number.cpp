class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n = arr.size();
        vector<int> res(n+1,0);
        for(int i=0;i<n;i++){
            res[arr[i]]++;
        }
        int duplicate = -1, missing = -1;
        for(int i=1;i<=n;i++){
            if(res[i]==2) duplicate = i;
            else if(res[i]==0) missing = i;
            if(duplicate != -1 && missing != -1){
                break;
            }
        }
        return {duplicate, missing};
    }
};