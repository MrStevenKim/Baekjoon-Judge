#include <iostream>

int main()
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	long T, A,B;
	std::cin >> T;

	for(int i =0; i<T; ++i)
	{
	std::cin >> A >> B;
	std::cout << A + B << '\n';
		
	}
	
	return 0;
}