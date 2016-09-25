/**
 * 118A
 */
#include <iostream>
#include <cstring>

int main(int argc , const char * argv[] ) {
	char c;
	while(std::cin>>c) {
		if(!strchr("AEIOUYaeiouy", c))	
			std::cout << '.' << (char)tolower(c);
	}
	return 0;
}

