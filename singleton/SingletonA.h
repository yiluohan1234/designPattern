/*************************************************************************
	> File Name: SingletonA.h
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: Sun 04 Sep 2016 10:35:05 PM CST
 ************************************************************************/

#ifndef _SINGLETONA_H
#define _SINGLETONA_H
#pragma once
#include "Singleton.h"
class SingletonA:public Singleton
{
	friend class Singleton;
	public:
	void Show(){cout << "SingletonA" << endl;}
	private:
	SingletonA(){}
};



#endif
