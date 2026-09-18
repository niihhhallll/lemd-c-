#include <iostream>
#include <string>
#define DEBUG(x) std::cout << "--DEBUG--" <<  x << "\n" << "--DEBUG END--" << std::endl;
namespace CalCulator
{
    // global variables
    int Num1 = 0;
    int Num2 = 0;

    void Print()
    {
        std::cout << "Welcome, To Calculator." << std::endl;
        std::cout << "Enter A Arthematic operation." << std::endl;
        std::cout << "\n\n";
    }

    std::string Input()
    {
        std::cout << "> " << std::endl;
        std::string input;
        std::getline(std::cin,input);
        return input;
    }

    int Calculate(std::string& Num)
    {
        if(Num.find("+") != std::string::npos)
        {
            // 901 + 10
            // int a = 0 * 10 + 9 = 9
            // a = 9 * 10 + 0 = 90
            // a = 90 * 10 + 1
            bool IsFirstTime = false;
            int TempNum = 0;
            for(auto a : Num)
            {
                if(a != ' ')
                {
                    TempNum = TempNum * (a - '0');
                    DEBUG(Num1);
                }
                else if (a == ' ' || a == '\0')
                {
                    if(!IsFirstTime)
                    {
                        IsFirstTime = true;
                        Num1 = TempNum;
                        DEBUG(TempNum)
                    }
                    else
                    {
                        Num2 = TempNum;
                        DEBUG(TempNum)
                    }
                }
            }
            return Num1 + Num2;
        }
        return 1;
    }

}

int main()
{
    CalCulator::Print();
   std:: string  a = CalCulator::Input();
 int b = CalCulator::Calculate(a);
std::cout << b << std::endl;
 return 0;
}
