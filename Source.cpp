#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void PrintIntro();
char showMenu();
// Algebra Function Prototypes
void additionFunc();
void subtractionFunc();
void multiplicationFunc();
void divisionFunc();

// Trig Function Prototypes
void angleFunc();
void angCompute();
void angConvert();
void refFunc();

void identityFunc();
void trigratio();
void pythagorean();
void oddeven();
void cofunction(); 
void angsumdiff();
void hdtangle();
void productsum();
void ptolemy();


void lawFunc();
void polarFunc();
void formFunc();
void arcFunc();


int endFunc();
void errorFunc();

const double pi = 3.14159;

// Menu for type of Math
int main() 
{
	PrintIntro();
	showMenu();

	return 0;
}


char showMenu()
{
	char choice1 = '0';
	char ALGEBRA_CHOICE = '1',
		TRIGONOMETRY_CHOICE = '2',
		GEOMETRY_CHOICE = '3',
		CALCULUS_CHOICE = '4',
		QUIT_CHOICE = 'Q';

	cout << "\t\tMATHEMATICS Menu\n\n"
		<< "1. Algebra\n"
		<< "2. Trigonometry\n"
		<< "3. Geometry\n"
		<< "4. Calculus\n\n"
		<< "Q. Quit the Program\n\n"
		<< "Enter your choice: ";
	cin >> choice1;

	if (choice1 == ALGEBRA_CHOICE)
	{
		char choice2 = '0';
		char ADDITION_CHOICE = '1',
			SUBTRACTION_CHOICE = '2',
			MULTIPLICATION_CHOICE = '3',
			DIVISION_CHOICE = '4',
			QUIT_CHOICE = 'Q';

		cout << "\n\t\tALGEBRA Menu\n\n"
			<< "1. Addition\n"
			<< "2. Subtraction\n"
			<< "3. Multiplication\n"
			<< "4. Division\n\n"
			<< "Q. Quit the Program\n\n"
			<< "Enter your choice: ";
		cin >> choice2;

		// Algebra Choices
		switch (choice2) 
		{
		case '1': additionFunc();
			break;
		case '2': subtractionFunc();
			break;
		case '3': multiplicationFunc();
			break;
		case '4': divisionFunc();
			break;
		case 'Q': endFunc();
			break;
		default: cout << "Error: Enter one of the choices correctly.";
			break;
		}
	}
	else if (choice1 == TRIGONOMETRY_CHOICE)
	{
		char choice3 = '0';

		char ANGLE_CHOICE = '1',
			REF_CHOICE = '2',
			IDENTITY_CHOICE = '3',
			LAW_CHOICE = '4',
			POLAR_CHOICE = '5',
			ARC_CHOICE = '6',
			FORM_CHOICE = 'F',
			QUIT_CHOICE = 'Q';

		// TODO compress the categories w/ descriptions
		cout << "\n\t\tTRIGONOMETRY Menu\n"
			<< "\tThere is NO graphing in this program.\n"
			<< "\t\tANGLES ARE IN DEGREES\n\n"
			<< "1. Angle Compuatation & Conversion\n"
			<< "2. Reference/Coterminal Angles\n"
			<< "3. Trigonometric Identities\n" 
			<< "4. Law of Sines/Law of Cosines/Law of Tangents\n"
			<< "5. Polar Equations\n"
			<< "6. Arc/Sectors\n"
			<< "F. Formula List\n\n" // Is this needed?
			<< "Q. Quit the Program\n\n"
			<< "Enter your choice: ";
		cin >> choice3;

		// Trig Choices
		switch (choice3)
	{
		case '1': angleFunc();
			break;
		case '2': refFunc();
			break;
		case '3': identityFunc();
			break;
		case '4': lawFunc();
			break;
		case '5': polarFunc();
			break;
		case '6': arcFunc();
			break;
		case 'F': formFunc();
			break;
		case 'Q': endFunc();
			break;
		default: errorFunc();
			break;
	}
	}
	
	else;
	return choice1;
}

void PrintIntro() 
{
	cout << "\tThis is a simple calculator program.\n"
		<< "\tThis program can accept up to 3 input\n" 
		<< "\tfrom the user for each operation.\n\n\n";
}
 

// Functions for ALGEBRA
void additionFunc()
{
	// Basic addition (up to 3 numbers)

	float num1 = 0.0, num2 = 0.0, num3 = 0.0, sum = 0.0;

	char addMore = ' ';

	cout << "\n\nWhich two numbers do you want to add?" << endl;
	cout << "First number: ";
	cin >> num1;

	cout << "Second number: ";
	cin >> num2;

	sum = num1 + num2;

	cout << "\nThe sum is: \n" << sum;
	cout << "\n\nDo you want to add another number to the sum? (Y/N)\n";
	cin >> addMore;

	if (addMore == 'y' || addMore == 'Y') 
	{
		cout << "\nWhat number do you want to add?\n";
		cin >> num3;
		sum += num3;
		cout << "\n\t\tThe sum is: " << sum << ".\n";
	}
	else if (addMore == 'n' || addMore == 'N') 
	{
		cout << "\nThe program will exit now.";
	}
	else 
	{
		cout << "\nPeace out.";
	}
};
void subtractionFunc() 
{
	//Basic subtraction (up to 3 numbers)

	float num4 = 0.0, num5 = 0.0, num6 = 0.0, subResult = 0.0;

	char subMore = 's';

	cout << "\n\nWhich two numbers do you want to subtract?" << endl;
	cout << "First number: ";
	cin >> num4;

	cout << "Second number: ";
	cin >> num5;

	subResult = num4 - num5;

	cout << "\nThe result is: \n" << subResult;
	cout << "\n\nDo you want to subtract another number from the result? (Y/N)\n";
	cin >> subMore;

	if (subMore == 'y' || subMore == 'Y') 
	{
		cout << "\nWhich number do you want to subtract?: ";
		cin >> num6;
		subResult -= num6;
		cout << "\n\t\tThe difference is: " << subResult << ".\n";
	}
	else if (subMore == 'n' || subMore == 'N') 
	{
		cout << "\n\nThe program will exit now." << endl;
	}
	else 
	{
		cout << "\n\nPeace out.";
	}
};
void multiplicationFunc() 
{
	// Basic multiplication (up to 3 numbers)

	float num7 = 0.0, num8 = 0.0, num9 = 0.0, product = 0.0;

	char multMore = 's';

	cout << "\n\nWhich two numbers do you want to multiply?" << endl;
	cout << "First number: ";
	cin >> num7;

	cout << "Second number: ";
	cin >> num8;

	product = num7 * num8;

	cout << "\nThe product is: \n" << product;
	cout << "\n\nDo you want to multiply another number to the result? (Y/N)\n";
	cin >> multMore;

	if (multMore == 'y' || multMore == 'Y') 
	{
		cout << "\nWhat number do you want to multiply?\n";
		cin >> num9;
		product *= num9;
		cout << "\n\t\tThe product is: " << product << ".\n";
	}
	else if (multMore == 'n' || multMore == 'N') 
	{
		cout << "\nThe program will exit now.";
	}
	else
	{
		cout << "\nPeace out.";
	}
}
void divisionFunc() 
{
	// Basic division (up to 3 numbers)

	float num10 = 0.0, num11 = 0.0, num12 = 0.0, quotient = 0.0;

	char divMore = 's';

	cout << "\n\nWhich two numbers do you want to divide?" << endl;
	cout << "First number: ";
	cin >> num10;

	cout << "Second number: ";
	cin >> num11;

	quotient = num10 / num11;

	cout << "\nThe quotient is: \n" << quotient;
	cout << "\n\nDo you want to divide another number to the quotient? (Y/N)\n";
	cin >> divMore;

	if (divMore == 'y' || divMore == 'Y') 
	{
		cout << "\nWhat number do you want to divide?\n";
		cin >> num12;
		quotient /= num12;
		cout << "\n\t\tThe quotient is: " << quotient << ".\n";
	}
	else if (divMore == 'n' || divMore == 'N') 
	{
		cout << "\nThe program will exit now.";
	}
	else
	{
		cout << "\nPeace out.";
	}
}


// Functions for TRIGONOMETRY
	// Angle Functions
void angleFunc()
{
	char anglechoice = '0';

	cout << "\t\tAngles\n\n\n"
		<< "1. Angle Computation\n" 
		<< "2. Angle Conversion\n\n"
		<< "Enter your choice: ";

	cin >> anglechoice;

	switch (anglechoice)
	{
	case '1': angCompute();
		break;
	case '2': angConvert();
		break;
	default: errorFunc();
		break;
	}

}

void angCompute()
{
	float degrees = 0.0;
	char compchoice = ' ';

	cout << "\t\n\nCOMPUTE ANGLES\n\n"
		<< "1. Sine\n"
		<< "2. Cosine\n"
		<< "3. Tangent\n"
		<< "4. Cosecant\n"
		<< "5. Secant\n"
		<< "6. Cotangent\n\n"
		<< "Enter your choice: ";
	cin >> compchoice;		

	if (compchoice == 1)
	{
		cout << "\n\nEnter angle (in °): ";
		cin >> degrees;
		cout << sin(degrees) << endl;
	}
	else if (compchoice == 2)
	{
		cout << "\n\nEnter angle (in °): ";
		cin >> degrees;
		cout << cos(degrees) << endl;
	}
	else if (compchoice == 3)
	{
		cout << "\n\nEnter angle (in °): ";
		cin >> degrees;
		cout << tan(degrees) << endl;
	}
	else if (compchoice == 4)
	{
		cout << "\n\nEnter number: ";
		cin >> degrees;
		cout << asin(degrees) << endl;
	}
	else if (compchoice == 5)
	{
		cout << "\n\nEnter number: ";
		cin >> degrees;
		cout << acos(degrees) << endl;
	}
	else if (compchoice == 6)
	{
		cout << "\n\nEnter number: ";
		cin >> degrees;
		cout << atan(degrees) << endl;
	}
	else
	{
		errorFunc();
	}	
}
void angConvert()
{
	float rads = 0.0, radstodegs = 0.0, degs = 0.0, degstorads = 0.0;
	char convchoice = ' ';

	cout << "\t\n\nCONVERT ANGLES\n\n"
		<< "1. Radians to Degrees\n"
		<< "2. Degrees to Radians"
		<< "Enter your choice: ";
	cin >> convchoice;

	radstodegs = (180 / pi) * rads;
	degstorads = (pi / 180) * degs;

	if (convchoice == 1)
	{
		cout << "\n\nRadians to Degrees\n\n"
			<< "Radians: ";
		cin >> rads;

		cout << "\nDegrees: " << radstodegs << "°";
	}
	else if (convchoice == 2)
	{
		cout << "\n\nDegrees to Radians\n\n"
			<< "Degrees: ";
		cin >> degs;

		cout << "\nRadians: " << degstorads << " rad";
	}
	else 
	{
		errorFunc();
	}
}
void refFunc()
{
	float angle = 0.0, refang = 0.0;
	char refchoice = ' ';

	cout << "\n\tREFERENCE/COTERMINAL ANGLES\n\n"
		<< "1. Reference\n"
		<< "2. Coterminal\n\n"
		<< "Enter your choice: ";
		cin >> refchoice;

		//fix
		if (refchoice == '1')
		{
			cout << "\n\t\tREFERENCE ANGLE\n"
				<< "\tFor angles between 0-360\n\n"
				<< "Enter an angle: ";
			cin >> angle;

			cout << "\nReference angle: ";

			if (angle >= 0 && angle < 90)
			{
				cout << angle << endl;
			}
			else if (angle >= 90 && angle < 180)
			{
				cout << (180 - angle) << endl;
			}
			else if (angle >= 180 && angle < 270)
			{
				cout << (angle - 180) << endl;
			}
			else if (angle >= 270 && angle <= 360)
			{
				cout << (360 - angle) << endl;
			}
			else
			{
				cout << "\nError: Enter a number between 0-360.";
			}
		}
		else if (refchoice == '2')
		{
			cout << "\n\t\tCOTERMINAL ANGLE\n"
				<< "\tWill show 3 coterminal angles\n\n"
				<< "Enter an angle: ";
			cin >> angle;

			cout << "\nCoterminal Angles: ";

			for (int count = 0; count <= 2; count++)
			{
				refang = angle + 360;
				cout << refang << " ";
			}
			cout << endl;
		}
		else
		{
			errorFunc();
		}
}

	// Identity Functions
void identityFunc()
{
	char identitychoice = ' ';

	cout << "\n\tTRIG IDENTITES\n\n"
		<< "1. Trig Ratio & Reciprocal\n"
		<< "2. Pythagorean\n"
		<< "3. Odd/Even\n"
		<< "4. Cofunction\n"
		<< "5. Angle Sum & Difference\n"
		<< "6. Half/Double/Triple Angle\n"
		<< "7. Product/Sum\n"
		<< "8. Ptolemy's Theorem\n\n"
		<< "Enter your choice: ";
	cin >> identitychoice;

	switch (identitychoice)
	{
	case '1': trigratio();
		break;
	case '2': pythagorean();
		break;
	case '3': oddeven();
		break;
	case '4': cofunction();
		break;
	case '5': angsumdiff();
		break;
	case '6': hdtangle();
		break;
	case '7': productsum();
		break;
	case '8': ptolemy();
		break;
	default: errorFunc();
		break;
	}
}

void trigratio()
{
	char trigchoice = ' ', sctchoice = ' ', cscchoice = ' ';
	cout << "\n\tTrigonomtric Ratios\n\n"
		<< "1. SOHCAHTOA\n"
		<< "2. Reciprocal Identities\n\n"
		<< "Enter your choice: ";
	cin >> trigchoice;

	if (trigchoice == '1')
	{ // TODO Theta Unicode doesn't work right
		cout << "\n\tSOHCAHTOA\n"
			<< "For Right Triangles, where 0 < Θ < 90\n\n"
			<< "1. Sine\n"
			<< "2. Cosine\n"
			<< "3. Tangent\n\n"
			<< "Enter your choice: ";
		cin >> sctchoice;

		switch (sctchoice)
		{
		case '1':
			cout << "\n\n\tSine\n\n"
				<< "|\\\n"
				<< "| \\\n"
				<< "|  \\\n"
				<< "|   \\\n"
				<< "|    \\\n"
				<< "|     \\\n"
				<< "|      \\\n"
				<< "|_      \\\n"
				<< "|_|____(Θ\\\n\n\n"
				<< "\tOpposite\n"
				<< "Sin Θ = ---------\n"
				<< "\tHypotenuse\n" << endl;
			break;
		case '2':
			cout << "\n\n\tCosine\n\n"
				<< "|\\\n"
				<< "| \\\n"
				<< "|  \\\n"
				<< "|   \\\n"
				<< "|    \\\n"
				<< "|     \\\n"
				<< "|      \\\n"
				<< "|_      \\\n"
				<< "|_|____(Θ\\\n\n\n"
				<< "\tAdjacent\n"
				<< "Cos Θ = ---------\n"
				<< "\tHypotenuse\n" << endl;
			break;
		case '3':
			cout << "\n\n\tTangent\n\n"
				<< "|\\\n"
				<< "| \\\n"
				<< "|  \\\n"
				<< "|   \\\n"
				<< "|    \\\n"
				<< "|     \\\n"
				<< "|      \\\n"
				<< "|_      \\\n"
				<< "|_|____(Θ\\\n\n\n"
				<< "\tOpposite\n"
				<< "Tan Θ = ---------\n"
				<< "\tAdjacent\n" << endl;
			break;
		default: errorFunc();
			break;
		}
		
	}		
	else if (trigchoice == '2')
	{
		cout << "\n\tInverse Trig\n"
			<< "For Right Triangles, where 0 < Θ < 90\n\n"
			<< "1. Cosecant\n"
			<< "2. Secant\n"
			<< "3. Cotangent\n\n"
			<< "Enter your choice: ";
		cin >> cscchoice;

		switch(cscchoice)
		{
	case '1':
		cout << "\n\n\tCosecant\n\n"
			<< "|\\\n"
			<< "| \\\n"
			<< "|  \\\n"
			<< "|   \\\n"
			<< "|    \\\n"
			<< "|     \\\n"
			<< "|      \\\n"
			<< "|_      \\\n"
			<< "|_|____(Θ\\\n\n\n"
			<< "\tHypotenuse\n"
			<< "Csc Θ = ---------\n"
			<< "\tOpposite\n" << endl;
		break;
	case '2':
		cout << "\n\n\tSecant\n\n"
			<< "|\\\n"
			<< "| \\\n"
			<< "|  \\\n"
			<< "|   \\\n"
			<< "|    \\\n"
			<< "|     \\\n"
			<< "|      \\\n"
			<< "|_      \\\n"
			<< "|_|____(Θ\\\n\n\n"
			<< "\tHypotenuse\n"
			<< "Sec Θ = ---------\n"
			<< "\tAdjacent\n" << endl;
		break;
	case '3':
		cout << "\n\n\tCotangent\n\n"
			<< "|\\\n"
			<< "| \\\n"
			<< "|  \\\n"
			<< "|   \\\n"
			<< "|    \\\n"
			<< "|     \\\n"
			<< "|      \\\n"
			<< "|_      \\\n"
			<< "|_|____(Θ\\\n\n\n"
			<< "\tAdjacent\n"
			<< "Cot Θ = ---------\n"
			<< "\tOpposite\n" << endl;
		break;
	default: errorFunc();
		break;
	}
}
void pythagorean()
{

}
void oddeven()
{

}
void cofunction()
{

}
void angsumdiff()
{

}
void hdtangle()
{

}
void productsum() 
{

}
void ptolemy()
{

}



void lawFunc()
{

}

void polarFunc()
{

}

void arcFunc()
{

}

void formFunc()
{

}


 // Function to end program
int endFunc()
{
	return 0;
}

// Function to display error message
void errorFunc()
{
	cout << "\nError: Enter one of the choices correctly./n";
}



