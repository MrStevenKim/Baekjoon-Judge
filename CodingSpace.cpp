#include <iostream>

using namespace std;


int main()
{
	
	int C; // TestCase
	int H, W; // H * W ũ���� ���ڸ� ���ϱ����� ����
	char BOARD[21][21]; // ������
	int WHITE = 0;
	int BLACK = 0;
	int MAX_SIZE;
	
	cin >> C;

	for (int TestCase = 0; TestCase < C; TestCase++)
	{
		// TestCase 
		cin >> H;
		cin >> W;
		for (int height = 0; height < H; height++)
		{
			// Height
			for (int weight = 0; weight < W; weight++)
			{
				// Weight
				cin >> BOARD[height][weight]; // #: ����ĭ .: ��ĭ
				if (BOARD[height][weight] == '#')
					BLACK++;

				else if (BOARD[height][weight] == '.')
					WHITE++;
			}
		}

		if (WHITE % 3 != 0) // ����1 :  L�� (3ĭ¥��) �� ��ĭ�� ��� ������ϸ� �������� ������ �ȵǹǷ� ��ĭ�� ���� 3�� ����� �ƴϸ� ������ �Ұ�
		{
			cout << "0" << endl;
		}
		else
		{
			MAX_SIZE = WHITE / 3; // L�ڸ� ����ؾ��� �ִ밳��
			int iter_h = 0, iter_w = 0;
			for (int i = 0; i < MAX_SIZE; i++)
			{
				if (BOARD[iter_h][iter_w] == '.')
				{

				}
			

			}
		}
	}

	return 0;
}

int brother()
{


	float a = 0;

	return a;
}

void sister()
{

}
