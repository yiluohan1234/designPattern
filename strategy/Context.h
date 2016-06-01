/*************************************************************************
	> File Name: Context.h
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年05月30日 星期一 09时42分27秒
 ************************************************************************/

#ifndef _CONTEXT_H
#define _CONTEXT_H

#include "IStrategy.h"
class CContext
{
	public:
		CContext(IStrategy *pStrategy);
		~CContext(void);
		void Operate(void);
	private:
		IStrategy *m_pStrategy;
};

#endif
