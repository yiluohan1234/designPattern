/*************************************************************************
	> File Name: CWangPo.h
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年05月31日 星期二 10时02分45秒
 ************************************************************************/

#ifndef _CWANGPO_H
#define _CWANGPO_H


#include "IKindWomen.h"
class CWangPo:public IKindWomen
{
	public:
		CWangPo(IKindWomen *pKind);
		~CWangPo(void);
		void MakeEyesWithMan(void);
		void HappyWithMan(void);
	private:
		IKindWomen *m_p;
};

#endif
