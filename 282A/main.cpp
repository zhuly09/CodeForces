/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat Sep 24 21:58:03 2016
 ************************************************************************/

#include <iostream>
#include <limits>
using namespace std;

int main(int argc, char *argv[])
{
    int x = 0;
    char s[4];
    /* ascii + : 43, - : 45 */ 
    for (gets(s); gets(s); x = x + 44 - s[1]);
    std::cout << x << std::endl;
    return 0;
}

