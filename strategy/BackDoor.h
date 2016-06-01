/*************************************************************************
	> File Name: BackDoor.h
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年05月30日 星期一 09时50分12秒
 ************************************************************************/

#ifndef _BACKDOOR_H
#define _BACKDOOR_H

#include "IStrategy.h"
class CBackDoor:public IStrategy
{
	public:
		CBackDoor(void);
		~CBackDoor(void);
		void Operate(void);
};



#endif
