/*************************************************************************
	> File Name: CPanJinLian.h
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年05月31日 星期二 09时46分08秒
 ************************************************************************/

#ifndef _CPANJINLIAN_H
#define _CPANJINLIAN_H

#include "IKindWomen.h"
class CPanJinLian:public IKindWomen
{
	public:
		CPanJinLian(void);
		~CPanJinLian(void);
		void MakeEyesWithMan(void);
		void HappyWithMan(void);
};

#endif
