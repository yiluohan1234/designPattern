/*************************************************************************
	> File Name: main.cpp
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年05月30日 星期一 10时04分44秒
 ************************************************************************/

#include <iostream>
#include "IStrategy.h"
#include "Context.h"
#include "BackDoor.h"
#include "GivenGreenLight.h"
#include "BlockEnemy.h"
using std::cout;
using std::endl;

int main()
{
	CContext *pContext;
	
	cout << "\14\n\17" << endl;
	cout << "-------刚到吴国的时候拆第一个--------" << endl;
	pContext = new CContext(new CBackDoor());
	pContext->Operate();
	delete pContext;

	cout << "\14\n\17" << endl;
	cout <<"--------刘备乐不思蜀了，拆第二个了--------" << endl;
	pContext = new CContext(new CGivenGreenLight());
	pContext->Operate();
	delete pContext;

	cout << "\14\n\17" << endl;
	cout <<"--------孙权的小兵追了，咋办？拆第三个--------" << endl;
	pContext = new CContext(new CBlockEnemy());
	pContext->Operate();
	delete pContext;
	return 0;
}
