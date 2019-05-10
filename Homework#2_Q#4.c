#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char input;
		
	printf("Input a letter from the alphabet: ");
	scanf("%c", &input);


	//if it is a vowel
	if(input == 'A' || input == 'E' || input == 'I' || input =='O' || input == 'U' || input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u')
		printf("%c is a vowel \n", input);
	
	//If not it's a consonant
	else 
		printf("%c is a consonant \n", input);
	
	
	return 0;
	
}//main
