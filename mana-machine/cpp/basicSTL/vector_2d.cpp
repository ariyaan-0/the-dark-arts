#include <bits/stdc++.h>
using namespace std;

int main(){

	vector<vector<int>> v(3);

	v[0].push_back(1);
	v[0].push_back(2);
	v[0].push_back(3);

	v[1].push_back(10);
	v[1].push_back(20);
	v[1].push_back(30);
	v[1].push_back(50);
	v[1].push_back(99);

	v[2].push_back(100);
	v[2].push_back(200);
	v[2].push_back(300);

	for(int i=0; i<v.size(); i++){
		cout<<"vector "<<i<<":	";
		for(int j=0; j<v[i].size(); j++){
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}