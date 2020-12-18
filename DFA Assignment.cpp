
#include <iostream>
#include<string>
using namespace std;


int count_As(char *str)
{
	int cnt = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == 'A')cnt++;
	}
	return cnt;
}

int main()
{
	char str[100], patt[100];
	int cnt = 0, kcnt = 0;
	printf("Enter the input string\n");
	cin >> ("%s", str);


	for (int k = 0; k < strlen(str); k++)
	{
		kcnt = -1;
		for (int i = k; str[i] != '\0'; i++)
		{
			kcnt++;
			for (int j = k; j < strlen(str) - kcnt; j++)
			{
				patt[cnt++] = str[j];
			}
			patt[cnt] = '\0';

			if (count_As(patt) >= 2)
				printf("%s\n", patt);
			cnt = 0;
		}

	}
	system("pause");
	return 0;
}
