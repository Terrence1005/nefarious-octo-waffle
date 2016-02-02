/*
 * Insert.cc
 *
 *  Created on: 2016Äê1ÔÂ27ÈÕ
 *      Author: Terrence
 */

#include <iostream>
using namespace std;

void InsertSort(int arr[],int size){
	int temp;
	int j;
	for(int i = 1;i<size;i++){
			if(arr[i-1]>arr[i]){
				temp = arr[i];
			for(j = i-1;arr[j]>temp&&j>=0;j--){
				arr[j+1] = arr[j];
			}
			arr[j+1] = temp;
		}
	}
}

int main(){
	int arr[] = {1,9,4,6,3,2,5,7,8};
		int sizeArr = sizeof(arr)/sizeof(int);
		InsertSort(arr,sizeArr);
		for(int i = 0;i<sizeArr;i++){
			cout << arr[i] <<" ";
		}
		cout << "\n";
}

