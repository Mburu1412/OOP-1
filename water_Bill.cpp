#include <iostream>
#define standing_Charge 120 
using namespace std;

int main(int argc, char** argv)
{
	int units_Consumed, amount_Payable;
	
	//Ask the user for units_Consumed
	cout<<"Enter the units consumed:" <<endl;
	cin>>units_Consumed;
	
	if(units_Consumed <100) {
		if(units_Consumed>70) {
			amount_Payable = standing_Charge + (units_Consumed*120);
		}
		else if(units_Consumed>60) {
			amount_Payable = standing_Charge + (units_Consumed*80);
		}
		else if(units_Consumed>40) {
			amount_Payable = standing_Charge + (units_Consumed*60);
		}
		else {
			amount_Payable = standing_Charge + (units_Consumed*30);
		}
	}
	
	else {
		cout<<"No Billing." <<endl;
	}
	
	cout<<"amount_Payable is:" <<amount_Payable <<endl;
	return 0;
}