class Solution {
  List<int> intersection(List<int> nums1, List<int> nums2) {
    Set<int> unique_elements = {};

    Set<int>set2 = nums2.toSet();

    for(var element in nums1){
        if(set2.contains(element)){
            unique_elements.add(element);
        }
    }

    return unique_elements.toList();
  }
}