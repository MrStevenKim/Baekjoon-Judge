#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int N; // ATM�տ� ��ٸ��� ������� ���
	vector<int> Person_WaitTime; // ������ �����ϴµ� �ɸ��� �ð�
	int Result_WaitTime = 0; // �� ��ٸ��� �ð�
	int _input;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> _input;
		Person_WaitTime.push_back(_input);
	}
	sort(Person_WaitTime.begin(), Person_WaitTime.end());
	
	for (int i = 0; i < N; i++)
	{
		Result_WaitTime += Person_WaitTime.at(i);
		for (int j = 0; j < i; j++)
		{
			if (j == i)
			{
				continue;
			}
			Result_WaitTime += Person_WaitTime.at(j);
		}
	}

	cout << Result_WaitTime;

	return 0;
}