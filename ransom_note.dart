import 'dart:io';

void main() {
  bool unknown_character_not_found = true;
  String ransomNote = stdin.readLineSync()!;
  String magazine = stdin.readLineSync()!;
  Map<String, int> freq = {};
  for (var char in magazine.split('')) {
    freq[char] = (freq[char] ?? 0) + 1;
  }
  for (var char in ransomNote.split('')) {
    if ((freq[char] ?? 0) == 0) {
      unknown_character_not_found = false;
      break;
    } else if ((freq[char] ?? 0) != 0) {
      freq[char] = freq[char]! - 1;
    }
  }
  if (unknown_character_not_found == false) {
    print('false');
  } else {
    print('true');
  }
}
