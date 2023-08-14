#include <iostream>
using namespace std;

int main(){

      int a,b,tanlov;
	  cout<<"**kankulyator***"<<endl;
	  cout<<"1:qiymatni kiritish"<<endl;
	  cout<<"2:qo'shish"<<endl;
	  cout<<"3:ayirish"<<endl;
	  cout<<"4:ayirish"<<endl;
	  cout<<"5:ko'paytirish"<<endl;
	  cout<<"bo'limni tanlang:";cin>>tanlov;
    
      switch(tanlov){
       case 1:cout<<"a=";cin>>a; cout<<"b="; cin>>b;
	   case 2:cout<<a<<"+"<<b<<"="<<a+b<<endl;
	   case 3:cout<<a<<"-"<<b<<"="<<a-b<<endl;
	   case 4:cout<<a<<"/"<<b<<"="<<a/b<<endl;
	   case 5:cout<<a<<"*"<<b<<"="<<a*b<<endl;
	    system(cls);
}
	  

return 0; 

}