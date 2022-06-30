#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int* checkmirror(string *arr, int size,int *count);
string * checkmirror2(string *arr, int size, int*count , string* check);


int main() {
    int size;
    cout<<"enter the size of the string: ";
    cin>>size;


    int *count;
    count= new int[size];
    string* arr;
    arr = new string[size];
    string * check;
    check= new string[size];



    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    string* last= checkmirror2(arr,size, count ,check);
    for(int i=0 ;i<size; i++){
        cout<<last[i]<<" ";
    }


}
int * checkmirror(string *arr, int size, int*count){
    int c;
    for(int i=0; i<size; i++){
        int c=0;
        int len = arr[i].length();
        for(int j=0,n=len-1; j< len ;j++, n--){
            if(arr[i][j]==arr[i][n]){
                ++c;
            }
        }
        count[i]=c;
    }
    return count;
}
string * checkmirror2(string *arr, int size, int*count , string* check){
    int* counter=checkmirror(arr,size,count);
    for(int i=0;i<size ;i++){
        if (counter[i]== arr[i].length()){
            check[i]="true";
        }else{
            check[i]="false";
        }
    }
    return check;
}