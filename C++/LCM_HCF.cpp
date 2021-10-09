#include<bits/stdc++.h>
using namespace std;
int hcf(int a,int b){
	if(b==0){
		return a;
	}else{
		return hcf(b,a%b);	
	}
}
int lcm(int a,int b,int hcf_A_B){
	return (a/hcf_A_B)*b;
}
int main(){
	int a,b;
	cout<<"Enter Two Numbers\n";
	cin>>a>>b;
	int hcf_A_B=hcf(a,b);
	int lcm_A_B=lcm(a,b,hcf_A_B);
	cout<<"LCM of "<<a<<" "<<b<<" is "<<lcm_A_B<<" HCF of "<<a<<" "<<b<<" is "<<hcf_A_B;
	return 0;
}
