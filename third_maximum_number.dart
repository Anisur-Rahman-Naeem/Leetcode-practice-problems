
class Solution {
  int thirdMax(List<int> nums) {
    nums.sort((a, b) => b.compareTo(a));

    var thirdDistinct = 0;

    List<int> topThree = [];

    for (var element in nums) {
      if (!topThree.contains(element)) {
        topThree.add(element);
      }
    }

    if (topThree.length == 2) {
      thirdDistinct = topThree[0];
    } else if (topThree.length == 1) {
      thirdDistinct = topThree[0];
    } else if (topThree.length > 2) {
      thirdDistinct = topThree[2];
    }

    return thirdDistinct;
  }
}
