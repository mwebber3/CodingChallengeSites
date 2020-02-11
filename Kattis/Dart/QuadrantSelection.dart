import 'dart:io';

main() {
  int x = int.parse(stdin.readLineSync());
  int y = int.parse(stdin.readLineSync());

  if (x > 0 && y > 0) {
        print("1");
    } else if (x > 0 && y < 0) {
        print("4");
    } else if (x < 0 && y > 0) {
        print("2");
    } else {
        print("3");
    }
}