#ifdef MATHFUNCSDLL_EXPORTS
#define MATHFUNCSDLL_API __declspec(dllexport)
#else
#define MATHFUNCSDLL_API __declspec(dllimport)
#endif

namespace MathFuncs
{
	// This class is exported from the MathFuncsDll.dll
	class MyMathFuncs
	{
	public:
		// return 4. * std::sqrt(std::pow(d1 / 2., 2.) + std::pow(d2 /2., 2.));
		static MATHFUNCSDLL_API double Perimetr(double a, double b);
		//  return .5 * d1 * d2;
		static MATHFUNCSDLL_API double Ploshad(double a, double b);
	};
}