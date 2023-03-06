#include <iostream>
#include <GLFW/glfw3.h>		//头文件是同时支持静态和动态链接的

/*
静态链接
1. 将要使用的libraries放到dependencies文件夹中，包括include和lib
2. 右键solution，properties，选择好platform和configuration后，在C++ general部分将头文件的相对路径添加至additional include directories，即可include头文件
3. 在linker->general部分，将lib文件的相对路径添加至additional libraries directories，然后在linker->input添加.lib文件，即可使用函数

静态链接是在编译后进行的，在形成可执行程序前，将需要的libraries链接到二进制文件中，具有很大的优化空间。

动态链接是在程序运行时进行链接的，当可执行程序运行时，动态链接库才会被载入，动态链接库实际上并不是exe中的一部分，

动态链接
1, 2步同静态链接
3. 在linker->general部分，将xxxdll.lib文件的相对路径添加至additional libraries directories，然后在linker->input添加xxxdll.lib文件
4. 将xxx.dll文件放置在.exe文件所在目录下，即可运行
*/

int main()
{
	int a = glfwInit();
	std::cout << a << std::endl;

	std::cin.get();
}