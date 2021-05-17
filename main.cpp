#include <iostream>
#include <string>
#include <vector>
#include "Mohican.h"
using namespace std;


int main() {
	
	Mohican mohican;
	mohican.m.push_back("mohican 1");
	mohican.m.push_back("mohican 2");
	mohican.m.insert(mohican.m.begin(), "mohican 3");
	mohican.m.insert(mohican.m.end(), "mohican 4");
	
	std::cout<<"Last Mohican: "<<mohican.m.back()<<endl;
	
	mohican.m.pop_back();
	std::cout<<"Last Mohican: "<<mohican.m.back()<<endl;
	
	mohican.m.push_back("mohican 5");
	std::cout<<"Last Mohican: "<<mohican.m.back()<<endl;
	
	
	
	return 0;
}

