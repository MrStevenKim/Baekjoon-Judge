#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int dp[3000][3000];

int main()
{
	string A;
	string B;
	int A_idx;
	int B_idx;
	// ���� ������ ��� ? : Longest Common Substring �� ���Ѵ��� A�� substring ���� �ε����� B�� substring ���� �ε����� ���Ͽ� �� �� ��ŭ * 2�� ���Ѵ�.
	
	cin >> A;
	cin >> B;

	for (int i = 1; i < A.length(); i++)
	{
		for (int j = 1; j < B.length(); j++)
		{
			if (A[i] == B[j])
			{

			}
		}
	}
	
	return 0;
}