#include<iostream>
#include<vector>
using namespace std;
int main()
{
	long long num1,num2,x,y,nums1[30][30]={0},nums2[30][30]={0};
	cin >> num1 >> num2 >> x >> y;
	num1+=2,num2+=2,x+=2,y+=2;
	
	const int fx[] = { 0, -2, -1, 1, 2, 2, 1, -1, -2 };
	const int fy[] = { 0, 1, 2, 2, 1, -1, -2, -2, -1 };
	for (int i = 0; i <= 8; i++)
	{
		nums2[fx[i] + x][fy[i] + y] = 1;
	}	
	nums1[1][2]=1;
	for (int i = 2; i <=num1; i++)
	{
		for (int j = 2; j <= num2; j++)
		{
			if (nums2[i][j] == 1)
			{
				nums1[i][j] = 0;
			}
			else
			{
				nums1[i][j] = nums1[i - 1][j] + nums1[i][j - 1];
			}
		}
	}
	cout << nums1[num1][num2];
}