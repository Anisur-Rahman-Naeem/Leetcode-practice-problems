class Solution {
  bool lemonadeChange(List<int> bills) {
    int five = 0;
    int ten = 0;
    bool isChangeAvailable = false;
    for(var bill in bills){
        if(bill == 5){
            five++;
            isChangeAvailable = true;
        } else if(bill != 5){
            if(bill == 10){
                if(five > 0){
                    five--;
                    ten++;
                    isChangeAvailable = true;
                }
            }else if(bill == 20){
                if(ten > 0 && five > 0){
                    ten--;
                    five--;
                    isChangeAvailable = true;
                } else if(five >=3){
                    five = five -3;
                    isChangeAvailable = true;
                }else{
                    isChangeAvailable = false;
                    break;
                }
            }
        }
    }
    return isChangeAvailable;
  }
}