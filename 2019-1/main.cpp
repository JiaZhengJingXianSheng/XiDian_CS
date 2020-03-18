#include <iostream>
#include <vector>
using namespace std; 
/*
数列分段
输入
	8
	8 8 8 0 12 12 8 0
输出
	5 
*/ 
int main(int argc, char** argv) {
	int n;
	cin>>n;
	vector<int> v;
	int c;
	
	for(int i = 0 ; i < n ; i ++)
	{
		cin>>c;
		v.push_back(c);
	}
	
	int tem , ans = 1;
	tem = v[0];
	for(int i = 0 ; i < n ; i ++)
	{
		if(v[i] != tem)
		{
			tem = v[i];
			ans++;
		}
	}
	cout<<ans;
	return 0;
}






