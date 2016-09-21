/**
 * 4A: Watermelon
 */
#include <iostream>

int main(int argc, const char* argv[]) 
{
	unsigned int w;
	std::cin >>  w;  
	std::cout << (( w < 3 || w % 2) ? "NO" : "YES") << std::endl;  
}
