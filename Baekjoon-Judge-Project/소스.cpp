#include <bits/stdc++.h>

int main()
{
	int T;
	int bb, pp, ff; // bb : �� ���� , pp, ���� ���� , ff ġŲ���� 
	int hh, cc; // hh : �ܹ��� ����, cc : ġŲ���� ����
	int result = 0;
	std::cin >> T;

	for (int i = 0; i < T; ++i)
	{
		std::cin >> bb >> pp >> ff;
		std::cin >> hh >> cc;
		result = 0;
		if (cc >= hh) // ġŲ�� ����싚
		{
			while (true)
			{
				if (ff >= 1 && bb >= 2)
				{
					result += cc;
					ff -= 1;
					bb -= 2;
				}
				else
					break;

			}

			while (true)
			{
				if (pp >= 1 && bb >= 2)
				{
					result += hh;
					pp -= 1;
					bb -= 2;
				}
				else
					break;
			}
		}

		else if (cc < hh) //�ܹ��Ű� ����춧
		{
			while (true)
			{
				if (pp >= 1 && bb >= 2)
				{
					result += hh;
					pp -= 1;
					bb -= 2;
				}
				else
					break;
			}


			while (true)
			{
				if (ff >= 1 && bb >= 2)
				{
					result += cc;
					ff -= 1;
					bb -= 2;
				}
				else
					break;

			}
		}

		std::cout << result << '\n';

	}
	return 0;
}