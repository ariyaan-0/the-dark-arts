#include <bits/stdc++.h>

using namespace std;

void maxheapQueue(priority_queue<int>q){
	priority_queue<int>temp=q;
	while(!temp.empty()){
		cout<<temp.top()<<" ";
		temp.pop();
	}
	cout<<endl;
}

void minheapQueue(priority_queue<int, vector<int>, greater<int>> q){
	while(!q.empty()){
		cout<<q.top()<<" ";
		q.pop();
	}
}

int main(){

	vector<int> arr = { 10, 2, 4, 8, 6, 9 };

	priority_queue<int> pq;

	for(int i=0; i<arr.size(); i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	for(int i=0; i<arr.size(); i++){
		pq.push(arr[i]);
	}

	maxheapQueue(pq);

	priority_queue<int, vector<int>, greater<int>> anotherQueue;

	for(int i=0; i<arr.size(); i++){
		anotherQueue.push(arr[i]);
	}

	minheapQueue(anotherQueue);

}