#include <stdio.h>
#include <stdlib.h>

#include <conio.h> // used for getch-method

void next() {
	system("PAUSE");
	system("Cls");
}

int main(int argc, char *argv[]) {

	next();
	/* Easy input */

	int years;
	printf("Bitte gebe ein, wie alt du bist: ");
	scanf("%d", &years);
	/* We need to "clean" the buffer for future use*/
	fflush(stdin);
	int minutesLived = years*365*24*60;
	printf("\nDu bist %d Jahre alt.\n",years);
	printf("\nDu hast mindestens %d Minuten gelebt.\n",minutesLived);


	next();
	/* hidden input*/

	char input;

	printf("scanf()-Eingabeauforderung:\n");
	scanf("%c", &input);
	fflush(stdin);
	printf("Deine Eingabe wurde auf dem Bildschirm ausgegeben und \ndu musstest Enter druecken. Deine Eingabe war: %c\n\n",input);

	printf("getch()-Eingabeauforderung:\n");
	input=getch();
	printf("Deine Eingabe wurde nicht auf dem Bildschirm ausgegeben und \ndu musstest nicht Enter druecken. Deine Eingabe war: %c\n\n",input);	
	return 0;
}