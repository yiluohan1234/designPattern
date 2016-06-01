/*************************************************************************
	> File Name: Context.cpp
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年05月30日 星期一 09时46分59秒
 ************************************************************************/

#include "IStrategy.h"
#include "Context.h"
CContext::CContext(IStrategy *pStrategy)
{
	this->m_pStrategy = pStrategy;
}

CContext::~CContext(void)
{
	delete this->m_pStrategy;
}

void CContext::Operate(void)
{
	this->m_pStrategy->Operate();
}
