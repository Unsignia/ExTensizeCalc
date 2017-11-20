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
void trig_ratio_solve();
void trig_inverse_ratio_solve();
void pythagorean();
void oddeven();
void cofunction(); 
void angsumdiff();
void hdtangle();
void productsum();
void lawFunc();
void polarFunc();
//Geometry Function Prototypes
void area2dFunc();
void area3dFunc();
void circleFunc();
void transFunc();
void seqFunc();
void quadFunc();
void coorFunc();
void expFunc();
void vectorFunc();
void measureFunc();


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
	char choice1 = ' ';
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
		char choice2 = ' ';
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
		case 'Q': 
		case 'q': endFunc();
			break;
		default: cout << "Error: Enter one of the choices correctly.";
			break;
		}
	}
	else if (choice1 == TRIGONOMETRY_CHOICE)
	{
		char choice3 = ' ';
		char ANGLE_CHOICE = '1',
			REF_CHOICE = '2',
			IDENTITY_CHOICE = '3',
			LAW_CHOICE = '4',
			POLAR_CHOICE = '5',
			QUIT_CHOICE = 'Q';

		// TODO compress the categories w/ descriptions
		cout << "\n\t\tTRIGONOMETRY Menu\n"
			<< "\tThere is NO graphing in this program.\n"
			<< "\t\tANGLES ARE IN DEGREES\n\n"
			<< "1. Angle Compuatation & Conversion\n"
			<< "2. Reference/Coterminal Angles\n"
			<< "3. Trigonometric Identities\n" 
			<< "4. Law of Sines/Law of Cosines/Law of Tangents\n"
			<< "5. Polar Coordinates\n"
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
		case 'Q': 
		case 'q': endFunc();
			break;
		default: errorFunc();
			break;
	}
	}
	else if (choice1 == GEOMETRY_CHOICE)
	{
		char choice3 = ' ';
		char AREA_2D_CHOICE = '1',
			AREA_3D_CHOICE = '2',
			CIRCLE_CHOICE = '3',
			TRANSF_CHOICE = '4',
			SEQ_CHOICE = '5',
			QUADEQ_CHOICE = '6',
			COOR_CHOICE = '7',
			EXP_CHOICE = '8',
			VECTOR_CHOICE = '9',
			MEASURE_CHOICE = '0',
			QUIT_CHOICE = 'Q';

		cout << "\n\t\tGEOMETRY Menu\n\n"
			<< "1. Perimeter/Area for 2D Shapes\n"
			<< "2. Volume/Area for 3D Shapes\n"
			<< "3. All about Circles\n"
			<< "4. Transformations\n"
			<< "5. Sequences\n"
			<< "6. Quadratic Equation\n"
			<< "7. Coordinate Geometry\n"
			<< "8. Exponential Growth/Decay\n"
			<< "9. Vectors\n"
			<< "0. Measurements\n\n"
			<< "Q. Quit the Program\n\n"
			<< "Enter your choice: ";
		cin >> choice3;

		switch (choice3)
		{
		case '1':area2dFunc();
			break;
		case '2':area3dFunc();
			break;
		case '3':circleFunc();
			break;
		case '4':transFunc();
			break;
		case '5':seqFunc();
			break;
		case '6':quadFunc();
			break;
		case '7':coorFunc();
			break;
		case '8':expFunc();
			break;
		case '9':vectorFunc();
			break;
		case '0':measureFunc();
			break;
		case 'Q':
		case 'q': endFunc();
			break; 
		default:
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
		<< "7. Product/Sum\n\n"
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
	default: errorFunc();
		break;
	}
}
// Fix this
void trigratio()
{
	char trigchoice = ' ', sctchoice = ' ', cscchoice = ' ';
	cout << "\n\tTrigonomtric Ratios\n"
		<< "Angles must be in degrees\n\n"
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
			trig_ratio_solve();

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
			trig_ratio_solve();

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
			trig_ratio_solve();

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

		switch (cscchoice)
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
}
// Fix this 
void trig_ratio_solve()
{
	float opp = 0.0, hyp = 0.0, ang = 0.0;
	char solve_for = ' ';

	ang = ang * (pi / 180); // Degrees to Radians

	cout << "\nWhat are you trying to solve for?\n\n"
		<< "1. Angle (Θ)\n"
		<< "2. Opposite\n"
		<< "3. Hypotenuse\n\n"
		<< "Enter your choice: ";
	cin >> solve_for;

	switch (solve_for)
	{
	case '1': 
		cout << "\nInput:\n"
		<< "Opposite: ";
		cin >> opp;
		cout << "\nHypotenuse: ";
		cin >> hyp;

		ang = asin(opp / hyp);
		cout << "\nThe Angle is " << ang << ".";
		break;
	case '2':
		cout << "\nInput:\n"
			<< "Angle: ";
		cin >> ang;
		cout << "\nHypotenuse: ";
		cin >> hyp;
		
		opp = sin(ang) * hyp;
			cout << "\nThe Opposite side is " << opp << ".";
		break;
	case '3':
		cout << "\nInput:\n"
			<< "Angle: ";
		cin >> ang;
		cout << "\nOpposite: ";
		cin >> opp;
		
		hyp = opp / sin(ang);
		cout << "\nThe Hypotenuse is " << hyp << ".";
		break;
	default: errorFunc();
		break;
	}
}
void trig_inverse_ratio_solve()
{
	float opp = 0.0, hyp = 0.0, ang = 0.0;
	char solve_for = ' ';

	ang = ang * (pi / 180); // Degrees to Radians

	cout << "\nWhat are you trying to solve for?\n\n"
		<< "1. Angle (Θ)\n"
		<< "2. Opposite\n"
		<< "3. Hypotenuse\n\n"
		<< "Enter your choice: ";
	cin >> solve_for;

	switch (solve_for) 
	{
	case '1':
		cout << "\nInput:\n"
			<< "Opposite: ";
		cin >> opp;
		cout << "\nHypotenuse: ";
		cin >> hyp;

		ang = asin(opp / hyp);
		cout << "\nThe Angle is " << ang << ".";
		break;
	case '2':
		cout << "\nInput:\n"
			<< "Angle: ";
		cin >> ang;
		cout << "\nHypotenuse: ";
		cin >> hyp;

		opp = sin(ang) * hyp;
		cout << "\nThe Opposite side is " << opp << ".";
		break;
	case '3':
		cout << "\nInput:\n"
			<< "Angle: ";
		cin >> ang;
		cout << "\nOpposite: ";
		cin >> opp;

		hyp = opp / sin(ang);
		cout << "\nThe Hypotenuse is " << hyp << ".";
		break;
	default: errorFunc();
		break;
	}
}
void pythagorean()
{
	cout << "\n\nPythagorean Identities\n\n"
		<< "sin²Θ + cos²Θ = 1\n"
		<< "tan²Θ + 1 = sec²Θ\n"
		<< "1 + cot²Θ = csc²Θ\n\n";
}
void oddeven()
{
	cout << "\n\nOdd/Even Identites\n\n"
		<< "sin(-Θ) = -sin(Θ)\n"
		<< "cos(-Θ) = cos(Θ)\n"
		<< "tan(-Θ) = -tan(Θ)\n"
		<< "csc(-Θ) = -csc(Θ)\n"
		<< "sec(-Θ) = sec(Θ)\n"
		<< "cot(-Θ) = -cot(Θ)\n\n";
}
void cofunction()
{
	cout << "\n\nCofunction Formulas\n\n"
		<< "sin(π/2 - Θ) = cos(Θ)\n"
		<< "csc(π/2 - Θ) = sec(Θ)\n"
		<< "tan(π/2 - Θ) = cot(Θ)\n"
		<< "cos(π/2 - Θ) = sin(Θ)\n"
		<< "sec(π/2 - Θ) = csc(Θ)\n"
		<< "cot(π/2 - Θ) = tan(Θ)\n\n";
}
void angsumdiff()
{
	cout << "\n\nSum and Difference Formulas\n\n"
		<< "sin(α±ß) = sin(α)cos(ß) ± cos(α)sin(ß)\n"
		<< "cos(α±ß) = cos(α)cos(ß) ± sin(α)sin(ß)\n"
		<< "\ttan(α) ± tan(ß)\n"
		<< "tan(α±ß) = ------------------\n"
		<< "\t1 ± tan(α)tan(ß)\n\n";
}
void hdtangle()
{
	char hdtchoice = ' ';

	cout << "\n\nHalf/Double/Triple Angle Formulas\n\n"
		<< "1. Half Angle Formula\n"
		<< "2. Double Angle Formula\n"
		<< "3. Triple Angle Formula\n\n"
		<< "Enter your choice: ";
		cin >> hdtchoice;

		switch (hdtchoice)
		{
		case '1': 
			cout << "\t /  1 - cos Θ\n"
				<< "sin -- = ± /---------\n"
				<< "\t√     2\n\n";
			cout << "\t /  1 + cos Θ\n"
				<< "cos -- = ± /---------\n"
				<< "\t√     2\n\n";
			cout << "\t /  1 - cos Θ\n"
				<< "tan -- = ± /---------\n"
				<< "\t√     1 + cos Θ\n\n";
			break;
		case '2':
			cout << "sin 2Θ = 2 sinΘcosΘ\n"
				<< "cos 2Θ = cos²Θ - sin²Θ\n"
				<< "       = 2 cos²Θ - 1\n"
				<< "       = 1 - 2 sin²Θ\n"
				<< "\t2tanΘ\n"
				<< "tan 2Θ = ---------\n"
				<< "\t1 - tan²Θ\n\n";
			break;
		case '3':
			cout << "sin 3Θ = 3sinΘ - 4sin³Θ\n"
				<< "cos 3Θ = 4cos³Θ - 3cosΘ\n"
				<< "\t3 tan Θ - tan³Θ"
				<< "tan 3Θ = ---------------\n"
				<< "\t1 - 3 tan²Θ\n\n";
			break;
		default: errorFunc();
			break;

		}
}
void productsum() 
{
	cout << "\n\nProduct to Sum Formulas\n\n"
		<< "sin(α)sin(ß) = (1/2)[cos(α - ß) - cos(α + ß)]\n"
		<< "cos(α)cos(ß) = (1/2)[cos(α - ß) + cos(α + ß)]\n" 
		<< "sin(α)cos(ß) = (1/2)[sin(α + ß) + sin(α - ß)]\n"
		<< "cos(α)sin(ß) = (1/2)[sin(α + ß) - sin(α - ß)]\n";
}
void lawFunc()
{
	char lawchoice = ' ';

	cout << "\n\nLaw of Sine/Cosine Formulas\n\n"
		<< "1. Law of Sines\n"
		<< "2. Law of Cosines\n"
		<< "3. Law of Tangents\n\n"
		<< "Enter your choice: ";
	cin >> lawchoice;

	if (lawchoice == '1')
	{
		cout << "\n\nLaw of Sines\n\n"
			<< "sinα   sinß   sinΓ\n"
			<< "---- = ---- = ----\n"
			<< " a      b      c\n\n";
	}
	else if (lawchoice == '2')
	{
		cout << "\n\nLaw of Cosines\n\n"
			<< "a² = b² + c² - 2bc cosα\n"
			<< "b² = a² + c² - 2ac cosß\n"
			<< "c² = a² + b² - 2ab cosΓ\n";
	}
	else if (lawchoice == '3')
	{
		cout << "\n\nLaw of Tangents\n\n"
			<< "a - b    tan½(α - ß)\n"
			<< "-----  = -----------\n"
			<< "a + b    tan½(α + ß)\n\n"
			<< "b - c    tan½(ß - Γ)\n"
			<< "-----  = -----------\n"
			<< "b + c    tan½(ß + Γ)\n\n"			
			<< "a - c    tan½(α - Γ)\n"
			<< "-----  = -----------\n"
			<< "a + c    tan½(α + Γ)\n\n";
	}
	else { errorFunc(); }
}
void polarFunc()
{
	char polarchoice;
	float x, y, ang, r;
	ang = ang * (pi / 180); // Degrees to Radians

	cout << "\n\nPolar Coordinates\n"
		<< "Angles must be in degrees\n\n" // TODO Create an angles in degree function
		<< "1. Rectangular to Polar\n"
		<< "2. Polar to Rectangular\n\n"
		<< "Enter your choice: ";
	cin >> polarchoice;

	if (polarchoice == '1')
	{
		cout << "\n\nRectanglar to Polar\n"
			<< "Angles must be in degrees\n\n"
			<< "r = √(x²+y²)\n"
			<< "Θ = arctan(y/x)\n"
			<< "-------------------\n\n"
			<< "Enter the values:\n"
			<< "x = ";
		cin >> x;
		cout << "\ny = ";
		cin >> y;

		r = sqrt(pow(x, 2) + pow(y, 2));
		ang = atan(y / x);

		cout << "\n\n-------------------\n\n"
			<< "r = " << r << endl
			<< "Θ = " << ang << endl;
	}
	else if (polarchoice == '2')
	{
		cout << "\n\nPolar to Rectanglar\n"
			<< "Angles must be in degrees\n\n"
			<< "x = r cos(Θ)\n"
			<< "y = r sin(Θ)\n"
			<< "r² = x² + y²\n"
			<< "tan(Θ) = y/x\n"
			<< "-------------------\n\n"
			<< "Enter the values:\n"
			<< "r = ";
		cin >> r;
		cout << "\nΘ = ";
		cin >> ang;
		
		x = r * cos(ang);
		y = r * sin(ang);

		cout << "\n\n-------------------\n\n"
			<< "x = " << x << endl
			<< "y = " << y << endl;
	}
	else { errorFunc(); }
}

		// Geometry Functions
void area2dFunc() 
{

}
void area3dFunc()
{

}
void circleFunc()
{

}
void transFunc()
{

}
void seqFunc()
{

}
void quadFunc()
{

}
void coorFunc()
{

}
void expFunc()
{

}
void vectorFunc()
{

}
void measureFunc()
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



