#include <bits/stdc++.h>

int main()
{
	std::string input_data;
	std::string temp_int; // = nullptr;
	std::vector<int> int_data;
	std::vector<char> oper_data;
	std::cin >> input_data;
	int result = 0;
	
	for(int i =0; i<input_data.length(); ++i)
	{
		if(input_data[i] >= 48 && input_data[i] <=59)
		{
			temp_int += input_data[i];
		}

		else if(input_data[i] == 43 || input_data[i] == 45)
		{
			int_data.push_back(stoi(temp_int));
			oper_data.push_back(input_data[i]);
			temp_int = ' ';
		}
		
	}

	int_data.push_back(stoi(temp_int));

	for(int i = 0; i < oper_data.size(); ++i)
	{
		if(oper_data[i] == '+')
		{
			if (i + 1 < int_data.size())
			{
				int_data[i] += int_data[i + 1];
				int_data.erase(int_data.begin() + i + 1);
				oper_data.erase(oper_data.begin() + i);
			}
		}
	}

	for(int i =0; i< oper_data.size(); ++i)
	{
		if (oper_data[i] == '-')
		{
			if (i + 1 < int_data.size())
			{
				int_data[i] += -int_data[i + 1];
				int_data.erase(int_data.begin() + i + 1);
				oper_data.erase(oper_data.begin() + i);
			}
		
			
		}
	}

	if (int_data.size() == 2)
	{
		if (oper_data[0] == '+')
			int_data[0] += int_data[1];

		else
			int_data[0] += -int_data[1];
	}
	std::cout << int_data[0];
	
	return 0;
}

// 50 - 60 + 60 + 70 + 50 �� ������ 
/*
  50 - 60 ���� -�� �������� -�� �� ���� -�� ���� ���� �� ������ ���� ���� �� ũ�ٸ� ���ķ� ��ȣ�� ġ�� �ٽ� - ��ȣ�� ������ �տ� ������ ũ�ٸ� ��ȣ�� �ݰ� �� ���� - �ϰ� �۴ٸ� ��ȣ �ȿ��� -�ϰ� ��ȣ�� �̾��.
 */