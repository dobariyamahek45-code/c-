#include<iostream>
using namespace std;
int main(){
	
	float phy,chem,bio,maths,comp,total,per;
	
	cout<<"enter a physics marks";
	cin>>phy;
	
	cout<<"enter a chemsitry marks";
	cin>>chem;
	
	cout<<"enter a biology marks";
	cin>>bio;
	
	cout<<"enter a maths marks";
	cin>>maths;
	
	cout<<"enter a comp marks";
	cin>>comp;
	
	total = phy + chem + bio + maths + comp;
	per=total/5;
	
	 cout << "Percentage = " << per << "%" << endl;

    if(per >= 90)
        cout << "Grade A";
    else if(per >= 80)
        cout << "Grade B";
    else if(per >= 70)
        cout << "Grade C";
    else if(per >= 60)
        cout << "Grade D";
    else if(per >= 40)
        cout << "Grade E";
    else(per<=40)
        cout << "Grade F";

    return 0;
}
