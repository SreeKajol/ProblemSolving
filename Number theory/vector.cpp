

#include <iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>box=  {3,2,5,3,6,8,9,2,1,5};
    box.push_back(4);
    box.pop_back();
    
   // box.erase(box.begin()+2);
   // box.erase(box.begin(), box.begin()+3);
   //vector size 
   int size= box.end()- box.begin();
   cout<<size<<endl;
   
    for(int i=0; i<box.size(); i++){
        cout<<box[i]<<" ";
    }
    

    return 0;
}
