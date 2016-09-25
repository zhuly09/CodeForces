/**
 * 118A
 */
#include <iostream>
#include <cstring>

int main(int argc , const char * argv[] ) {
	int n;
	int a, b , c;
	std::cin >> n;
	int j = 0;
	for (int i = 0; i < n; ++i) {
		std::cin>>a>>b>>c;
		if(a+b+c>=2)
			j++;
	}
	std::cout << j << std::endl;
	return 0;
}

