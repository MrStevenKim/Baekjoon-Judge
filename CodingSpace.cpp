#include <array>
#include <string>
#include <iostream>
#include <vector>

using namespace std;
int x, y;
array<char, 1000> matrix[1000];
bool search(int _x, int _y, string _input)
{
	if (_x >= x || _y >= y) // �Էµ� ��ǥ�� ������ ����� ������ false (�̴� ���ȣ���� ������)
	{
		return false;
	}

	if (matrix[_x][_y] != _input[0]) // ù ���ڰ� �ƴϸ� ������ �ƴϴ� false
	{
		return false;
	}

	if (_input.length() == 1) // ������ ù���ڰ� �ƴ��� Ȯ���߰� �Է� ������ ���̰� 1�̸� �ϳ��� ������ ������ true��
	{
		return true;
	}
	
	// ��� �Լ� ȣ��κ�

	
}

int main()
{
	string input;


	vector<char> answer;

	cin >> x;
	cin >> y;

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			cin >> matrix[i][j];
		}
	}

	cin >> input;

	






	return 0;
}