#include<bits/stdc++.h>
using namespace std;
void bestFitAlgo(vector<int>&block,vector<int>&process,int n,int m){
	vector<int>allocate(m,0);
	for(int i=0;i<n;i++){
		int best=-1;
		for(int j=0;j<m;j++){
			if(block[j]>=process[i]){
				if(best==-1){
					best=j;
				}else if(block[best]>block[j]){
					best=j;
				}
			}
		}
		if(best!=-1){
			allocate[i]=best;
			block[best]-=process[i];
		}
	}
	cout<<"Process No\tProcess Size\tBlock No.\n";
	for(int i=0;i<n;i++){
		cout<<i+1<<"\t\t"<<process[i]<<"\t\t";
		if(allocate[i]!=-1){
			cout<<allocate[i]+1;
		}else{
			cout<<"Not allocated";
		}
		cout<<"\n";
	}
}
int main(){
	int m;
	cout<<"Enter number of blocks\n";
	cin>>m;
	vector<int>block,process;
	cout<<"Enter size of blocks\n";
	for(int i=0;i<m;i++){
		int x;
		cin>>x;
		block.push_back(x);
	}
	int n;
	cout<<"Enter number of process\n";
	cin>>n;
	cout<<"Enter size of process\n";
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		process.push_back(x);
	}
	bestFitAlgo(block,process,n,m);
}
