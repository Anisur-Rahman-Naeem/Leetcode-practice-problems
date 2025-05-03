import 'dart:io';

void main() {
  String s = stdin.readLineSync()!;
  String t = stdin.readLineSync()!;

  Map<String, int> freq = {};

  for (var char in s.split('')) {
    freq[char] = (freq[char] ?? 0) + 1;
  }
  for (var char in t.split('')) {
    if ((freq[char] ?? 0) == 0) {
      print(char);
      break;
    } else if ((freq[char] ?? 0) != 0) {
      freq[char] = freq[char]! - 1;
    }
  }
}
