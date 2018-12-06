#pragma once

#include "SimpleInterface.h"

class DLL_EXPORT SimpleObject
{
	int _value;
	SimpleInterface *_service;
public:
	SimpleObject(int value, SimpleInterface *service);
	virtual ~SimpleObject();

	int GetValue() { return _value; }
	void CallService1() { _service->F1(); }
	int CallService2() { return _service->F2(_value);  }
};

