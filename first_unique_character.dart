import 'dart:io';

void main() {
  String s = stdin.readLineSync()!;

  int unique_char_index = -1;
  for (int i = 0; i < s.length; i++) {
    if (s.indexOf(s[i]) == s.lastIndexOf(s[i])) {
      unique_char_index = i;
      break;
    }
  }
  if (unique_char_index != -1) {
    print('Unique character index ${unique_char_index}');
  } else {
    print('-1');
  }
}
