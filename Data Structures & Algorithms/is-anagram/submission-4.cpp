class Solution {
public:
    bool isAnagram(string s, string t) {

        //if(s.length()!= t.length())
            //return false;

        int freq[128] ={0};
         

        for (char ch :s)
            freq[ch]++;

        for (char ch :t)
            freq[ch]--;

        for (int i = 0 ; i < 128 ;i++){
            if (freq[i]!= 0)
                return false;

        }        

        return true;

        
    }
};
