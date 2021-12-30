#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> num;

    num.push_back(1);
    num.push_back(2);
    num.push_back(3);
    num.push_back(3);
    num.push_back(4);
    num.push_front(0);

    int a;
    cout<<"Where to store : ";
    cin>>a;
    cout<<"What to store : ";
    int b;
    cin>>b;

    for(list<int>::iterator it=num.begin();it !=num.end();it++){
        if(*it==a){
            it++;
            num.insert(it,b);
            break;
        }
    }

    cout<<"What to delete : ";
    int d;
    cin>>d;

    for(list<int>::iterator it=num.begin();it != num.end();){
        if(*it==d){
            it=num.erase(it);
        }
        else{
            it++;
        }
    }


    for(list<int>::iterator it=num.begin();it != num.end();it++){
        cout<<*it<<endl;
    }
}
