#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{   
    // using clock 
    clock_t t1, t2; //�ŧit1,t2 ����ܼ�
    double a,b=3,c,d,e,f;
    int i,j,k=0,l,o=1,m;     //�ŧi3��integral
	t1 = clock(); //���o�ثe������?
	for(i=0;i<100000000;++i)
	{
		//j=123+456;
	}
	// Sleep(1234);   //���{���� 1234ms
	t2 = clock();
    printf("EMPTY ROOT TIME:%.3f\n",(t2-t1)/(double)(CLOCKS_PER_SEC));//CLOCKS_PER_SEC:1000,�C�@���X��clocks 
    c=t2-t1;
    
   /* t1 = clock(); //���o�ثe������?
	for(i=0;i<1000000000;++i)
	{
		a=sin(b);
	}
	t2 = clock();
	d=t2-t1;
    printf("one sin() tine:%.3f\n",(d-c)/(double)(CLOCKS_PER_SEC)); */ 
     
    t1 = clock(); 
	for(i=0;i<100000000;++i)
	{
		j=k+1;
	}
	t2 = clock();	
	e=t2-t1;
    printf("one addtition time:%.3f\n",(e-c)/(double)(CLOCKS_PER_SEC));
     
    t1 = clock(); 
	for(i=0;i<100000000;++i)
	{ 
		l=o*3;
	}
	t2 = clock();
	f=t2-t1;
    printf("one multiplication time:%.3f\n",(f-c)/(double)(CLOCKS_PER_SEC));

    return 0;
}


