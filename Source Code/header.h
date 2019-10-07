#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <cmath>
#include <string>

#pragma execution_character_set("utf-8")
#pragma once

const double PI = 3.141592653;

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::fixed;
using std::setprecision;


void PrintIntro()
{
	cout << "\tThis is a \'simple\' calculator program.\n"
		<< "\tThis program can has multiple functions.\n\n\n";
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

class Algebra {
public:
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
};

class Trigonometry {
public:
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
		double rads = 0.0, radstodegs = 0.0, degs = 0.0, degstorads = 0.0;
		char convchoice = ' ';

		cout << "\t\n\nCONVERT ANGLES\n\n"
			<< "1. Radians to Degrees\n"
			<< "2. Degrees to Radians"
			<< "Enter your choice: ";
		cin >> convchoice;

		radstodegs = (180 / PI) * rads;
		degstorads = (PI / 180) * degs;

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

			for (int count = 0; count <= 2; count++) // TODO add error
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
		double opp = 0.0, hyp = 0.0, ang = 0.0;
		char solve_for = ' ';

		ang = ang * (PI / 180); // Degrees to Radians

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
		double opp = 0.0, hyp = 0.0, ang = 0.0;
		char solve_for = ' ';

		ang = ang * (PI / 180); // Degrees to Radians

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
		double x = 0.0, y = 0.0, ang = 0.0, r = 0.0;
		ang = ang * (PI / 180); // Degrees to Radians

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
};

class Geometry {
public:
	void area2dFunc()
	{
		char area2dchoice = ' ';

		cout << "\n\nPERIMETER & AREA OF 2D SHAPES Menu\n\n"
			<< "1. Triangle\n"
			<< "2. Rectangle + Square\n"
			<< "3. Parallelogram\n"
			<< "4. Trapezoid\n"
			<< "5. Circle\n"
			<< "6. Ellipse\n\n"
			<< "Enter your choice: ";
		cin >> area2dchoice;

		switch (area2dchoice)
		{
		case '1':triangle2d();
			break;
		case '2':rect2d();
			break;
		case '3':parallel2d();
			break;
		case '4':trape2d();
			break;
		case '5':circle2d();
			break;
		case '6':ellipse2d();
			break;
		default: errorFunc();
			break;
		}
	}
	void triangle2d()
	{
		double a = 0.0, b = 0.0, c = 0.0, s = 0.0, harea = 0.0, area = 0.0, perimeter = 0.0;
		s = (a + b + c) / 2;
		char trichoice = ' ';

		cout << "\n\nTRIANGLE Menu\n\n"
			<< "1. Area\n"
			<< "2. Heron's Formula\n"
			<< "3. Perimeter\n\n"
			<< "Enter your choice: ";
		cin >> trichoice;

		switch (trichoice)
		{
		case '1':
			cout << "Area of Triangle\n\n"
				<< " |\\\n"
				<< " | \\\n"
				<< "h|  \\\n"
				<< "e|   \\\n"
				<< "i|    \\\n"
				<< "g|     \\\n"
				<< "h|      \\\n"
				<< "t|_      \\\n"
				<< " |_|______\\\n\n\n"
				<< "    base\n\n\n"
				<< "Area = ½bh\n\n"
				<< "Input:\n"
				<< "Base: ";
			cin >> a;
			cout << "\nHeight: ";
			cin >> b;

			area = 0.5 * a * b;

			cout << "\n\nArea = " << area << endl;
			break;
		case '2':
			cout << "\n\nHeron's Formula\n\n"
				<< "  	 /\\n"
				<< "    /  \\n"
				<< " A /    \\ B\n"
				<< "  /      \\n"
				<< " /________\\n"
				<< "      C\n\n\n"
				<< "       A + B + C\n"
				<< "S  =  ----------- ; where A, B, C are the sides of the triangle.\n"
				<< "           2\n\n"
				<< "Area = √(S(S - A)(S - B)(S - C))\n\n"
				<< "Input:\n"
				<< "A: ";
			cin >> a;
			cout << "\nB: ";
			cin >> b;
			cout << "\nC: ";
			cin >> c;

			harea = sqrt(s*(s - a)*(s - b)*(s - c));

			cout << "\n\nArea = " << harea << endl;
			break;
		case '3':
			cout << "\nPerimeter\n\n"
				<< "  	 /\\n"
				<< "    /  \\n"
				<< " A /    \\ B\n"
				<< "  /      \\n"
				<< " /________\\n"
				<< "      C\n\n\n"
				<< "Perimeter = A + B + C\n\n"
				<< "Input:\n"
				<< "A: ";
			cin >> a;
			cout << "B: ";
			cin >> b;
			cout << "C: ";
			cin >> c;

			perimeter = a + b + c;

			cout << "\n\nPerimeter = " << perimeter << endl;
			break;
		default: errorFunc();
			break;
		}
	}
	void rect2d()
	{
		double a = 0.0, b = 0.0;
		char rectchoice = ' ';

		cout << "\n\nRECTANGLE + SQUARE Menu\n\n"
			<< "1. Rectangle\n"
			<< "2. Square\n"
			<< "Enter your choice: ";
		cin >> rectchoice;

		if (rectchoice == '1')
		{
			cout << "\n\nPerimeter + Area of Rectangle\n\n"
				<< " __________\n"
				<< "|          |\n"
				<< "|          |\n"
				<< "|__________|\n\n"
				<< "Area = Length * Width\n"
				<< "Perimeter = 2 * (Length + Width)\n\n"
				<< "What is the length of a side?: ";
			cin >> a;
			cout << "\nOther side?: ";
			cin >> b;
			cout << "\n\nArea = " << a * b << endl;
			cout << "Perimeter = " << 2 * (a + b) << endl;
		}
		else if (rectchoice == '2')
		{
			cout << "\n\nPerimeter + Area of Square\n\n"
				<< " ______\n"
				<< "|      |\n"
				<< "|      |\n"
				<< "|______|\n\n"
				<< "Area = Length * 2\n"
				<< "Perimeter = Length * 4\n\n"
				<< "What is the length of the side?: ";
			cin >> a;
			cout << "\n\nArea = " << a * a << endl;
			cout << "Perimeter = " << a * 4 << endl;
		}
		else { errorFunc(); }
	}
	void parallel2d()
	{
		double h = 0.0, b = 0.0, s = 0.0, area = 0.0, perimeter = 0.0;

		cout << "\n\nPARALLELOGRAM Menu\n\n"
			<< "     ______________\n"
			<< "    /|            /\n"
			<< " s / |h          /\n"
			<< "  /__|__________/\n"
			<< "       b\n\n\n"
			<< "Area = b * h\n"
			<< "Perimeter = 2 * (s + b)\n\n"
			<< "What is the height(h)?: ";
		cin >> h;
		cout << "\nBase(b): ";
		cin >> b;
		cout << "\nSide(s): ";
		cin >> s;

		area = b * h;
		perimeter = 2 * (s + b);

		cout << "Area = " << area << endl
			<< "Perimeter = " << perimeter << endl;
	}
	void trape2d()
	{
		double h = 0.0, b1 = 0.0, b2 = 0.0, s1 = 0.0, s2 = 0.0, area = 0.0,
			perimeter = 0.0, perimeter2 = 0.0, ang1 = 0.0, ang2 = 0.0;
		char useangles = ' ';

		cout << "\n\nTRAPEZOID Menu\n\n"
			<< "     ____b1___\n"
			<< "    /|        \\\n"
			<< "s1 / |h        \\s2\n"
			<< "  /ß_|_________Θ\\\n"
			<< "         b2\n\n\n"
			<< "Area = ½ h *(b1 + b2)\n"
			<< "Perimeter = s1 + s2 + b1 + b2\n"
			<< "          = b1 + b2 + h * [csc(Θ) + csc(ß)]\n\n"
			<< "What is the height(h)?: ";
		cin >> h;
		cout << "\nBase 1(b1): ";
		cin >> b1;
		cout << "\nBase 2(b2): ";
		cin >> b2;
		cout << "\nSide 1(s1): ";
		cin >> s1;
		cout << "\nSide 2(s2): ";
		cin >> s2;
		cout << "\nDo you want to use the angles?(Y/N): ";
		cin >> useangles;
		if (useangles == 'Y' || useangles == 'y')
		{
			cout << "Angle 1(Θ): ";
			cin >> ang1;
			cout << "Angle 2(ß): ";
			cin >> ang2;
			cout << "\n\nPerimeter = " << perimeter2 << endl;
		}
		else if (useangles == 'N' || useangles == 'n')
		{
			cout << "Perimeter = " << perimeter << endl;
		}
		else { errorFunc(); }

		area = 0.5 * h * (b1 + b2);
		perimeter = s1 + s2 + b1 + b2;
		perimeter2 = b1 + b2 + h * (asin(ang1) + asin(ang2));

		cout << "Area = " << area << endl;
	}
	void circle2d()
	{
		double radius = 0.0, area = 0.0, circumference = 0.0;
		char circlechoice = ' ';

		cout << "\n\nCIRCLE Menu\n\n"
			<< "\n\nArea + Circumference\n\n"
			<< "A = π * r²\n\n"
			<< "Input:\n"
			<< "Radius: ";
		cin >> radius;

		area = PI * pow(radius, 2.0);
		circumference = 2 * PI * radius;

		cout << "\nArea = " << area << endl
			<< "Circumference = " << circumference << endl;
	}
	void ellipse2d()
	{
		double r1 = 0.0, r2 = 0.0, area = 0.0, circumference = 0.0;

		cout << "\n\nELLIPSE Menu\n\n"
			<< "r1 is the short axis. r2 is the long axis.\n\n"
			<< "Area = π * r1 * r2\n"
			<< "Circumference = 4 * (r1 + r2) * (π / 4)\n\n\n"
			//"Circumference = π * √2 * ((½ * r1)²+(½ * r2)²)\n\n\n"
			<< "Input:\n"
			<< "r1: ";
		cin >> r1;
		cout << "\nr2: ";
		cin >> r2;

		area = PI * r1 * r2;
		circumference = 4 * (r1 + r2) * (PI / 4);

		cout << "\n\nArea = " << area << endl
			<< "Circumference = " << circumference << endl;
	}
	void area3dFunc()
	{
		char area3dchoice = ' ';

		cout << "\n\nVOLUME & SURFACE AREA OF 3D SHAPES Menu\n\n"
			<< "1. Rectangular Prisms\n" //TODO Maybe include General Prisms
			<< "2. Cylinders\n"
			<< "3. Pyramids\n"
			<< "4. Cones\n"
			<< "5. Spheres\n"
			<< "6. Cubes\n"
			<< "7. Torus\n"
			<< "8. Ellipsoid\n\n"
			<< "Enter your choice: ";
		cin >> area3dchoice;

		switch (area3dchoice)
		{
		case '1': rectprism3d();
			break;
		case '2': cylinder3d();
			break;
		case '3': pyramid3d();
			break;
		case '4': cone3d();
			break;
		case '5': sphere3d();
			break;
		case '6': cube3d();
			break;
		case '7': torus3d();
			break;
		case '8': ellipsoid3d();
			break;
		default: errorFunc();
			break;
		}
	}
	void rectprism3d()
	{
		double l = 0.0, w = 0.0, h = 0.0, sa = 0.0, volume = 0.0;

		cout << "\n\nRECTANGULAR PRISM Menu\n\n"
			<< "Volume = l*w*h\n"
			<< "Surface Area = 2*l*w +2*h*w +2*l*h\n\n"
			<< "Input:\n\n"
			<< "L: ";
		cin >> l;
		cout << "\nW: ";
		cin >> w;
		cout << "\nH: ";
		cin >> h;

		volume = l * w * h;
		sa = 2 * l * w + 2 * h * w + 2 * l * h;

		cout << "\n\nV = " << volume << endl
			<< "SA = " << sa << endl;
	}
	void cylinder3d()
	{
		double r = 0.0, h = 0.0, C = 0.0, B = 0.0, sa = 0.0, volume = 0.0;
		char cylinderchoice = ' ';

		cout << "\n\nCYLINDER Menu\n\n"
			<< "Volume = Base * Height\n"
			<< "Surface Area = 2 * Base + Circumference * Height\n\n\n"
			<< "Input:\n\n"
			<< "Radius: ";
		cin >> r;
		cout << "\nHeight: ";
		cin >> h;

		B = PI * pow(r, 2);
		C = 2 * PI * r;
		volume = B * h;
		sa = 2 * B + C * h;

		cout << "\n\nV = " << volume << endl
			<< "SA = " << sa << endl;
	}
	void pyramid3d()
	{
		double r = 0.0, h = 0.0, sh = 0.0, sa = 0.0, volume = 0.0;

		cout << "\n\nPYRAMID Menu\n\n"
			<< "         1\n"
			<< "Volume = - * Base * Height\n"
			<< "         3\n"
			<< "Surface Area = Base + ½ * Perimeter * Slant Height\n\n"
			<< "Input:\n\n"
			<< "Radius: ";
		cin >> r;
		cout << "\nSlant Height: ";
		cin >> sh;
		cout << "\nHeight: ";
		cin >> h;

		volume = (1 / 3) * PI * pow(r, 2) * h;
		sa = PI * pow(r, 2) + (1 / 2) * (2 * PI * r) * sh;

		cout << "\n\nV = " << volume << endl
			<< "SA = " << sa << endl;
	}
	void cone3d()
	{
		double r = 0.0, h = 0.0, sh = 0.0, sa = 0.0, volume = 0.0;

		cout << "\n\nCONE Menu\n\n"
			<< "         1\n"
			<< "Volume = - * Base * Height\n"
			<< "         3\n"
			<< "Surface Area = Base + ½ * Circumference * Slant Height\n\n"
			<< "Input:\n\n"
			<< "Radius: ";
		cin >> r;
		cout << "\nSlant Height: ";
		cin >> sh;
		cout << "\nHeight: ";
		cin >> h;

		volume = (1 / 3) * PI * pow(r, 2) * h;
		sa = PI * pow(r, 2) + (1 / 2) * (2 * PI * r) * sh;

		cout << "\n\nV = " << volume << endl
			<< "SA = " << sa << endl;
	}
	void sphere3d()
	{
		double r = 0.0, volume = 0.0, sa = 0.0;

		cout << "\n\nSPHERE Menu\n\n"
			<< "         4\n"
			<< "Volume = -  * π * r³\n"
			<< "         3\n"
			<< "SA = 4 * π * r²\n\n"
			<< "Input:\n\n"
			<< "Radius: ";
		cin >> r;

		volume = (4 / 3) * PI * pow(r, 3);
		sa = 4 * PI * pow(r, 2);

		cout << "\n\nVolume = " << volume << endl
			<< "Surface Area = " << sa << endl;
	}
	void cube3d()
	{
		double s = 0.0, volume = 0.0, sa = 0.0;

		cout << "\n\nCUBE Menu\n\n"
			<< "Volume = s³\n"
			<< "Surface Area = 6 * s²\n\n"
			<< "Input:\n\n"
			<< "Side: ";
		cin >> s;

		volume = pow(s, 3);
		sa = 6 * pow(s, 2);

		cout << "\n\nVolume = " << volume << endl
			<< "\nSurface Area = " << sa << endl;
	}
	void torus3d()
	{
		double r = 0.0, R = 0.0, volume = 0.0, sa = 0.0;

		cout << "\n\nTORUS Menu\n\n"
			<< "Volume = (2 * π²) * (Major Radius) * (Minor Radius)²)\n"
			<< "Surface Area = 4 * π² * (Major Radius) * (Minor Radius)\n\n"
			<< "Input:\n\n"
			<< "Minor Radius: ";
		cin >> r;
		cout << "\nMajor Radius: ";
		cin >> R;

		volume = 2 * pow(PI, 2) * pow(r, 2) * R;
		sa = 4 * pow(PI, 2) * R * r;

		cout << "\n\nVolume = " << volume << endl
			<< "\nSurface Area = " << sa << endl;
	}
	void ellipsoid3d()
	{
		double x = 0.0, y = 0.0, z = 0.0, volume = 0.0, sa = 0.0;

		cout << "\n\nELLIPSOID Menu\n\n"
			<< "         4\n"
			<< "Volume = - * π * x * y * z\n"
			<< "Surface Area = [Too Complicated To Write]\n\n"
			<< "Input:\n\n"
			<< "x: ";
		cin >> x;
		cout << "\ny: ";
		cin >> y;
		cout << "\nz: ";
		cin >> z;

		volume = (4 / 3) * PI * x * y * z;
		sa = 4 * PI * pow((1 / 3)*(pow(x * y, 1.6) + pow(x * z, 1.6) + pow(y*z, 1.6)), 1 / 1.6);

		cout << "\n\nVolume = " << volume << endl
			<< "Surface Area = " << sa << endl;
	}
	void circleFunc()
	{
		char circchoice = ' ';

		cout << "\n\nALL ABOUT CIRCLES(Kinda) Menu\n\n"
			<< "1. Arc Measure\n"
			<< "2. Area of a Sector\n"
			<< "3. Equations of a Circle\n"
			<< "4. Area + Circumference\n\n"
			<< "Enter your choice: ";
		cin >> circchoice;

		switch (circchoice)
		{
		case '1': arcmeasure();
			break;
		case '2': sectorarea();
			break;
		case '3': circeq();
			break;
		case '4': circle2d();
			break;
		default: errorFunc();
			break;
		}
	}
	void arcmeasure()
	{
		string category = " ";
		double r = 0.0, n = 0.0, s = 0.0;

		cout << "\n\nARC MEASURE Menu\n"
			<< "Angles are in Degrees\n"
			<< "The central angle is Θ.\n\n"
			<< "       Θ\n"
			<< "S = ------- * (2 * π * r)\n"
			<< "      360  \n\n"
			<< "Input:\n"
			<< "Radius: ";
		cin >> r;
		cout << "\nCentral Angle: ";
		cin >> n;
		cout << "\n\nArc Measure = " << s;

		if (n > 0 && n < 180)
		{
			category = "Minor Arc";
		}
		else if (n > 180 && n < 360)
		{
			category = "Major Arc";
		}
		else if (n == 180)
		{
			category = "Semicircle";
		}
		else { errorFunc(); }

		s = (n / 360) * (2 * PI * r);

		cout << "\n\nS = " << s << ": " << category;
	}
	void sectorarea()
	{
		double ang = 0.0, r = 0.0, area = 0.0;

		cout << "\n\nArea of Sector\n"
			<< "Angle is expected to be in Radians (Decimal form upto 3 places)\n\n"
			<< "A = ½ * r² * Θ\n\n"
			<< "Input:\n\n"
			<< "Θ: ";
		cin >> ang;
		cout << "\nr: ";
		cin >> r;

		area = (1 / 2) * pow(r, 2) * ang;

		cout << "\n\nArea = " << area << endl;
	}
	void circeq()
	{
		double h = 0.0, k = 0.0, r = 0.0;

		cout << "\n\nEQUATIONS OF A CIRCLE Menu\n\n"
			<< "(x - h)² + (y - k)² = r²\n\n"
			<< "Input:\n\n"
			<< "h: ";
		cin >> h;
		cout << "\nk: ";
		cin >> k;
		cout << "\nr: ";
		cin >> r;
		cout << "\n\n(x - " << h << ")² + (y -" << k << ")² = " << pow(r, 2) << endl;
	}
	void transFunc()
	{
		char transchoice = ' ';

		cout << "\n\nTRANSFORMATION Menu\n\n"
			<< "1. Rotations\n"
			<< "2. Translation\n"
			<< "3. Reflection\n"
			<< "4. Dilation\n\n"
			<< "Enter your choice: ";
		cin >> transchoice;

		switch (transchoice)
		{
		case '1': rotate();
			break;
		case '2': translate();
			break;
		case '3': reflect();
			break;
		case '4': dilation();
			break;
		default: errorFunc();
			break;
		}
	}
	void rotate()
	{
		float x1 = 0.0, y1 = 0.0, x2 = 0.0, y2 = 0.0;
		char rotatechoice = ' ';

		cout << "\n\nROTATION Menu\n\n"
			<< "1. 90° Counterclockwise\n"
			<< "2. 180° Counterclockwise\n"
			<< "3. 270° Counterclockwise\n\n"
			<< "Enter your choice: ";
		cin >> rotatechoice;

		if (rotatechoice == '1')
		{
			cout << "\n\n90° Counterclockwise\n\n"
				<< "X-Coordinate: ";
			cin >> x1;
			cout << "\nY-Coordinate: ";
			cin >> y1;

			x2 = -1 * y1;
			y2 = x1;

			cout << "\n\nOriginal: (" << x1 << " , " << y1 << ")" << endl;
			cout << "\n\nNew: (" << x2 << " , " << y2 << ")" << endl;
		}
		else if (rotatechoice == '2')
		{
			cout << "\n\n180° Counterclockwise\n\n"
				<< "X-Coordinate: ";
			cin >> x1;
			cout << "\nY-Coordinate: ";
			cin >> y1;

			x2 = -1 * x1;
			y2 = -1 * y1;

			cout << "\n\nOriginal: (" << x1 << " , " << y1 << ")" << endl;
			cout << "\n\nNew: (" << x2 << " , " << y2 << ")" << endl;
		}
		else if (rotatechoice == '3')
		{
			cout << "\n\n270° Counterclockwise\n\n"
				<< "X-Coordinate: ";
			cin >> x1;
			cout << "\nY-Coordinate: ";
			cin >> y1;

			x2 = y1;
			y2 = -1 * x1;

			cout << "\n\nOriginal: (" << x1 << " , " << y1 << ")" << endl;
			cout << "\n\nNew: (" << x2 << " , " << y2 << ")" << endl;
		}
		else { errorFunc(); }
	}
	void translate()
	{
		double x1 = 0.0, y1 = 0.0, x2 = 0.0, y2 = 0.0, move = 0.0;
		char transchoice = ' ';

		cout << "\n\nTRANSLATION Menu\n\n"
			<< "1. UP\n"
			<< "2. DOWN\n"
			<< "3. LEFT\n"
			<< "4. RIGHT\n\n"
			<< "Enter your choice: ";
		cin >> transchoice;

		if (transchoice == '1')
		{
			cout << "\n\nUpward Translation\n\n"
				<< "X-Coordinate: ";
			cin >> x1;
			cout << "\nY-Coordinate: ";
			cin >> y1;
			cout << "\nUnits to move up: ";
			cin >> move;

			y2 = y1 + move;

			cout << "\n\nOriginal: (" << x1 << " , " << y1 << ")" << endl;
			cout << "\n\nNew: (" << x1 << " , " << y2 << ")" << endl;
		}
		else if (transchoice == '2')
		{
			cout << "\n\nDownward Translation\n\n"
				<< "X-Coordinate: ";
			cin >> x1;
			cout << "\nY-Coordinate: ";
			cin >> y1;
			cout << "\nUnits to move down: ";
			cin >> move;

			y2 = y1 - move;

			cout << "\n\nOriginal: (" << x1 << " , " << y1 << ")" << endl;
			cout << "\n\nNew: (" << x1 << " , " << y2 << ")" << endl;
		}
		else if (transchoice == '3')
		{
			cout << "\n\nLeftward Translation\n\n"
				<< "X-Coordinate: ";
			cin >> x1;
			cout << "\nY-Coordinate: ";
			cin >> y1;
			cout << "\nUnits to move left: ";
			cin >> move;

			x2 = x1 - move;

			cout << "\n\nOriginal: (" << x1 << " , " << y1 << ")" << endl;
			cout << "\n\nNew: (" << x2 << " , " << y1 << ")" << endl;
		}
		else if (transchoice == '4')
		{
			cout << "\n\nRightward Translation\n\n"
				<< "X-Coordinate: ";
			cin >> x1;
			cout << "\nY-Coordinate: ";
			cin >> y1;
			cout << "\nUnits to move right: ";
			cin >> move;

			x2 = x1 + move;

			cout << "\n\nOriginal: (" << x1 << " , " << y1 << ")" << endl;
			cout << "\n\nNew: (" << x2 << " , " << y1 << ")" << endl;
		}
		else { errorFunc(); }
	}
	void reflect()
	{
		double x1 = 0.0, y1 = 0.0, x2 = 0.0, y2 = 0.0;
		char reflectchoice = ' ';

		cout << "\n\nREFLECTION Menu\n\n"
			<< "1. Reflection across the x-axis\n"
			<< "2. Reflection across the y-axis\n"
			<< "3. Reflection across y = x\n"
			<< "4. Reflection across y = -x\n\nS"
			<< "Enter your choice: ";
		cin >> reflectchoice;

		if (reflectchoice == '1')
		{
			cout << "\n\nAcross x-axis\n\n"
				<< "X-Coordinate: ";
			cin >> x1;
			cout << "\nY-Coordinate: ";
			cin >> y1;

			y2 = -1 * y1;

			cout << "\n\nOriginal: (" << x1 << " , " << y1 << ")" << endl;
			cout << "\n\nNew: (" << x1 << " , " << y2 << ")" << endl;
		}
		else if (reflectchoice == '2')
		{
			cout << "\n\nAcross y-axis\n\n"
				<< "X-Coordinate: ";
			cin >> x1;
			cout << "\nY-Coordinate: ";
			cin >> y1;

			x2 = -1 * x1;

			cout << "\n\nOriginal: (" << x1 << " , " << y1 << ")" << endl;
			cout << "\n\nNew: (" << x2 << " , " << y1 << ")" << endl;
		}
		else if (reflectchoice == '3')
		{
			cout << "\n\nAcross y = x\n\n"
				<< "X-Coordinate: ";
			cin >> x1;
			cout << "\nY-Coordinate: ";
			cin >> y1;

			x2 = y1;
			y2 = x1;

			cout << "\n\nOriginal: (" << x1 << " , " << y1 << ")" << endl;
			cout << "\n\nNew: (" << x2 << " , " << y2 << ")" << endl;
		}
		else if (reflectchoice == '4')
		{
			cout << "\n\nAcross y = -x\n\n"
				<< "X-Coordinate: ";
			cin >> x1;
			cout << "\nY-Coordinate: ";
			cin >> y1;

			x2 = -1 * y1;
			y2 = -1 * x2;

			cout << "\n\nOriginal: (" << x1 << " , " << y1 << ")" << endl;
			cout << "\n\nNew: (" << x2 << " , " << y2 << ")" << endl;
		}
	}
	void dilation()
	{
		double x1 = 0.0, y1 = 0.0, x2 = 0.0, y2 = 0.0, rate = 0.0;

		cout << "\n\nDILATION Menu\n\n"
			<< "X-Coordinate: ";
		cin >> x1;
		cout << "\nY-Coordinate: ";
		cin >> y1;
		cout << "\nScale Factor: ";
		cin >> rate;

		x2 = x1 * rate;
		y2 = y1 * rate;

		cout << "\n\nOriginal: (" << x1 << " , " << y1 << ")" << endl;
		cout << "\n\nNew: (" << x2 << " , " << y2 << ")" << endl;
	}

	// TODO very confusing to code - work on - SeqFunc
	void seqFunc()
	{
		double a1 = 0.0, r = 0.0, n = 0.0, sum = 0.0, n1 = 0.0, n2 = 0.0;
		char seqchoice = ' ', geocho = ' ';
		;

		cout << "\n\nSEQUENCES\n\n"
			<< "1. Geometric Sequence + Sum\n"
			<< "2. Arithmetic Sequence\n"
			<< "Enter your choice: ";
		cin >> seqchoice;

		switch (seqchoice)
		{
		case '1':
			cout << "\n\nGEOMETRIC SEQUENCE\n\n" //TODO Fix & Add SUM
				<< "1. Input\n"
				<< "2. Solve for Sequence\n\n"
				<< "Enter your choice: ";
			cin >> geocho;

			if (geocho == '1')
			{
				cout << "\n\nInput:\n\n"
					<< "a(1): ";
				cin >> a1;
				cout << "\nr: ";
				cin >> r;
				cout << "\nn: ";
				cin >> n;
				cout << "\n\na(n) = " << a1 << " * " << r << "^ (" << n - 1 << ")";
			}
			else if (geocho == '2')
			{
				cout << "\n\nEnter a term (n = 1): ";
				cin >> n1;
				cout << "\nConsecutive term (n = 2): ";
				cin >> n2;

				r = n2 / n1;

				cout << "\n\na(n) = " << a1 << " * " << r << "^ (" << n - 1 << ")";
			}
			break;
		case '2':
			cout << "\n\nARITHMETIC SEQUENCE\n\n"
				<< "";
			break;
		default: errorFunc();
			break;
		}
	}
	void quadFunc()
	{
		double a = 0.0, b = 0.0, c = 0.0, rad = 0.0;
		rad = sqrt(pow(b, 2) - 4 * a * c);

		cout << "\n\nQUADRATIC EQUATION\n\n"
			<< "    -b ± √(b² - 4ac)\n"
			<< "x = ----------------\n"
			<< "          2a\n\n"
			<< "Input:\n\n"
			<< "a: ";
		cin >> a;
		cout << "\nb: ";
		cin >> b;
		cout << "\nc: ";
		cin >> c;
		cout << "    -" << b << " ± " << rad << "\n"
			<< "x = ----------------\n"
			<< "          " << 2 * a << "\n\n";
	}
	void coorFunc()
	{
		double x1 = 0.0, y1 = 0.0, x2 = 0.0, y2 = 0.0,
			distance = 0.0, midx = 0.0, midy = 0.0;
		;
		char coorchoice = ' ';

		cout << "\n\nCOORDINATE GEOMETRY Menu\n\n"
			<< "1. Distance Formula\n"
			<< "2. Midpoint Formula\n"
			<< "3. Slope\n\n"
			<< "Enter your choice: ";
		cin >> coorchoice;

		if (coorchoice == '1')
		{
			cout << "\n\nDISTANCE FORMULA\n\n"
				<< "Input:\n\n"
				<< "x1: ";
			cin >> x1;
			cout << "\ny1: ";
			cin >> y1;
			cout << "\nx2: ";
			cin >> x2;
			cout << "\ny2: ";
			cin >> y2;

			distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

			cout << "\n\n" << distance << endl;
		}
		else if (coorchoice == '2')
		{
			cout << "\n\nMIDPOINT FORMULA\n\n"
				<< "Input:\n\n"
				<< "x1: ";
			cin >> x1;
			cout << "\ny1: ";
			cin >> y1;
			cout << "\nx2: ";
			cin >> x2;
			cout << "\ny2: ";
			cin >> y2;

			midx = (x1 + x2) / 2;
			midy = (y1 + y2) / 2;

			cout << "\n\n(" << midx << " , " << midy << ")" << endl;
		}
		else if (coorchoice == '3')
		{
			cout << "\n\nSLOPE\n\n"
				<< "Input:\n\n"
				<< "x1: ";
			cin >> x1;
			cout << "\ny1: ";
			cin >> y1;
			cout << "\nx2: ";
			cin >> x2;
			cout << "\ny2: ";
			cin >> y2;

			cout << "\n\n           " << y2 - y1
				<< "\nSlope = ---"
				<< "\n " << x2 - x1;
		}
		else { errorFunc(); }
	}
	void expFunc()
	{
		double p = 0.0, e = 2.7182818, k = 0.0, t = 0.0, finalp = 0.0;

		cout << "\n\nEXPONENTIAL GROWTH/DECAY\n\n"
			<< "A = P * e ^ (r * t)\n\n"
			<< "Input:\n\n"
			<< "P: ";
		cin >> p;
		cout << "\nk: ";
		cin >> k;
		cout << "\nt: ";
		cin >> t;

		finalp = p * pow(e, k * t);

		cout << "\n\nP =" << p << "e ^ (" << k * t << ")"
			<< "\nP = " << fixed << setprecision(3) << finalp;
	}
	void vectorFunc()
	{
		double x1 = 0.0, x2 = 0.0, y1 = 0.0, y2 = 0.0, mag = 0.0, ang = 0.0;
		char vecchoice = ' ';

		cout << "\n\nVECTOR\n"
			<< "Find Magnitude + Direction\n\n"
			<< "Input:\n\n"
			<< "x1: ";
		cin >> x1;
		cout << "\ny1: ";
		cin >> y1;
		cout << "\nx2: ";
		cin >> x2;
		cout << "\ny2: ";;
		cin >> y2;

		mag = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
		ang = atan((y2 - y1) / (x2 - x1));
		ang *= 180 / PI;

		cout << "\n\nMagnitude = " << mag << endl
			<< "Direction = " << ang << "°" << endl;
	}
	void measureFunc()
	{
		cout << "\n\nDifferent types of Useful Measurements\n\n"
			<< "1 inch = 2.54 centimeters\t"
			<< "1 kilometer = 0.62 mile\n"
			<< "1 cup = 8 fluid ounces\t\t"
			<< "1 meter = 39.37 inches\n"
			<< "1 pound = 16 ounces\t\t"
			<< "1 pint = 2 cups\n"
			<< "1 mile = 5,280 feet\t\t"
			<< "1 pound = 0.454 kilogram\n"
			<< "1 quart = 2 pints\t\t"
			<< "1 mile = 1,760 yards\n"
			<< "1 kilogram = 2.2 pounds\t\t"
			<< "1 gallon = 4 quarts\n"
			<< "1 mile = 1.609 kilometers\t"
			<< "1 ton = 2,000 pounds\n"
			<< "1 gallon = 3.785 liters\t\t"
			<< "1 liter = 0.264 gallon\n"
			<< "1 liter = 1,000 cubic centimeters\n";
	}
};

class Calculus {
public:
	// TODO Stopped before finished.
	void derivFunc()
	{
		double base = 0.0, exp = 0.0;
		char repeat = ' ';

		cout << "\n\nDERIVATIVE Menu\n"
			<< "Can only do term by term\n\n";

		do
		{
			cout << "\n\nBase: ";
			cin >> base;
			cout << "\nExponent: ";
			cin >> exp;
			cout << "\n\n" << base * exp << "x ^ (" << exp - 1 << ")";

			cout << "\n\nWould you like to do another term?: ";
			cin >> repeat;
		} while (repeat == 'y' || repeat == 'Y');
	}
	void integralFunc()
	{
		char repeat = ' ';

		cout << "\n\nINTEGRAL Menu\n"
			<< "Can only do term by term\n\n";

		do
		{
			cout << ""
				<< "\n\nWould you like to do another term?: ";
			cin >> repeat;
		} while (repeat == 'y' || repeat == 'Y');
	}
};

// Specific Math Menus
char AlgebraMenu()
{

}
char TrigMenu()
{

}
char GeometryMenu()
{

}
char CalculusMenu()
{

}

// Menu
char showMenu()
{
	char choice = ' ';
	char MATH_MENU = '1',
		SCIENCE_MENU = '2',
		EXIT_CHOICE = 'E';

		cout << "\t\tMAIN MENU\n\n"
			<< "1. Mathematics Menu\n"
			<< "2. Science Menu\n"
			<< "E. EXIT\n\n"
			<< "Enter your choice: ";
		cin >> choice;

		if (choice == MATH_MENU){
			showMath();
		} else if (choice == SCIENCE_MENU) {
			showScience();
		} else if (choice == EXIT_CHOICE) { endFunc(); }
		else { errorFunc(); }
		return choice;
}

char showMath()
{
	system("CLS"); // Clears the Previous Screen

	char choice1 = ' ';
	char ALGEBRA_CHOICE = '1',
		TRIGONOMETRY_CHOICE = '2',
		GEOMETRY_CHOICE = '3',
		CALCULUS_CHOICE = '4',
		EXIT_CHOICE = 'E';

	cout << "\t\tMATHEMATICS Menu\n\n"
		<< "1. Algebra\n"
		<< "2. Trigonometry\n"
		<< "3. Geometry\n"
		<< "4. Calculus\n\n"
		<< "E. EXIT\n\n"
		<< "Enter your choice: ";
	cin >> choice1;

	if (choice1 == ALGEBRA_CHOICE)
	{
		system("CLS"); // Clears the Previous Screen

		Algebra alg;

		char choice2 = ' ';

		cout << "\n\t\tALGEBRA Menu\n\n"
			<< "1. Addition\n"
			<< "2. Subtraction\n"
			<< "3. Multiplication\n"
			<< "4. Division\n\n"
			<< "E. EXIT\n\n"
			<< "Enter your choice: ";
		cin >> choice2;

		// Algebra Choices
		switch (choice2)
		{
		case '1': alg.additionFunc();
			break;
		case '2': alg.subtractionFunc();
			break;
		case '3': alg.multiplicationFunc();
			break;
		case '4': alg.divisionFunc();
			break;
		case 'E':
		case 'e': endFunc();
			break;
		default: cout << "Error: Enter one of the choices correctly.";
			break;
		}
	}
	else if (choice1 == TRIGONOMETRY_CHOICE)
	{
		system("CLS"); // TODO Use this in all presented functions

		Trigonometry trig;

		char choice3 = ' ';

		cout << "\n\t\tTRIGONOMETRY Menu\n"
			<< "\tThere is NO graphing in this program.\n"
			<< "\t\tANGLES ARE IN DEGREES\n\n"
			<< "1. Angle Compuatation & Conversion\n"
			<< "2. Reference/Coterminal Angles\n"
			<< "3. Trigonometric Identities\n"
			<< "4. Law of Sines/Law of Cosines/Law of Tangents\n"
			<< "5. Polar Coordinates\n"
			<< "E. EXIT\n\n"
			<< "Enter your choice: ";
		cin >> choice3;

		// Trig Choices
		switch (choice3)
		{
		case '1': trig.angleFunc();
			break;
		case '2': trig.refFunc();
			break;
		case '3': trig.identityFunc();
			break;
		case '4': trig.lawFunc();
			break;
		case '5': trig.polarFunc();
			break;
		case 'E':
		case 'e': endFunc();
			break;
		default: errorFunc();
			break;
		}
	}
	else if (choice1 == GEOMETRY_CHOICE)
	{
		system("CLS");

		Geometry geo;

		char choice3 = ' ';

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
			<< "E. EXIT\n\n"
			<< "Enter your choice: ";
		cin >> choice3;

		switch (choice3)
		{
		case '1': geo.area2dFunc();
			break;
		case '2': geo.area3dFunc();
			break;
		case '3': geo.circleFunc();
			break;
		case '4': geo.transFunc();
			break;
		case '5': geo.seqFunc();
			break;
		case '6': geo.quadFunc();
			break;
		case '7': geo.coorFunc();
			break;
		case '8': geo.expFunc();
			break;
		case '9': geo.vectorFunc();
			break;
		case '0': geo.measureFunc();
			break;
		case 'E':
		case 'e': endFunc();
			break;
		default:
			break;
		}
	}
	else if (choice1 == CALCULUS_CHOICE)
	{
		system("CLS");

		Calculus calc;

		char calcchoice = ' ';

		cout << "\n\t\tCALCULUS Menu\n\n"
			<< "1. Derivatives\n"
			<< "2. Integrals\n\n"
			<< "Enter your choice: ";
		cin >> calcchoice;

		switch (calcchoice)
		{
		case '1': calc.derivFunc();
			break;
		case '2': calc.integralFunc();
			break;
		default: errorFunc();
			break;
		}
	}
	else if (choice1 == EXIT_CHOICE) { endFunc(); }
	else { errorFunc(); }
	return choice1;
}

char showScience()
{
	system("CLS"); // Clears the Previous Screen

	char choice = ' ';
	char PHYSICS_CHOICE = '1',
		CHEMISTRY_CHOICE = '2',
		ASTROLOGY_CHOICE = '3',
		EXIT_CHOICE = '4';

		cout << "\t\tSCIENCE Menu\n\n"
		<< "1. Physics\n"
		<< "2. Chemistry\n"
		<< "3. Astrology\n\n"
		<< "E. EXIT\n\n"
		<< "Enter your choice: ";
		cin >> choice;

		if (choice == PHYSICS_CHOICE) {

		} else if (choice == CHEMISTRY_CHOICE) {

		} else if (choice == ASTROLOGY_CHOICE) {

		} else if (choice == EXIT_CHOICE) { endFunc(); }
		else { errorFunc(); }
		return choice;
}
