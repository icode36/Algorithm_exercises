
#include<cstdio>
#include<algorithm>

using namespace std;

#define ll long long

double data[2000005];

int main()
{
	int n, m;
	while(scanf("%d%d", &n, &m) == 2)
	{
		int temp = n + m;
		if (0 == temp)
		{
			printf("0.0\n");
		}
		else
		{
			for (int i = 0; i < temp; ++i)
			{
				scanf("%lf",&data[i]);
			}
			sort(data, data + temp);
			if (temp % 2 == 1)
			{
				printf("%.1lf\n", data[temp / 2]);
			}
			else
			{
				printf("%.1lf\n", (data[temp / 2] + data[temp / 2 - 1]) / 2);
			}
		}

	}
	return 0;
}
