#include <iostream>

//std::string global_str;
//int global_int;


int main()
{
	//int month = 9, day = 7;

	//auto var = "Who goes with F\145rgus?\012";
	//auto var = 3.14e1L;
	//auto var = 1024f;
	//auto var = 3.14L;

	//std::cout << var << std::endl;

	//int i = 3.14;

	//int local_int;
	//std::string local_str;

	/*extern int ix = 1024;
	int iy;
	extern int iz;*/

	//int i = 100, sum = 0;
	//for (int i = 0; i != 10; i++)
	//	sum += i;
	//std::cout << i << " " << sum << std::endl;

	//int ival = 1024;
	//int &refVal = ival;

	//int i = 0, &r1 = i;
	//double d = 0, &r2 = d;

	//r2 = 3.14159;
	//r2 = r1;
	//i = r2;
	//r1 = d;

	//int i, &ri = i;
	//i = 5;
	//ri = 10;
	//std::cout << i << " " << ri << std::endl;

	//double dval;
	//double *pd = &dval;
	//double *pd2 = pd;

	//double **pd3 = &pd2;

	//// void无法访问内存空间中所存的对象
	//double obj = 3.14, *pd = &obj;
	//void *pv = &obj;	
	//std::cout << *pv << std::endl;	// error

	//int i = 42;
	//int *p1 = &i;
	//*p1 = *p1 * *p1;
	//std::cout << *p1 << std::endl;

	//int i = 42;
	//int *p;
	//int *&r = p;

	//r = &i;
	//*r = 0;

	//int &rVal = i;
	//rVal = 0;

	//int i = 42;
	//int &r1 = i;
	//const int &r2 = i;
	//r1 = 0;
	//std::cout << r2 << std::endl;

	//const int v2 = 0;
	//int v1 = v2;
	//int *p1 = &v1, &r1 = v1;

	//int a = 3, b = 4;
	//decltype(a) c = a;
	//decltype((b)) d = a;
	//++c;
	//++d;

	int a = 3, b = 4;
	decltype(a) c = a;
	decltype(a = b) d = a;

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;


	std::cin.get();

}