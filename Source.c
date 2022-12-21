#pragma warning(disable: 4996)

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>


unsigned short FtestA(int ValA) {
	unsigned short code = 1; // par d�faut, le code est �gal � 1

	if (ValA <= 0) {
		code = 0; // valeur re�ue <= 0, action non effectu�e
	}
	else if (ValA > 15) {
		code = 2; // valeur re�ue sup�rieur � 15, limitation � 15
		ValA = 15;
	}

	// affichage des * correspondant � la valeur re�ue
	for (int i = 0; i < ValA; i++) {
		printf("*");
	}
	printf("\n");

	return code;
}

double FTestB(int ValB) {
	if (ValB > 99) {
		ValB = 99;
		printf("Valeur limitee a %d\n", ValB);
	}
	else if (ValB < -99) {
		ValB = -99;
		printf("Valeur limitee a %d\n", ValB);
	}
	return pow(2, ValB);
}

int main() {
	//bool statement = true;

	printf("Ex 8 Allemann Kevin\n ");

	while (1)
	{
		char menu_value = 0;
		int ValA, ValB;
		printf("Test A, B, C, Q pour quitter\n");
		scanf("%c", &menu_value);

		while (getchar() == EOF || getchar() == '\0');
	 
		switch (menu_value) {
		
		case ('A'):
		case ('a'):
			printf("A\n");
			printf("Entrez un nombre en tre 1 et 15: ");
			scanf("%d", &ValA); // r�cup�ration de la valeur introduite par l'utilisateur

			// appel de la fonction FtestA et stockage du code d'ex�cution
			unsigned short code = FtestA(ValA);

			printf("TestA : code execution = %d\n", code);
			break;
		
		case ('B'):
		case ('b'):
			printf("TestB: entrez un exposant de -99 a +99\n");
			scanf("%d", &ValB);
			double result = FTestB(ValB);
			printf("TestB: 2 a la puissance %d = %g\n", ValB, result);
			break;

		case ('Q'):
		case ('q'):
		default:
			printf("A+");
			//statement = false;
			break;
		}
	
	} 

	return 0;
}