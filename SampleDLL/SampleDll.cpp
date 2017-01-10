#include "SampleDll.h"

BOOL Test::SetVar(int value)
{
	var = value;
	return TRUE;
}

INT Test::GetVar()
{
	return var;
}