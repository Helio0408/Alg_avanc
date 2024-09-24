#include <iostream>
using namespace std;

int main(){
	int next = 1, cont = 0, num, *arr;

	cin >> num;

	arr = new int[num];

	for(int i = 0; i < num; i++)
		cin >> arr[i];

	while(next < num){
		for(int i = 0; i < num; i++)
			if(arr[i] == next){
				arr[i] = 0;
				next++;
			}
	cont++;
	}

	cont++;
	cout << cont << endl;

	return 0;
}