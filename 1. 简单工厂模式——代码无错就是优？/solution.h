

using namespace std;
#include "string"

class Operation
{
public:
    double GetResult(double num1, double num2, string operate)
    {
        double result=0;

        if(operate=="+")
        {
            result=num1+num2;
        }
        else if(operate=="-")
        {
            result=num1-num2;
        }
        else if(operate=="*")
        {
            result=num1*num2;
        }
        else if(operate=="/")
        {
            result=num1/num2;
        }
        else 
        {
            result=-1;
        }

        return result;

    }
};

