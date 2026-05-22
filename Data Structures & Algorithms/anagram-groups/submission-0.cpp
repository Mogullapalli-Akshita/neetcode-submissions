class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map <string, vector<string>> ma;
       for( auto& s: strs)
       {
        string org = s;
        sort(s.begin(), s.end());
        ma[s].push_back(org);
       }

       vector<vector<string>> res;
       for(auto& [sor, vec] : ma)
       {
        res.push_back(vec);
       }
       return res;
    }
};
