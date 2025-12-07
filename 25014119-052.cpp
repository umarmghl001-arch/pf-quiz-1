#include <iostream>
using namespace std;
int main (){
// Fruit shop
int total_fruits ;
cout << "Enter total fruits " ;
cin >> total_fruits;
int fruit_price = 0;
int low_price_count = 0;
int total = 0;
for (int i = 1 ; i <= total_fruits ; i++){
    cout<<"enter the price of the fruit for fruit "<<i<<"  ";
    cin>>fruit_price;
    if (fruit_price<50){
    	cout<<"Low price"<<endl;
    	low_price_count ++;
	}
    total += fruit_price;
	
}

cout<<"total fruit entered  = "<<total_fruits<<endl;
cout<<"total fruit cost is = " << total<<endl;
cout<<"total count for low price fruits is = "<<low_price_count;
return 0;
}
