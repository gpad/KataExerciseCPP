#include "stdafx.h"
#include "SimpleObject.h"


SimpleObject::SimpleObject(int value, SimpleInterface *service)
	:_value(value), _service(service)
{
}


SimpleObject::~SimpleObject()
{
}
