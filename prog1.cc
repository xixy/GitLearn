#include <iostream>
int main(){
	using mydouble = double;
	mydouble i;
	i = 100;
	int ival = 1024;
	int &refVal = ival;
	std::cout<<refVal<<std::endl;
	refVal = 2;
	std::cout<<refVal<<std::endl;
	int sum = 0,val = 1,value=0;
	while(std::cin >> value){
		sum+=value;
	}
	std::cout<<"Sum is : "<<sum<<std::endl;
/*
	while(val<=10){
		sum += val;
		++val;
	}
	std::cout<<"Sum of 1 to 10 inclusive is "<< sum << std::endl;

	std::cout<<"Enter two numbers:"<<std::endl;
	int v1=0,v2=0;
	std::cin>>v1>>v2;
	std::cout<<"The sum of "<<v1<<" and " << v2 << " is "<<v1+v2<<std::endl;
*/
	return 0;

}

