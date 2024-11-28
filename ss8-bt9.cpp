#include <stdio.h>

int main(){
	int arr[7]={1,2,6,5,1,7,0};
	int max_count;
    int maxItem; 
	int lenghArr= sizeof(arr)/sizeof(arr[0]);
	for (int i= 0; i< lenghArr; i++){
		int count =0;
		for(int j=0; j< lenghArr; j++){
			if(arr[i]==arr[j]){
				count ++; 
			} 
		}
		if(count>max_count){
			max_count = count;
			maxItem= arr[i];  
		} 
	}
	printf("phan tu %d xuat hien nhieu nhat la %d ", maxItem, max_count);
	
	return 0;
}
