/**
 * A. Way Too Long Words
 */

#include <iostream>
#include <string>
#include <limits>

int main(int argc, char *argv[])
{
	int n;
	std::cin >> n;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	for (int i = 0; i < n; i++) {
		std::string str;
		
		getline(std::cin, str);
		int len = str.length();
		if ( len > 10)
			std::cout << str[0] << (len - 2) << str[len - 1] << std::endl;
		else
			std::cout << str << std::endl;
	}
	return 0;
}


