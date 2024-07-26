#include<iostream>
using namespace std;

class BankDeposit{

    int principal, years;
    float interestRate, returnvalue;

    public:
        BankDeposit(){}
        BankDeposit(int p, int y, float r); // r can be 0.04
        BankDeposit(int p, int y, int r);   // r can be 4
        void show(void);


};

BankDeposit :: BankDeposit(int p, int y, float r){

    principal = p;
    years = y;
    interestRate = r;
    returnvalue = principal;

    for (int  i = 0; i < y; i++)
    {  
        returnvalue *= (1+r);
    }
    
}

BankDeposit :: BankDeposit(int p, int y, int r){

    principal = p;
    years = y;
    interestRate = float(r)/100;
    returnvalue = principal;

    for (int  i = 0; i < y; i++)
    {  
        returnvalue *= (1+interestRate);
    }
    
}


void BankDeposit :: show(){
    cout<<endl<<"Principal amout was "<< principal << endl<< 
        "Return value after "<< years<< " years is " << returnvalue<< endl;
}

int main(){

    BankDeposit bd1, bd2,bd3;
    int p,y;
    float r;    // fraction format 
    int R;      // Percentage format

    bd3.show();
    
    cout<<"Enter the value of p, y and r"<< endl;
    cin>>p>>y>>r;
    bd1 = BankDeposit(p,y,r);
    bd1.show();

    cout<<"Enter the value of p, y and R"<< endl;
    cin>>p>>y>>R;
    bd2 = BankDeposit(p,y,R);
    bd2.show();

    
}