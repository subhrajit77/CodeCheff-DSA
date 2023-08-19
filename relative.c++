/* In Chefland, the speed of light is 
�
 
m
/
s
c m/s, and acceleration due to gravity is 
�
 
m
/
s
2
g m/s 
2
 .

Find the smallest height (in meters) from which Chef should jump such that during his journey down only under the effect of gravity and independent of any air resistance, he achieves the speed of light and verifies Einstein's theory of special relativity.

Assume he jumps at zero velocity and at any time, his velocity (v) and depth of descent (
H) are related as v^2 =2*g*h
The first line contains an integer 
�
T, the number of test cases. Then the test cases follow
Each test case contains a single line of input, two integers 
�
g, 
�
c.




*/ 
//code 


#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int t,g,c,h; //h=height from which chef would jump; g= accln due to gravity considered
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>g>>c;
	    h=(c*c)/(2*g);
	    cout<<h<<endl;
	    
	}
	return 0;
}


