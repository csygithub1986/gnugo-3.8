// Client.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
extern "C" {
#include "gnugo.h"
#include "liberty.h"
}

int main()
{
	Start(1, NULL);
	return 0;
}

