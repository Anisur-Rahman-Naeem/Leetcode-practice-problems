import 'dart:io';

void main() {
  var userInput = stdin.readLineSync()!;
  Map<int, int> freq = {};
  userInput = userInput.replaceAll('[', '').replaceAll(']', '');
  List<int> numbers = userInput.split(',').map(int.parse).toList();

  for (var i = 0; i < numbers.length; i++) {
    if (freq[numbers[i]] == null) {
      freq[numbers[i]] = (freq[numbers[i]] ?? 0) + 1;
    } else if (freq[numbers[i]] != null) {
      freq[numbers[i]] = freq[numbers[i]]! + 1;
    }
  }
  for (var element in freq.entries) {
    if (element.value == 1) {
      print(element.key);
    }
  }
}
