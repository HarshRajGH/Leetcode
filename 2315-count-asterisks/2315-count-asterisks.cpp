class Solution {
public:
    int countAsterisks(string s) {
        int count =0;
        int pipe = 0;
        for (int i=0; i<s.size();i++){
            if(s[i]=='|'){
                pipe ++;
            }
            if (s[i]=='*' && (pipe %2 ==0)){
                count ++;
            }
        }
        return count;
    }
};