#include<iostream>
#include<map>
#include<iomanip>
using namespace std;
int main()
{
	map<string, double>mp;
	int n, pro, wanted;
	string name;
	double price,countity;
	cin >> n;
	while (n--)
	{
		double pay = 0;
		cin >> pro;
		while (pro--)
		{
			cin >> name >> price;
			mp.insert(make_pair(name, price));
		}
		cin >> wanted;
		while (wanted--)
		{
			cin >> name >> countity;
			pay += mp[name]*countity;
			//cout << "mp[name] : " << mp[name]*countity << endl;
		}
		cout << "R$ " << fixed << setprecision(2) << pay << endl;
		mp.clear();
}
	return 0;
}