#include "pch.h"
#include "MathFuncsDll.h"
#include <stdexcept>
#include <cmath>

using namespace std;
namespace MathFuncs
{
	double MyMathFuncs::Perimetr(double d1, double d2)
	{
		return 4. * sqrt(pow(d1 / 2., 2.) + pow(d2 / 2., 2.));
	}
	double MyMathFuncs::Ploshad(double d1, double d2)
	{
		return .5 * d1 * d2;
	}
}