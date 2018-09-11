#include <iostream>
using namespace std;

int hcf_evaluation( int a, int b){
     if(a == 0){
        return b;    
     }
     return hcf( b%a, a );
}

int main(){

   int a;
   int b;
   cout<< "hcf of "<<a<< and <<b<<" is"hcf_evaluation(a,b);

   return 0;
}

