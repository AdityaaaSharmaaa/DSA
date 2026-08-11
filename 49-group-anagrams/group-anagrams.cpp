class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> umap; //map
        vector<vector<string>> res;  //return result

        for(auto x : strs){
            string tp = x;  // store og string
            sort(x.begin(), x.end());  // sort og string
            umap[x].push_back(tp);  // store (sort string -> og string)
        }

        for(auto x : umap){
            res.push_back(x.second); // push sort string value(string) in res
        }
        return res;

    }
};