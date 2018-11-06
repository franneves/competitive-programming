#include<bits/stdc++.h>
using namespace std;
int main(){
	
ios::sync_with_stdio(false);
int cont = 0;
string s1, s2;
cin>>s1>>s2;

for (int i = 0; i < s1.size() -(s2.size() - 1); ++i)
{
	//string grande,  elemento da strin 1 começa em i
	for(int j = 0; j <s2.size(); j++){
	//elemnto da string 2 em j
		if(s1[i+j] == s2[j]){
			break;
		}else if(j == s2.size() - 1){
			cont++;
		}


	}

}
cout<<cont<<endl;
}
