class Solution {
  List<int> intersection(List<int> nums1, List<int> nums2) {
    Set<int> unique_elements = {};

    for(var element in nums1){
        if(nums2.contains(element)){
            unique_elements.add(element);
        }
    }

    return unique_elements.toList();
  }
}