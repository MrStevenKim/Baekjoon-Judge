#include <iostream>
#include <queue>
using namespace std;

int main()
{
	queue<int> input_data;
	int N;
	cin >> N;
	
	for (int i = 1; i <= N; i++)
		input_data.push(i);

	while (true)
	{
		if (input_data.size() == 1)
		{
			cout << input_data.front() << endl;
			break;
		}	

		input_data.pop(); // ���� ���� �ִ� ī�带 ���� ����.

		input_data.push(input_data.front()); // ���� ���� �ִ� ī�带 �ǹ����� ����
		input_data.pop();
	}
	return 0;
}