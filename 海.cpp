#include<iostream>
using namespace std;
//���ֲ��ҵݹ�
//int  Binary(int* p,int sz,int n)
//{
//	
//	int left = 0,mid,right = sz-1;
//	mid  = (left + right)/2;
//	
//while(left <= right)
//{
//	if(p[mid] < n)
//	{
//		left = mid +1;
//	    mid  = (left + right)/2;
//	}
//	else if(p[mid] > n)
//	{
//		right = mid -1;
//		mid  = (left + right)/2;
//	}
//	else 
//	{
//		return mid;
//	}
//}
//return -1;
//
//}
//int main()
//{
//	int array[10]={8,9,10,11,12,14,15,16,17,18};
//	int sz = sizeof(array)/sizeof(array[0]);
//	cout<<Binary(array,sz,14)<<endl;
//	
//	return  0;
//
//}
//class Search
//{
//public:
//	int Binary()
//	{
//
//	}
//private:
//	int* p;
//};
//
//int Binary(int* p ,int n ,int left,int right)  //ʱ��O(n),�ռ�O(n)
//{
//	int mid;
//	while(left < right)
//	{
//	    mid = (left + right)/2; //ÿ�η���left��right�ĸı��mid�͸ı�
//
//		if(p[mid] > n)   //rightÿ�ν�ȥ����mid -1
//		{
//			right = mid -1;  
//			Binary(p, n ,left,right);
//		}
//		else if(p[mid] < n) //leftÿ�ν�ȥ����mid+1
//		{ 
//			left = mid +1;
//			Binary(p, n ,left,right);
//		}
//		else 
//		{
//			return mid;
//		}
//	}
//
//	
//}
//int main()
//{
//	int array[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(array)/sizeof(array[0]);
//	cout<<Binary(array,5,0,sz-1)<<endl;
//	return 0;
//}

//쳲������ǵݹ�unsign long long n;  �ռ�O(1),ʱ��O(n)
//f(n) = 0,1   n= 0 ,1; f(n) = f(n-1)+f(n-2) n>=2;
 long long  Fibonacci( unsigned long long n )
{
	int *p =new int[2];
	p[0] = 0;
	p[1] = 1;
	int i = 1;
	int j = 0;
	int a = 0;
	if(n < 2)
	{
		return n;
	}
	else
	{
		while(i++ < n )  //n����2��ʱ��ʵ����ֻ��쳲������� n>2 �ĵ�һ��
		{
		    a = p[0]+p[1];
     	    p[j++] = a;
		    if(j > 1 )
			    j = 0;
		}
	}
	
	return a;
}
int main()
{
	cout<<Fibonacci(3)<<endl;
	return 0;
}