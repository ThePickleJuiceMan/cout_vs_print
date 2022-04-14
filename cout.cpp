#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(int argc, char ** argv)
{
	string s = "This is a string constant\n";

	for(int i =0; i < atoi(argv[1]); i++)
	{
		cout << s;
	}
}
