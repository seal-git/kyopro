#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main(){
	int n,q;
	string s;
	cin>>n>>s>>q;
	int t;
	int a,b;
	bool flag = false;
	for(int i=0;i<q;i++){
		cin>>t>>a>>b;
		if(t==2){
			flag = !flag;
		}else{
			if(flag==false){
				swap(s[a-1], s[b-1]);
			}else{
				a -= 1;
				b -= 1;
				a = (a+n)%(2*n);
				b = (b+n)%(2*n);
//				cout<<a<<b<<endl;
				swap(s[a], s[b]);
			}
		}
//	cout<<s<<endl;
	}
	if(flag == false){
		cout<<s<<endl;
	}else{
		string ans = s.substr(n, n)+s.substr(0,n);
		cout<<ans<<endl;
	}



	return 0;
}
