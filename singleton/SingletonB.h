/*************************************************************************
	> File Name: SingletonB.h
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: Sun 04 Sep 2016 10:37:13 PM CST
 ************************************************************************/

#ifndef _SINGLETONB_H
#define _SINGLETONB_H
#pragma once
#include "Singleton.h"
class SingletonB:public Singleton
{
	friend class Singleton;
	public:
	void Show(){cout << "SingletonB" << endl;}
	private:
	SingletonB(){}
};


#endif
