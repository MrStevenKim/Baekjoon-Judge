#include <bits/stdc++.h>
int dp[20][20]; // ���� ���� 14,14 ������ ���� �θ�... �ʱ�ȭ �����Ƽ� �������� �� �⺻�� 0 ���� �ڵ��ʱ�ȭ...
int main()
{
	int T, k, n;
	std::cin >> T;

	for(int i = 0; i<20; ++i)
	{
		dp[0][i] = i;
	}
	for(int i = 1; i < 20; ++i)
	{
		for(int j =1; j<20; ++j)
		{
			for(int z =1; z <= j; ++z)
			{
				dp[i][j] += dp[i-1][z];
			}
		}
	}

	for(int i = 0; i < T; i++)
	{
		std::cin >> k >> n;

		std::cout << dp[k][n] << '\n';
	}
	/*for (int i = 0; i < T; ++i)
	{
		std::cin >> k >> n;
		for(int j = 1; j <= k; ++j)
		{
			for(int l = 1; l <=n; ++l)
			{
				  for(int z =1; z <= l; ++z)
				  {
					  dp[j][l] += dp[j][z];
				  }
			}
		}
		std::cout << dp[k][n] << '\n';
	}*/
	return 0;
}