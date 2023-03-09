#include <iostream>
using namespace std;
int main()
{
    int N, A, T ,n ,a[50];
    cout<<"Enter the number of Test Case"<<endl;
    cin>>T;
    for(int i=0;i<T;i++){
        int cnt=0;
        cout<<"Enter the number of People between A and B"<<endl;
        cin>>N;
        cout<<"Enter the Height of A and B"<<endl;
        cin>>A;
       cout<<"Enter the Height of People between A and B"<<endl;
        for(int j=0;j<N;j++)
            cin>>a[j];
            for(int j=0;j<N;j++)
            {
                if(a[j]>A)
                cnt++;
            }
            cout<<"The number of people who needed to be shot down is : "<<cnt<<endl;
            cout<<"Press 1 to Continue \n Press Any-Key to stop"<<endl;
            cin>>n;
            if(n==1)
               continue;
               else
               exit(0);
    }
    return 0;
}
