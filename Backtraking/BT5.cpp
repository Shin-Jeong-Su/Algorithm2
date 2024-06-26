//BOJ 15652 N과M(4)
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int n,m;
vector<int>v;
void p(int start){
	v.push_back(start);
	if (v.size()==m)
	{
		for(auto i:v){
			cout<<i<<" ";
		}
		cout<<"\n";
		return ;
	}
	for(int i=start;i<=n;i++){
		p(i);
		v.pop_back();
	}

}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		v.clear();
		p(i);
	}
}

