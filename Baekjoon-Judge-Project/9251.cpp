#include <iostream>
#include <string>
using namespace std;

int dp[1001][1001]; // LCS (Longest Common Substring != Longest Common Subsequence) ���⼭�� ������ �����̴�.

int main()
{

	string input_string1;
	string input_string2;
	int max_lcs = 0;
	cin >> input_string1;
	cin >> input_string2;
	/* Longest Common Substring
	for (int i = 1; i < input_string1.size(); i++)
	{
		for (int j = 1; j < input_string2.size(); j++)
		{
			if (input_string1[i] == input_string2[j])
			{
				dp[i][j] = dp[i-1][j - 1] + 1;
				if (dp[i][j] >= max_lcs)
					max_lcs = dp[i][j];
			}
		}
	}
	cout << max_lcs << endl;*/ 

	// Longest Common Subsequence 
	/*
		dp[i][j] = max(dp[i][j-1] , dp[i-1][j])
		if(A[i] == B[j])
			dp[i][j]+=1;

		if(max_lcs <= dp[i][j])
		 max_lcs = dp[i][j]

		 max_lcs�� ���� ���� �κ� �����̵�.

		
	*/

	for (int i = 0; i < input_string1.size(); i++)
	{
		dp[i][0] = 0;
		dp[0][i] = 0;
	}

	for (int i = 1; i < input_string1.size(); i++)
	{
		for (int j = 1; j < input_string2.size(); j++)
		{
			if (input_string1[i][j] == input_string2[i][j])
			{
				
			}
		}
	}
	return 0;
}