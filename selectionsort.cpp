#include<iostream>
using namespace std;
int main()
{
int arr[10]={3,5,2,6,1,4,9,7,8,0};
for (int i=0 ; i<(10) ; i++ ){
    int smallestindex=i;
    for (int j=i ; j<10 ; j++){
        if (arr[smallestindex] > arr[j]){
            smallestindex=j;
        }
        
    }
    int temp=arr[i];
    arr[i]=arr[smallestindex];
    arr[smallestindex]=temp;
}

for(int k=0 ; k < 10 ; k++){
    printf("%d\n",arr[k]);
}


return 0;
}