#include<iostream>

using namespace std;
int main(){
	
	int cha[10] = {0,1,2,3,4,5,6,7,8,9};
	int i = 10;
	for (int j=0; j<=9; j++){
		//cout << j << "   " << i-j << endl;
        cha[j] = cha[i-j];
        cout << cha[j] << endl;
        }
        
	return 0;
} 
