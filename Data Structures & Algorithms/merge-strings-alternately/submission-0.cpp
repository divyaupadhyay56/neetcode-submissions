class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string str = "";
        int n = word1.length();
        int m = word2.length();
        int i=0,j=0;
        while(m>i && n>j){
            str = str + word1[i];
            str = str + word2[j];
            i++;
            j++;
        }
        str += word1.substr(i);
        str += word2.substr(j);
        return str;
    }
};