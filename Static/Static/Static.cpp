

/*
static 定义的变量/函数，只对它声明所在的cpp文件可见，可以理解成该cpp文件中的全局变量。
若去掉static关键字，则该全局变量在全局中作用，如果在其他地方也声明了同样命名的变量，会出现LNK错误

*/
static int s_Variable = 5;

static void Function()
{

}