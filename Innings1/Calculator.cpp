#include<iostream>
using namespace std;
int main() {
    char ch;
    long long int N1,N2;
    long long int result=0;
    for(;;)
    {
    cin>>ch;    
    if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='%')
    {
       
       switch(ch)
       {
           case '+':cin>>N1>>N2; 
           result=N1+N2;break;
           case '-':cin>>N1>>N2;
           result=N1-N2;break;
           case '*':cin>>N1>>N2;
           result=N1*N2;break;
           case '/':  cin>>N1>>N2;  
                        if(N2==0)
                        {
                        continue;
                        }
                        else
                        result=N1/N2;
                        break;
            case '%':cin>>N1>>N2;
            result=N1%N2;break;
       }
    }
       else if(ch=='x'||ch=='X')
       exit(0);
       else
       {
           cout<<"Invalid operation. Try again."<<endl;
           continue;
       }
    cout<<result<<endl;
    }
	return 0;
}
