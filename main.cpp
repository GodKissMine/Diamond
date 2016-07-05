#include <iostream>
using namespace std;
void Diamond();
int GetNum(int n);
int main()
{
    Diamond();
    return 0;
}
int GetNum(const int num)
{
    int temp = num;
    int count = 0;
    do{
        count++;
    }while((temp/=10)>=1);
    return count;
}

void Print(const int num,const int count)
{
    switch(num){
    case 5:
        cout<<count;break;
    case 4:
        cout<<count<<" ";break;
    case 3:
        cout<<count<<"  ";break;
    case 2:
        cout<<count<<"   ";break;
    case 1:
        cout<<count<<"    ";break;
    default:
        cout<<count;break;
    }
}
void Diamond()
{
    unsigned int n = 0,i = 0,j = 0;
    int count = 0;
FLAG:
    cout<<"Please input the data:";
    cin>>n;
    if(n > 236 || n<=1){
        cout<<"The data  illegal! Enter the number must be a positive integer!Please input the data again!"<<endl;
        goto FLAG;
    }
    int num = 0;
    for(i=1;i<=n;i++){
        for(j=1;j<5*(n-i+1)-1;j++)
            cout<<" ";
        for(j=1;j<=i;j++){
            num =  GetNum(++count);
            Print(num,count);
        }

        for(j=i-1;j>=1;j--){
            num =  GetNum(++count);
            Print(num,count);
        }
        cout<<endl;
    }

    for(i=n-1;i>=1;i--){
        for(j=1;j<5*(n-i+1)-1;j++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            num =  GetNum(++count);
            Print(num,count);
        }
        for(j=i-1;j>=1;j--){
            num =  GetNum(++count);
            Print(num,count);
        }
        cout<<endl;
    }
}







