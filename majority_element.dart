import 'dart:io';

void main() {
  var input = stdin.readLineSync()!;
  input = input.replaceAll('[', '');
  input = input.replaceAll(']', '');
  List<int> numbers = input.split(',').map(int.parse).toList();
  int result = majorityElement(numbers);
}

int majorityElement(List<int> nums) {
  Map<int, int> freq = {};
  int result = 0;
  for (var element in nums) {
    freq[element] = (freq[element] ?? 0) + 1;
  }
  for (var element in freq.entries) {
    if (element.value > (nums.length) / 2) {
      result = element.key;
      print(result);
    }
  }
  return result;
}
