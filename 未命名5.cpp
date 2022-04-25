#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][4] = {{1, 59, 59, 59}, {2, 99, 99, 99}, {3, 60, 60, 60}};
    for(int y = 0; y < 3; y++)
    {
    	for(int x = 0; x < 4; x++)
    	{
    		cout << arr[x][y] << " ";
		}
		cout << endl;
	}
	return 0;
}
