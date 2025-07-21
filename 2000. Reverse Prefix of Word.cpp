class Solution {
public:
    string reversePrefix(string word, char ch) {
        int counting_length = 0;
        bool found = false;
        stack<char> stack_word;
        for(char ch_w: word){
            if(ch_w == ch){
                found = true;
                stack_word.push(ch_w);
                break;
            }
            else{
                stack_word.push(ch_w);
            }
        }
        string result;
        while(!stack_word.empty()){
            result +=stack_word.top();
            counting_length++;
            stack_word.pop();
        }
        for(int i = counting_length; i<word.length(); i++){
            result += word[i];
        }
        if(found == true){
            return result;
        }else{
            return word;
        }
    }
};
