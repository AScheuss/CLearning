#include <stdio.h>
#include <stdlib.h>



void next() {
	system("PAUSE");
	system("Cls");
}


int main(int argc, char *argv[]){

	next();

	short s = 125;
	long l = -48;
	int i = 15;

	long longer = i+l+s;
	long evenLonger = 2147483647;

	//char* outString = "hhoh";
	//printf("%s\n", outString);

	printf("Die Variable s ist gleich %d\n", s);
	printf("Die Variable l ist gleich %d\n", l);
	printf("Die Variable i ist gleich %d\n", i);
	printf("Die Variable longer ist gleich %ld\n", longer);
	printf("Die Variable evenLonger ist gleich %d\n", evenLonger);



	next();



	long result = 125%4 + 36*9; 
	printf("Das Ergebnis in dezimaler Form ist %d\n",result);
	printf("Das Ergebnis in hexadezimaler Form ist %x\n",result);
	printf("Das Ergebnis in oktaler Form ist %o\n",result);
	printf("Das Ergebnis in Exponentialform ist %e\n",result);
	printf("Das Ergebnis in der kompakten Art ist %g\n",result);
	printf("Das Ergebnis in der ASCII-Darstellung ist %c\n",result);



	next();



	float float1 = 132165.54652;
	double double1 = 132165.54652;
	double longDouble = 132465484453.14245654654545646546465465;

	printf("Ein Float %f\n", float1);
	printf("Ein double %f\n", double1);
	printf("Ein langer double %lf\n", longDouble);



	next();



	int number;
	float number2;

	number=12345678;
	number2=1.234;

	/* Show right floated with expected number of cyphers 14*/
	printf("%14d \n",number);
	/* Show right floated with expected number of cyphers 14 and add 0 at the not used places*/
	printf("%014d \n",number);
	/* Show left floated*/
	printf("%14d \n",number);

	printf("%f \n",number2);
	/* Only show two cyphers after the point*/
	printf("%.2f \n",number2);
	printf("%.3f \n",number2);



	next();


	/* Unsigned integers*/

	short short_ = 65534;
	unsigned short unsignedShort = 65534;
	printf("%d \n",short_);
	printf("%d \n",unsignedShort);



	next();


	/* char */
	char myK ='K';
	printf("%c \n",myK);
	char z = 'J';
	printf("Wert : %d ->(ASCII-codiert)->%c\n",z,z);
	char x = '\x9A';
	printf("Wert : %d ->(ASCII-codiert)->%c\n",x,x);



	next();
	return 0;
}
