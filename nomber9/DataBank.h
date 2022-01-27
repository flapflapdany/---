#pragma once
ref class DataBank
{
public:
	static double N;//количество итераций
	static double XN;//правая граница
	static double Xnreality;
	static double Vn;

	static double Smax;
	static double Smin;
	static double xSmax;
	static double xSmin;

	static double SumStepincrease;
	static double SumStepdecrease;

	static double Hmax;
	static double Hmin;
	static double xHmax;
	static double xHmin;

	DataBank(int N, double XN, double Xnreality, double Vn, double Smax, double Smin, double xSmax, double xSmin, double SumStepincrease, double SumStepdecrease, double Hmax, double Hmin, double xHmax, double xHmin)
	{
		this->N = N;
		this->XN = XN;
		this->Xnreality = Xnreality;
		this->Vn = Vn;
		this->Smax = Smax;
		this->Smin = Smin;
		this->xSmax = xSmax;
		this->xSmin = xSmin;
		this->SumStepincrease = SumStepincrease;
		this->SumStepdecrease = SumStepdecrease;
		this->Hmax = Hmax;
		this->Hmin = Hmin;
		this->xHmax = xHmax;
		this->xHmin = xHmin;
	}
};