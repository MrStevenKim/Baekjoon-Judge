#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{

	vector<int> dwarf; // �Է¹��� ������Ű��
	vector<int> selected_dwarf; // ���õ� 7���� �����̵�
	int sum = 0; // ������Ű�� * �� 7���� 100�� �����ؾ� ���̵�.
	int cnt = 0; // ���� �����̵� ��� ���ϱ� ����.
	for (int i = 0; i < 9; i++)
	{
		int input;
		cin >> input;
		dwarf.push_back(input);
	}

	sort(dwarf.begin(), dwarf.end());

	
	for (int i = 0; i < 9; i++)
	{
		sum = 0;
		cnt = 0;
		selected_dwarf.clear();
		sum += dwarf.at(i);
		for (int j = 0; j < 9; j++)
		{
			if (i == j)
				continue;

			sum += dwarf.at(j);
			selected_dwarf.push_back(dwarf.at(j));
			cnt++;

			if ((sum == 100) && (cnt == 7))
				break;
		
		}
		if ((sum == 100) && (cnt == 7))
			break;
		
	}

	sort(selected_dwarf.begin(), selected_dwarf.end());

	for (int i = 0; i < 7; i++)
		cout << selected_dwarf.at(i) << endl;

	cout << sum << endl;

	return 0;
}