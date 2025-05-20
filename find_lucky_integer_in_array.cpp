class Solution {
public:
    int findLucky(vector<int>& arr) {
        int result = 0;
        map<int, int> freq;
        for(int i = 0; i<arr.size(); i++){
            freq[arr[i]]++;
        }

        for(auto pair: freq){
            if(pair.first == pair.second){
                if(pair.first > result){
                    result = pair.first;
                }
            }
        }
        if(result !=0){
            return result;
        }
        return -1;
    }
};