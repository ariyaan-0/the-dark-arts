#include <bits/stdc++.h>

using namespace std;

void printQueue(queue<int> q){
	queue<int>temp = q;
	while(!temp.empty()){
		cout<<'\t'<<temp.front();
		temp.pop();
	}
}

int main(){
	queue<int> a;
	a.push(10);
	a.push(20);
	a.push(39);
	a.push(40);
	cout<<"The size of the queue is "<<a.size()<<endl;
	printQueue(a);

	return 0;
}