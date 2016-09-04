/*************************************************************************
	> File Name: Singleton.h
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: Sun 04 Sep 2016 10:24:58 PM CST
 ************************************************************************/

#ifndef _SINGLETO_H
#define _SINGLETO_H
#pragma once
#include <iostream>
#include <string.h>
using namespace std;

class Singleton
{
	public:
		static Singleton* GetInstance(const char* name);
		virtual void Show(){}
	protected:
		Singleton(){}
	private:
		static Singleton *singleton;
};


#endif
