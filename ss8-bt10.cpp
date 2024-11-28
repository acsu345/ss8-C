#include <stdio.h>

int main(){
	int arr[]={1,2,6,5,1,7,0,4,3,2,1,2};
	int result[100]={0}; 
	int max_count;
	int index = 0; 
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
    }
    for (int i= 0; i< lenghArr; i++){
		int count =0;
		for(int j=0; j< lenghArr; j++){
			if(arr[i]==arr[j]){
				count ++; 
			} 
		}
		if(count==max_count){
			int flag = -1;
			for (int k = 0; k< 100; k++){
				if(arr[i]==result[k]){
				   flag=1;
				   break; 
				} 
			}
			if (flag == -1 ){
			   result[index]=arr[i];
			   index++; 
			}
			flag = -1; 
        }
    }
    for (int i= 0; i<index; i++ ){
    	printf("Phan tu xuat hien nhieu nhat %d \n", result[i]); 
	} 
    return 0;
}
}
