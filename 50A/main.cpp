/**
 * 50A
 * m : odd, (m-1) / 2 * n + n / 2 = mn/2 
 * m : even， m/2 * n
 */
#include <iostream>

int main(int argc, const char* argv[]) 
{
	int m, n , nums;
	std::cin >> m;  
	std::cin >> n;  
	nums =  m * n / 2;  
	std::cout << nums << std::endl;
}
