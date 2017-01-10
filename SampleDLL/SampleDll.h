#pragma once
#include <Windows.h>
class Test
{
private:
	int var;
public:
	Test():var(0)
	{
		
	}
	__declspec(dllexport) BOOL SetVar(int value);
	__declspec(dllexport) INT GetVar();

};
