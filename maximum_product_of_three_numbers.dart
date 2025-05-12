import 'dart:io';
import 'dart:math';

void main() {
  var input = stdin.readLineSync()!;

  input = input.replaceAll('[', '');
  input = input.replaceAll(']', '');
  List<int> nums = input.split(',').map(int.parse).toList();
  int result = maximumProduct(nums);
  print(result);
}

int maximumProduct(List<int> nums) {
  var result = 0;

  nums.sort();

  int max_1 = nums[nums.length - 1] * nums[nums.length - 2] * nums[nums.length - 3];
  int max_2 = nums[0] * nums[1] * nums[nums.length - 1];

  result = max(max_1, max_2);
  
  return result;
}
