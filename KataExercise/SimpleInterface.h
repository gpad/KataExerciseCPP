#pragma once

class SimpleInterface	
{
public:
	virtual ~SimpleInterface(){}

	virtual void F1() = 0;
	virtual int F2(int v) = 0;

};