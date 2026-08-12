class Solution {
   public:
    string encode(vector<string>& strs) {
        string encoded;
        for(string& str : strs){
            encoded += to_string(str.size());
            encoded += '#';
            encoded += str;
        }

        return encoded ;
    }

    vector<string> decode(string s) {
        int i = 0;
        vector<string> result;
        while(i<s.size()){
            // extract the length 
            int j = i;
            while(s[j] != '#'){
                j++;
            }

            int len = stoi(s.substr(i , j-i));

            j++; // to pass reading the #

            //extract the string
            string word = s.substr(j,len);
            result.push_back(word);

            i = j + len;
            
        }
        return result;
    }
};
