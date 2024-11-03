class Solution {
public:
    bool isCircularSentence(string sentence) {
        if(sentence.back()!=sentence[0])  
        return false;

        int n=sentence.size();
        for(int i = 1; i<n-1; i++){
            if(sentence[i] ==' '){
                if(sentence[i-1]!=sentence[i+1]){
                    return false;
                }
            }
        }
        return true;
    }
};