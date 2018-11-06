#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	int interruptores, lampadas;
	cin>>interruptores>>lampadas;

	vector <int> lamp;
	lamp.resize(lampadas);

	vector <int> lamp_ant;
	lamp_ant.resize(lampadas);

	fill(lamp.begin(), lamp.end(), 0);

	int aux1, aux2;
	cin>>aux1;
	for (int i = 0; i < aux1; ++i)
	{
		cin>>aux2;
		lamp[aux2-1] = 1;
	}

	//interruptores
	int inter[interruptores+1][lampadas+1];
	for(int i = 0; i < interruptores; i++)
		for(int j = 0; j < lampadas; j++)
			inter[i][j] = 0;

	for(int i = 0; i < interruptores; i++)
	{
		cin>>aux2;
		for (int j = 0; j < aux2; ++j)
		{
			int aux3;
			cin>>aux3;
			inter[i][aux3-1] = 1;
		
		}
	}

	//pecorrer todos os interruptores, parar quando:
	//accumulate == 0 (todas estao apagadas) ou vector lamp == vector lamp_ant.
	int soma = 1, cont = 0;
	for (int i = 0; i < lamp.size(); ++i)
		lamp_ant[i] = lamp[i];
	

	while(1){
		for(int i = 0; i < interruptores; i++){
			for (int j = 0; j < lampadas; ++j){
				if(inter[i][j] == 1)
					lamp[j] = !lamp[j];
				
		}
		//pecorreu um interruptor, verificar se estao todas apagadas:
		soma = accumulate(lamp.begin(), lamp.end(), 0);
		if(soma == 0){
			cout<<cont*interruptores+(i+1)<<endl;
			return 0;
			}
		}
		cont++;
		if(lamp_ant == lamp){
			cout<<-1<<endl;
			return 0;
		}

	}
	
	return 0;
}