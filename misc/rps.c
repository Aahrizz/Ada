#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int game (char you, char computer)
{
	if (you == computer)
		return -1;
	if (you == 's' && computer == 'p')
		return 0;
			else if (you == 'p' && computer == 's') return 1;
	if (you == 'p' && computer == 'z')
		return 0;
	else if (you == 'z' && computer == 's')
		return 1;
}


int main() {
	int n;
	
	char you, computer, result;

	// choose the random number every time

	srand(time(NULL));

	// make the random number less than 100, divided it by 100
	
	n  = rand() % 100;
	
	//using simple probability 100 is oughly divided among s, p, and z	
	
	if (n < 33)
		computer = 's';
	else if (n >33 && n < 66)
		computer = 'p';
	else 
		computer = 'z';
	printf("\n\n\n\n\t\t\t\\tEnter s for STONE, p for PAPER and z for SCISSORS\n\t\t\t\t\t\t\t");
	scanf("%c", &you);

	result = game(you, computer);

	if (result == -1) {
		printf("\n\n\t\t\tGame Draw!\n");
	}
	else if (result == 1) {
		printf("\n\n\t\t\t\tWoW! You have Won the game!\n");
	}
	else {
		printf("\n\n\t\t\t\tOh! You have lost the game!\n");
	}
		printf("\t\t\t\tYou choose : %c and Computer choose : %c\n", you , computer);
	
	return 0;
}

