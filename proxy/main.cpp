/*************************************************************************
	> File Name: main.cpp
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年05月31日 星期二 10时08分08秒
 ************************************************************************/

#include <iostream>
#include "CPanJinLian.h"
#include "CJiaShi.h"
#include "CWangPo.h"
using namespace std;

void DoPanJinLian()
{
	CWangPo *p = new CWangPo(new CPanJinLian());
	p->MakeEyesWithMan();
	p->HappyWithMan();
	delete p;

}
void DoJiaShi()
{
	CWangPo *p = new CWangPo(new CJiaShi());
	p->MakeEyesWithMan();
	p->HappyWithMan();
	delete p;
}
int main()
{
	DoPanJinLian();

	DoJiaShi();
	return 0;
}
