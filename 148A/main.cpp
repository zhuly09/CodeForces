/**
 * 1 ≤  n, m, a ≤ 10^9
 */

#include <iostream>

int main(int argc, const char * argv[])
{
	unsigned long long n, m, a = 0;
	std::cin >> n; 
	std::cin >> m;
	std::cin >> a;

	unsigned long long nums;
	nums = ((n + a - 1) / a) * ((m + a - 1)/a);  

	std::cout << nums << std::endl;
	return 0;
}
