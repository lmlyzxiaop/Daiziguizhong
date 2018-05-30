#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

const int maxn = 1e5+5;

int A[maxn];

int main()
{
	int n,m,k;

	cin >> n >> m >> k;

	for (int i = 0; i < n; ++i)
		cin >> A[i];

	sort(A,A+n);

	int pos = k-m;

	for (int i = n-1; i - pos + 1 >= 0; --i) {

		int tmp = A[i] - A[i-pos+1] + 1;
		
		if (tmp - pos <= m) {
			int res = A[i] + m - tmp + pos;
			cout << res << endl;
			return 0;
		}

	}


	return 0;
}
