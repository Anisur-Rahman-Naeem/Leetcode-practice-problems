import 'dart:io';

void main() {
  var title = stdin.readLineSync()!;
  var result;
  if (title.length <= 2) {
    result = title.toLowerCase();
  } else {
    title.toLowerCase();
    List<String> spliting_title = title.split(" ");
    for (var i = 0; i < spliting_title.length; i++) {
      if ((spliting_title[i].length == 2) || (spliting_title[i].length == 1)) {
        spliting_title[i] = spliting_title[i].toLowerCase();
      }
      else{
        spliting_title[i] =
          spliting_title[i][0].toUpperCase() +
          spliting_title[i].substring(1).toLowerCase();
          }
    }
    result = spliting_title.join(" ");
  }
  print(result);
}
