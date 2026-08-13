#include <iostream>
using namespace std;
//Type 1: No Arguments, No Return Value
//void sum(){
//		int a = 10, b = 20;
//		cout << "Sum = " << a + b;
//	}
//
//int main(){
//		sum();
//		return 0;
//	}


//Type 2: Arguments, No Return Value
//void sum(int a, int b){
//		cout << "Sum = " << a + b;
//	}
//int main(){
//		sum(10, 20);
//		return 0;
//}


//Type 3: No Arguments, Return Value
//int sum()
//		{
//		   int a = 10, b = 20;
//		   return a + b;
//		}	
//int main()
//		{
//		   int ans;
//		   ans = sum();
//		   cout << "Sum = " << ans;
//		   return 0;
//}


//Type 4: Arguments, Return Value
int sum(int a, int b){
			return a + b;
		}
int main(){
			int ans;
			ans = sum(10, 20);
			cout << "Sum = " << ans;
			return 0;
		}
