#include<iostream>
#include<vector>
using namespace std;
int main(){
    //It is divided into four parts :- algorithms , containers , functions ,iterators
    
//     //pairs 
//     pair<int ,int>p={1,3};

//     cout<<p.first<<" "<<p.second;

//    pair<int,pair<int ,int >>a={1,{2,3}};

//    cout<<a.first<<" "<<a.second.second <<" "<< a.second.first;
   

//    pair<int , int >arr[]={{1,2},{3,4},{5,6}};



   //vectors 

   vector<int>v;  // it creates an empty container

   v.push_back(1);
   v.emplace_back(2);
   v.push_back(3);
   v.emplace_back(4);


   cout<<v[3]<<endl;


   //iterators ?

//    vector<int>::iterator it= v.begin();
//    it++;
//    cout<<*(it);


   vector<int>::iterator it=v.end();
   it--;
   cout<<*(it);


   cout<<endl;


   cout<<v.at(0);  // --> 1

   
  //printing entire vector ?

  vector<int> a= {1,2,3,4,5,6,7,8,9};

  for ( vector<int>::iterator i = a.begin(); i !=a.end(); i++)
  {
    /* code */  cout<<*(i)<<endl;
  }  // it will print whole vector 


  //auto= automatically assigns vector iterator


 vector<int> b={10,20,30,40,50};
 for(auto j=b.begin();j!=b.end(); j++){
    cout<<*(j)<<" " ;
 }
cout<<endl;
cout<<"Erasing the element"<<endl;
// Erasing The Element 

b.erase(b.begin()+1);

for(auto j=b.begin();j!=b.end(); j++){
    cout<<*(j)<<" " ;
 }


cout<<endl;

//erasing couple of elements 


b.erase(b.begin()+1, b.begin()+3);  //{10,30,40,50} [start,end)

for(auto j=b.begin();j!=b.end(); j++){
    cout<<*(j)<<" " ;
 }

 cout<<endl;
 
//insert function 

vector<int>c(2,100); //{100,100}

c.insert(c.begin(),50);
// 50 100 100 

cout<<c[0]<<endl;

c.insert( c.begin()+2,10,60); // 10 occurences of 60 
for(auto k=c.begin();k!=c.end(); k++){
    cout<<*(k)<<" " ;
 }
 cout<<endl;

// inserting vector inside a vector

vector<int>d(2,50);
c.insert(c.begin(),d.begin(),d.end());
for(auto x=c.begin();x!=c.end(); x++){
    cout<<*(x)<<" " ;
 } // 50 50 50 100 60 60 60 60 60 60 60 60 60 60 100 

cout<<endl;
//size of vector 

cout<<c.size()<<endl;; 

vector<int>e={1,2};
vector<int>f={3,4};
e.swap(f);

for(auto iterator=e.begin();iterator!=e.end();iterator++){
    cout<<*(iterator)<<" "; // 3 4
}
cout<<endl;

// v.clear(); --> erases the entire vector


cout<<e.empty()<<endl;
if(e.empty()==1){
cout<<"Yes It's Empty"<<endl;
}
else {
cout<<"No, Its not Empty"<<endl;
}
























  









      



}