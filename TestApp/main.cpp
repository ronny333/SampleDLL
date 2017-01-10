#include <iostream>
#include "../SampleDLL/SampleDll.h"

int main()
{
	Test obj;
	std::cout << "GetVar -> var : "<<obj.GetVar()<<std::endl;
	std::cout << (obj.SetVar(4)?"SetVar:Sucess":"SetVar:Fail")<< std::endl;
	std::cout << "GetVar -> var : " << obj.GetVar() << std::endl;
	return 0;
}