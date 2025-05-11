import 'dart:io';

void main() {
  var nums = stdin.readLineSync()!;
  nums = nums.replaceAll('[', '');
  nums = nums.replaceAll(']', '');
  nums = nums.replaceAll(',', '');
  List<int> numbers = nums.split('').map(int.parse).toList();
  bool result = containsDuplicate(numbers);
  print(result);
}

bool containsDuplicate(List<int> nums) {
  Set<int> seen = {};

  for (var num in nums) {
    if (seen.contains(num)) {
      return true;
    } else {
      seen.add(num);
    }
  }
  return false;
}
