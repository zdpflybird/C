// cudnn.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <cudnn.h>
using namespace std;

int main()
{
	cudnnHandle_t handle;
	cudnnStatus_t t = cudnnCreate(&handle);
	cout << cudnnGetErrorString(t);
	getchar();
    return 0;
}

