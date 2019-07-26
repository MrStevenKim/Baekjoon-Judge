#include <iostream>
#include <stack>
#include <vector>


using namespace std;

int main()
{

	stack<char> data_stack; // ��ȣ ������ �Է�
	int T; // �Է� case ��
	char in_data[50];
	bool isVPS = true; // VPS üũ
	int point = 0;
	int open_cnt = 0; // ( �� ��
	int close_cnt = 0; // ) �� ��;
	 
	cin >> T;
	

	for (int i = 0; i < T; i++)
	{
		cin >> in_data;
		isVPS = true;
		point = 0;
		open_cnt = 0;
		close_cnt = 0;

		while (false == data_stack.empty())
		{
			data_stack.pop();
		}

		while (true)
		{

			if (in_data[point] == '(')
			{
				data_stack.push(in_data[point]);
				open_cnt++;
			}

			else if (in_data[point] == ')')
			{
				close_cnt++;
				if (data_stack.size() == 0)
				{
					isVPS = false;
					break;
				}
				if (data_stack.size() != 0)
				{
					if (data_stack.top() == '(')
					{
						data_stack.pop();
					}

					else
					{
						isVPS = false;
					}
				}

				
			}
		
			else
				break;
			
			point++;
		}
		if (open_cnt != close_cnt)
		{
			cout << "NO" << endl;
		}

		else if (isVPS == true)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}

	return 0;
}