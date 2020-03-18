
/*
消除游戏
m行n列 数字范围为1-9 

输入
	4 5
	2 2 3 1 2 
	3 4 5 1 4
	2 3 2 1 3
	2 2 2 4 4 
输出
	2 2 3 0 2 
	3 4 5 0 4
	2 3 2 0 3
	0 0 0 4 4 
	
输入
	4 5
	2 2 3 1 2 
	3 1 1 1 1
	2 3 2 1 3
	2 2 3 3 3
输出
	2 2 3 0 2 
	3 0 0 0 0 
	2 3 2 0 3
	2 2 0 0 0
*/ 
#include <iostream>
using namespace std;
const int N = 100;
int ori[N][N], ans[N][N];


int main(int argc, char** argv) {
	
	int m , n ;
	cin >> m >> n;
	for(int i = 0 ; i < m ; i++)
	{
		for(int j = 0 ; j < n ; j ++)
		{
			cin>>ori[i][j];
			ans[i][j] = ori[i][j];
		}
	}//写入
	 
		
	//判断
	for(int i = 0 ; i < m ; i++)
	{
		for(int j = 0 ; j < n ; j ++)
		{
			if(ori[i][j] == ori[i][j+1] and ori[i][j+1] == ori[i][j+2])
			{
				ans[i][j]=0;
				ans[i][j+1]=0;
				ans[i][j+2]=0;
			}
			if(ori[i][j] == ori[i+1][j] and ori[i+1][j] == ori[i+2][j])
			{
				ans[i][j]=0;
				ans[i+1][j]=0;
				ans[i+2][j]=0;
			}
		}
	} 
	
	//输出
	for(int i = 0 ; i < m ; i++)
	{
		for(int j = 0 ; j < n ; j ++)
		{
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}  
	 
	return 0;
}
