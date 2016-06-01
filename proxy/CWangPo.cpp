/*************************************************************************
	> File Name: CWangPo.cpp
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年05月31日 星期二 10时05分09秒
 ************************************************************************/

#include <iostream>
#include "CWangPo.h"
using namespace std;
CWangPo::CWangPo(IKindWomen *pKind)
{
	this->m_p = pKind;
}
CWangPo::~CWangPo(void)
{
	delete m_p;
}
void CWangPo::MakeEyesWithMan(void)
{
	this->m_p->MakeEyesWithMan();
}
void CWangPo::HappyWithMan(void)
{
	this->m_p->HappyWithMan();
}

