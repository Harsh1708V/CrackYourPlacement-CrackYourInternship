class Solution {
public:
    bool rotateString(string s, string g) {
        int S = s.size();
        int G = g.size();

        if(S!=G)return false;

        for(int i = 0; i<S;i++){
            s+=s[0];
            s.erase(s.begin()+ 0);

            if(s == g) return true;
        }
        return false;
    }
};