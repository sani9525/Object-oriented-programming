#include <iostream>
using namespace std;
void selectionsort(int input[],int n) {
    for(int i=0; i<n-1; i++) {
        // find min element in the array
        int min=input[i],minindex=i;
        for (int j=i+1; j<n; j++) {
            if(input[j]<min){
                min=input[j];
                minindex=j;
            }
        }
        // swap
        int temp=input[i];
        input[i]=input[minindex];
        input[minindex]=temp;


    }
}
int main () {
    int input[]={3,1,6,9,0,4};
    selectionsort(input,6);
    for(int i=0; i<6; i++) {
        cout<<input[i]<<" ";
    }
    cout<<endl;

}