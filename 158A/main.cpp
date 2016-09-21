#include <iostream>
int main(int argc, char *argv[])
{
	int n, k, res = 0;
	std::cin >> n >> k;
	int * arr = (int *) malloc(sizeof(int)*n); 
	for (int i = 0; i < n; ++i) {
		std::cin >> arr[i];
	}
	for (int i = 0; i < n; ++i) {
		if((arr[i] > 0) && (arr[i] >= arr[k-1]))
			res++;
	}
	std::cout << res << std::endl;
	
	return 0;
}
