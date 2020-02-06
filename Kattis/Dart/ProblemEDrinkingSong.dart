import 'dart:io';

main() {
  int n = int.parse(stdin.readLineSync());
  String name = stdin.readLineSync();

  for (int i = n; i > 0; i--) {
    print(
        "$i bottles of $name on the wall, $i bottles of $name.\nTake one down, pass it around, ${(i - 1 == 0) ? "no more" : "${i - 1}"} bottles of $name on the wall.");
  }
}
