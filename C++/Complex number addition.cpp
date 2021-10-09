#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter number of complex numbers\n";
	cin>>n;
	vector<pair<int,int>>complex;
	for(int i=0;i<n;i++){
		int r,img;
		cout<<"Enter Real and Imaginary part of "<<i+1<<" number\n";
		cin>>r>>img;
		complex.push_back(make_pair(r,img));
	}
	int realAdd=0,imagAdd=0;
	for(auto i:complex){
		realAdd+=i.first;
		imagAdd+=i.second;
	}
	cout<<"Additon of complex number is "<<realAdd<<" + "<<imagAdd<<" i";
	return 0;
}
