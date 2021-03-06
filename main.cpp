#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int const MAXTAM =1000;

int Pilha [MAXTAM];
int Topo;

void Pilha_Construtor()
{
	Topo = -1;
}

bool Pilha_Vazia()
{
	if (Topo == -1)
	{
	return true;
	}
	else
	{
		return false;
	}	
}

int Pilha_Tamanho()
{
	return Topo + 1;
}

bool Pilha_Cheia()
{
	if (Topo == MAXTAM-1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Pilha_Push(int valor)
{
	if (Pilha_Cheia())
	{
		return false;
	}
	else
	{
		Topo++;
		Pilha[Topo] = valor;
		return true;
	}
}

bool Pilha_Pop(int &valor)
{
	if (Pilha_Vazia())
	{
		return false;
	}
	else
	{
		valor = Pilha[Topo];
		Topo--;
		return true;
	}
}

bool Pilha_Top(int &valor)
{
	if (Pilha_Vazia())
	{
		return false;
	}
	else
	{
		valor = Pilha[Topo];
		return true;
	}
}


int main(int argc, char** argv) 
{
	int valor;
	
	Pilha_Construtor();
	
	Pilha_Push(5);
	Pilha_Push(7);
	Pilha_Push(9);
	Pilha_Push(1);
	Pilha_Push(2);
	
	Pilha_Pop(valor);
	cout<<endl<<endl<<"O valor que esta no topo da pilha eh: "<< valor<<endl<<endl;
		
	system ("pause");
	return 0;
}
