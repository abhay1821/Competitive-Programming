#include <bits/stdc++.h>
using namespace std;
int main(){
    ////////////////////NUMBER THEORY////////////////////////////////

	// >> left shift
	//3>>1 (divide by 2)
	//11->1//binary con
	// << right shift
	/*  3<<1 (multiply by 2	)
	11->110 */
	//power
	//1<<n=2^n

	//methods
	cout<<(5>>1);//5/2(int)
	cout<<(5<<1);//5*2
	//(1<<5)//ascii of space 32 
	//upper case to lower case
	char uc='A';
	char ab= uc | (1<<5);//since its 5 bit is unset(uppercase)
	cout<<char(uc&(~(1<<5)));//5 bit is set(lowercase)

	//***alternative method*****
	char al=(uc | ' ');//UC tO LC
	char lc=(uc & '_');//LC to UC
    int i=0;
    //swapping without extra variable
	int a=4,b=6;//
	a=a ^ b; //a=a*b
	b=b ^ a; //b=a/b
    a=a  ^ b;//a=a/b 

	//IF THE ARRAY IS SORTED ALWAYS USE BINARY SEARCH
    cout<<__gcd(a,b);
    cout<<(a*b/__gcd(a,b));//LCM

    //SET bit check
    if((a&(1<<i))!=0);
    //odd even check
    if(b&1)//masking and with 1(checking the last bit 0-even 1 - odd )
        cout<<"odd";
	
	//MIN & MAX
	int min= *min_element(vi.begin(),vi.end());
	cout<<min;
	//SUM
	int summ= accumulate(vi.begin(),vi.end(),0);//here 0 is the initial sum=0
	//COUNT
	int ct=count(vi.begin(),vi.end(),3);
	//FIND
	auto itf=find(vi.begin(),vi.end(),3); 
	cout<<*itf;

	
	binary_search(vi.begin(),vi.end(), 4);

	//REVERSE -->we can also reverse string too
	reverse(vi.begin(),vi.end());//we can also use .begin()+2 to just reverse particular part
	//in case of array begin() & end() get replaced by (a,a+n)

	cout << "Distance between first to max element: ";
	distance(first_iterator,desired_position);
    cout << distance(vect.begin(),
                     max_element(vect.begin(), vect.end()));
	
	any_of(ar, ar+6, [](int x){ return x<0; })?
          cout << "There exists a negative element" :
          cout << "All are positive elements";
  	all_of(ar, ar+6, [](int x){ return x<0; })?
          cout << "There exists a negative element" :
          cout << "All are positive elements";

	// Initializing valarray
    valarray<int> varr = { 10, 2, 20, 1, 30 };
    // Declaring new valarray
    valarray<int> varr1 ;
    // Using apply() to increment all elements by 5
    varr1 = varr.apply([](int x){return x=x+5;});
  
    
        
}