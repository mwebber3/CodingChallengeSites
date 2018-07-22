#include <iostream>
#include <string>

int main() {
	std::string jonsAaah, docsAaah;
	std::cin >> jonsAaah >> docsAaah;

	if (jonsAaah.length() == docsAaah.length())
		std::cout << "go" << std::endl;
	else
		std::cout << "no" << std::endl;

	system("PAUSE");
	return 0;
}
