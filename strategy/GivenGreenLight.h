/*************************************************************************
	> File Name: GivenGreenLight.h
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年05月30日 星期一 09时55分57秒
 ************************************************************************/

#ifndef _GIVENGREENLIGHT_H
#define _GIVENGREENLIGHT_H

#include "IStrategy.h"
class CGivenGreenLight:public IStrategy
{
	public:
		CGivenGreenLight(void);
		~CGivenGreenLight(void);
		void Operate(void);
};

#endif
