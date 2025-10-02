1#include <iostream> 
using namespace std; 
int main () {
double* pvalue= NULL;
pvalue = new double;
*pvalue = 22.1;
cout<<"The pvalue is:"<<*pvalue;
delete pvalue;
return 0;
}
