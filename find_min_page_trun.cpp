#include<iostream>
using namespace std;
int find_min_page(int n,int p){
    int PagetoFront=0;
    int PagetoEnd=0;
    int minPage=0;
    bool Loop = true;
    for(int i=1;i<=n && Loop;i++){
        if(i==p){
            Loop=false;
        }
        if(i%2==0){
            PagetoFront++;
        }
    }
    Loop = true;
    for(int i=n;i>=1 && Loop;i--){
        if(i==p){
            Loop=false;
        }
        if(i%2!=0 && i<n){
            PagetoEnd++;
        }
    }
    minPage = PagetoFront;
    if(minPage > PagetoEnd){
        minPage = PagetoEnd;
    }
    return minPage;
}
int main(){
    int n,p;
    cout<<"Enter total page : ";
    cin>>n;
    cout<<"ENter the page to trun to : ";
    cin>>p;
    if(n>=1 && n<=100000){
        if(p>=1 && p<=n){
            int minPage = find_min_page(n,p);
            cout<<"Min Page turn is : "<<minPage;
        }
        else{
            cout<<"\nInvalid Page number\n";
        }
    }
    else{
        cout<<"\nInvalid Total page\n";
    }
    return 0;
}