class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> mp;

        for (string word : strs) {

            int freq[26] = {0};

            // Count letters
            for (char ch : word) {
                freq[ch - 'a']++;
            }

            // Build the key
            string key = "";

            for (int i = 0; i < 26; i++) {
                key += to_string(freq[i]);
                key += "#";
            }

            // Put the word into its group
            mp[key].push_back(word);
        }

        // Convert map values into answer
        vector<vector<string>> ans;

        for (auto x : mp) {
            ans.push_back(x.second);
        }

        return ans;
    }
};