class Solution {
  bool detectCapitalUse(String word) {
    if((word == word.toUpperCase()) || (word == word.toLowerCase()) || (word == (word[0].toUpperCase() + word.substring(1).toLowerCase()))){
        return true;
    }else{
        return false;
    }
  }
}