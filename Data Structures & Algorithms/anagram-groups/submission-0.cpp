class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> mp;

        for (string word : strs) {

            int freq[128] = {0};

            for (char ch : word) {
                freq[ch]++;
            }

            string key = "";

            for (int i = 0; i < 128; i++) {
                key += to_string(freq[i]);
                key += "#";
            }

            mp[key].push_back(word);
        }

        vector<vector<string>> ans;

        for (auto &p : mp) {
            ans.push_back(p.second);
        }

        return ans;
    }
};