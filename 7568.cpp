#include <iostream>
using namespace std;
#define FOR(i,n) for(int i=0; i<(n); i++)
int main()
{
	int Person[50][3]; // Person[index][0] = ������, [1] = Ű, [2] = ��ġ���
	int N; // ��ü����� �� �ִ� N<=50

	cin >> N;

	FOR(i, N)
	{
		FOR(j, 2)
		{
			cin >> Person[i][j];
			Person[i][2] = 1;
		}
	}

	FOR(i, N)
	{
		FOR(j, N)
		{
			if (i == j) // �ڱ��ڽŰ� ���Ҷ� ����
			{
				continue;
			}
			if ((Person[i][0] < Person[j][0]) && (Person[i][1] < Person[j][1]))
			{
				Person[i][2]++;
			}

		}
	}

	FOR(i, N)
	{
		cout << Person[i][2] << " ";
	}

	return 0;
}