#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c ;
	int min_num = min(a, min(b, c));
	int max_num = max(a, max(b, c));
	int mid_num = (a + b + c) - min_num - max_num;
	cout << min_num << " " << mid_num << " " << max_num;


}