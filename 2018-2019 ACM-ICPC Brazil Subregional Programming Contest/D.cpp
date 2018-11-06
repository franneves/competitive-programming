#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	int n;
	cin>>n; 
	int cont = 0, a;
	for (int i = 0; i < n; ++i){
		cin>>a;
		if(a != 1)
			cont++;
	}
	cout<<cont<<endl;
	return 0;
}
