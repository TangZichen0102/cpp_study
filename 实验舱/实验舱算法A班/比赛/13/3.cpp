#include <bits/stdc++.h>
using namespace std;
int K, L, k[100005], l[100005], kmax, lmax, la[5005], ka[5005], minsum, maxsum, c, r;
struct node
{
	bool in;
	int s;
	bool operator < (const node t) const
	{
		return s < t.s;
	}
};
node x[200005];
int main()
{
	cin >> K >> L;
	for(int i = 1; i <= K; i++)
		cin >> k[i], kmax = max(kmax, k[i]), x[i].s = k[i], x[i].in = 0, ka[k[i]]++;
	for(int i = 1; i <= L; i++)
		cin >> l[i], lmax = max(lmax, l[i]), x[i + K].s = l[i], x[i + K].in = 1, la[l[i]]++;
	if(kmax != lmax)
	{
		cout << -1;
		return 0;
	}
	for(int i = 0; i <= kmax; i++)
		if(la[i] && ka[i] && la[i] == ka[i])
			minsum += i * la[i];
		else if(la[i] && !ka[i])			
			minsum += i * la[i];
		else if(!la[i] && ka[i])
			minsum += i * ka[i];
		else if(la[i] && ka[i] && la[i] != ka[i])
			minsum += i * max(la[i], ka[i]);
	sort(x + 1, x + K + L + 1);
	for(int i = 1; i <= K + L; i++)
	{
		if(x[i].in == 1)
			maxsum += x[i].s * (K - r), c++;
		else
			maxsum += x[i].s * (L - c), r++;	
	}
	cout << minsum << " " << maxsum;
	return 0;
}