/*************************************************************************
	> File Name: BlockEnemy.h
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年05月30日 星期一 09时59分48秒
 ************************************************************************/

#ifndef _BLOCKENEMY_H
#define _BLOCKENEMY_H

#include "IStrategy.h"
class CBlockEnemy:public IStrategy
{
	public:
		CBlockEnemy(void);
		~CBlockEnemy(void);
		void Operate(void);
};

#endif
