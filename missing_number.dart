import 'dart:io';

void main() {
  var userInput = stdin.readLineSync()!;
  userInput = userInput.replaceAll('[', '').replaceAll(']', '');
  List<int> nums = userInput.split(',').map(int.parse).toList();

  List<int> ranged_numbers_list = [];

  for (var i = 0; i <= nums.length; i++) {
    ranged_numbers_list.add(i);
  }
  for (var element in ranged_numbers_list) {
    if (!nums.contains(element)) {
      print(element);
    }
  }
}
