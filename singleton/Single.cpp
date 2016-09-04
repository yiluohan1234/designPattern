/*************************************************************************
	> File Name: Single.cpp
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: Sun 04 Sep 2016 10:39:22 PM CST
 ************************************************************************/

#include "Singleton.h"
int main()
{
	Singleton *st = Singleton::GetInstance("SingletonA");
	st->Show();
	return 0;
}
