#include <iostream>
using namespace std;

 main() {
 	int num[9];
 	int max,min,i;
 	float ave;
 	for(i=0; i<10; i++){
 		cin>>num[i];
	 }
 	
 	max=num[0];
 	for(i=0; i<10; i++){
 		if(num[i]>max){
 			max=num[i];
		 }
 		
	 }
	 min=num[0];
	 for(i=0; i<10; i++){
	 	if(num[i]<min){
	 		min=num[i];
		 }
	 }
	 
 	ave=(max+min)/2;
 	
 	cout<<"ave of max and min is"<<ave;
 	
 	
 	
 	
 	
 	
 	
 	
 	
 }
	