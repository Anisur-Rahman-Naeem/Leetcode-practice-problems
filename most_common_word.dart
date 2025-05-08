import 'dart:io';

void main() {
  var commonNumberTracker = 0;
  var mostCommonWord = '';
  var paragraph = stdin.readLineSync() ?? '';
  var banned = stdin.readLineSync() ?? '';
  var bannedList = banned
      .replaceAll('[', '')
      .replaceAll(']', '')
      .replaceAll(',', '')
      .replaceAll('"', '')
      .toLowerCase()
      .split(' ');

  Map<String, int> freq = {};

  var resultedList = paragraph
    .toLowerCase()
    .split(RegExp(r'[^\w]+'))
    .where((word) => word.isNotEmpty)
    .toList();



  for (var i = 0; i < resultedList.length; i++) {
    if (freq[resultedList[i]] == null) {
      freq[resultedList[i]] = (freq[resultedList[i]] ?? 0) + 1;
    } else if (freq[resultedList[i]] != null) {
      freq[resultedList[i]] = freq[resultedList[i]]! + 1;
    }
  }

  for (var entry in freq.entries) {
    if ((entry.value > commonNumberTracker) &&
        (bannedList.contains(entry.key) == false)) {
      commonNumberTracker = entry.value;
      mostCommonWord = entry.key;
    }
  }

  print(mostCommonWord);
}
