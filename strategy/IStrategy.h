/*************************************************************************
	> File Name: IStrategy.h
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年05月30日 星期一 09时45分13秒
 ************************************************************************/

#ifndef _ISTRATEGY_H
#define _ISTRATEGY_H
/*
首先定一个策略接口，这是诸葛亮老人家给赵云的三个锦囊妙计的接口
*/
class IStrategy
{
	public:
		IStrategy(void){};
		virtual ~IStrategy(void){};
		virtual void Operate(void)=0;
};

#endif
