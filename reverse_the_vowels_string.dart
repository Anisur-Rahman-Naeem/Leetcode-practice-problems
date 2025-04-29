import 'dart:io';

void main() {
  String s = stdin.readLineSync()!;
  List<String> inputChars = s.split("");
  List<String> vowels = ["A", "E", "I", "O", "U", "a", "e", "i", "o", "u"];
  List<int> indexes = [];
  List<String> characters = [];
  for (var i = 0; i < s.length; i++) {
    if (vowels.contains(s[i])) {
      indexes.add(i);
      characters.add(s[i]);
    }
  }

  var reversed_characters = characters.reversed.toList();
  for (var i = 0; i < indexes.length; i++) {
    inputChars[indexes[i]] = reversed_characters[i];
  }
  String result = inputChars.join("");
  print(result);
}
