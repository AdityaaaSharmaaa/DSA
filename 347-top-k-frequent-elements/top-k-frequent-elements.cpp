class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        priority_queue<pair<int, int>> count;
        vector<int> res;

        //first count freq
        for(auto x: nums){
            freq[x]++;
        }

        //sort i highest freq count
        for(auto x: freq){
            count.push({x.second, x.first});
        }

        //print k top elements
        while(k--){
            res.push_back(count.top().second);
            count.pop();
        }
        return res;
    }
};