#include <iostream>
#include <algorithm>
using namespace std;
/*
	n个数字，计算各位和 1<=n<=1000 
	数字为不小于10000的正整数 
	输出每行2个数，分别为数字和各位和
	按各位和递减输出
	若个位数相同，先输出较小者 
	
	输入
		5
		101 100 999 1234 110
	输出
		999 27
		1234 10
		101 2
		110 2
		100 1 
*/
const int a = 1000;
struct num
{
	int number;
	int sum;
};
num n[a];

bool cmp(num x,num y)
{
	if(x.sum == y.sum)
	{
		return x.number<=y.number;
	}
	return x.sum>y.sum;
}
int main(int argc, char** argv) {
	
	int c;//个数 
	cin>>c; 
	
	for(int i = 0 ; i < c ; i++ )
	{
		cin>>n[i].number;
		n[i].sum=0;
		
		n[i].sum += n[i].number%10;
		n[i].sum += (n[i].number/10)%10;
		n[i].sum += (n[i].number/100)%10;
		n[i].sum += (n[i].number/1000)%10;
	}
	sort(n,n+c,cmp);
	for(int i = 0 ; i < c ; i++ )
	{
		cout<<n[i].number<<" "<<n[i].sum<<endl;
	}
	
	
	return 0;
}







