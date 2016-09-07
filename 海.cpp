#include<iostream>
using namespace std;
//二分查找递归
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
//int Binary(int* p ,int n ,int left,int right)  //时间O(n),空间O(n)
//{
//	int mid;
//	while(left < right)
//	{
//	    mid = (left + right)/2; //每次发生left和right的改变后，mid就改变
//
//		if(p[mid] > n)   //right每次进去都是mid -1
//		{
//			right = mid -1;  
//			Binary(p, n ,left,right);
//		}
//		else if(p[mid] < n) //left每次进去都是mid+1
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

//斐波那契非递归unsign long long n;  空间O(1),时间O(n)
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
		while(i++ < n )  //n等于2的时候，实际上只是斐波那契中 n>2 的第一步
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