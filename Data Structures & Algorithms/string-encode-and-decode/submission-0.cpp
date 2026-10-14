class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string = "" ;
        string delimeter = "#";
        for(auto it:strs)
        {
            encoded_string+=to_string(it.size()) + delimeter + it;
        }
        return encoded_string;

    }

    vector<string> decode(string s) {
       vector<string> decoded_string ;
       int i=0;
       while(i<s.size()){
        int j=i;
        while(s[j]!='#'){
            j++;
        }
        int len = stoi(s.substr(i,j-i));
        string word = s.substr(j+1,len);
        decoded_string.push_back(word);
        i=j+1+len;

       }
       return decoded_string;


    }
};
