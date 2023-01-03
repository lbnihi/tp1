#include <iostream>
#include <cstdlib> 
#include <ctime> 

using namespace std; 

int generatenum() 
{ 
	// Fonction pour générer un nombre aléatoire
	srand(time(0)); 
	return rand() % 100 + 1; 
} 

int main() 
{ 
	for (int i = 0; i<10; i++) 
		cout << generatenum() << " "; 
	
	return 0; 
}