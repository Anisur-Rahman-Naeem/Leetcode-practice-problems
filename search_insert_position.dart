import 'dart:io';

void main() {
  var userInput = stdin.readLineSync()!;
  var targetInput = stdin.readLineSync()!;

  userInput = userInput.replaceAll('[', '').replaceAll(']', '');

  int target = int.parse(targetInput);
  List<int> nums = userInput.split(',').map(int.parse).toList();

  int result = searchInsert(nums, target);
  print(result);
}

int searchInsert(List<int> nums, int target) {
  int left = 0;
  int right = nums.length - 1;
  while (left <= right) {
    int mid = (left + right) ~/ 2;
    if (nums[mid] == target) {
      return mid;
    }
    if (nums[mid] > target) {
      right = mid - 1;
    } else if (nums[mid] < target) {
      left = mid + 1;
    }
  }
  return left;
}
