#include <iostream> 
using namespace std;

int main(){
    char operation;
    int num;
    int sum = 0;
    int arr[100];
    int index = 0;
    bool subtract = false;
    int temp = 0;
    cin>>arr[index];
    sum += arr[index];
    index++;

    while (cin >> operation) {
        if (operation == '+') {
            subtract = false;
            cin>>arr[index];
            sum += arr[index];
            temp = arr[index];
            index++;
            
        } 
        else if (operation == '-') {
            subtract = true;
            cin>>arr[index];
            sum -= arr[index];
            index++;
            
        } 
        else if (operation == '^'){
            if(subtract == true){
                int sub = arr[index-1] * arr[index-1];
                sum = sum + arr[index-1] - sub;
                
            }
            else{
                int add= arr[index-1] * arr[index-1];
                sum = sum - arr[index-1] + add; 
            }
            subtract = false;
        }
        else if (operation == ';'){
            cout<<sum<<endl;
            sum = 0;
            subtract = false;
            
            for(int i = 0; i<= index; i++){
                    arr[i] = 0;
            }
            index = 0;
            cin>>arr[index];
            sum += arr[index];
            index++;
        }
    }

    return 0;
}