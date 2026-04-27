// File provided by Microsoft.

#include<iostream> // There is no spacing between lines.
// There are no code comments. 
using namespace std;
class calc{ /* Incorrect naming convention for a Class.
It should named Calc or CalcClass in accordance with the 
PascalCase.  
 */
public:
int x,y;
void domath(){ // Incorrect naming convention --> doMath()
x=10;y=20; /* There should be spacing x = 10; y = 20; These should be written
and aligned on separate lines.*/
int res=x+y; 
cout<<"result is "<<res<<endl; // There should be space
if(res>25){
cout<<"big number"<<endl;} // There should be indentation here.
else{cout<<"small number"<<endl;
}
}
};
int main(){
calc c; // What is c? No explanatory comment provided.
c.domath();
return 0;
}