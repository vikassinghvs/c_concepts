//C concepts
//Void pointer concepts
//How void pointers are used to create generic functions in c
//Beginning implementation of cpp using c
#include <stdio.h>

void* mult(int type, void* op1,void * op2)
{
    if(type==1)
    {
        int result = ((*(int*)op1) * (*(int*)op2));
        void* res=&result;
        return res;
    }
    else
    return 0;
}
int main() {
	//code
	int a=5;
	int b=5;
	int *res = (int*) mult(1,&a,&b);
	printf("%d",*res);
	return 0;
}
