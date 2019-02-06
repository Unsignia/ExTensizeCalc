#include "header.h"

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
// Geometry Function Prototypes
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
void triangle2d();
void rect2d();
void parallel2d();
void trape2d();
void circle2d();
void ellipse2d();
void rectprism3d();
void cylinder3d();
void pyramid3d();
void cone3d();
void sphere3d();
void cube3d();
void torus3d();
void ellipsoid3d();
void arcmeasure();
void sectorarea();
void circeq();

void rotate();
void translate();
void reflect();
void dilation();
// Calculus Function Prototypes
void derivFunc();
void integralFunc();

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
