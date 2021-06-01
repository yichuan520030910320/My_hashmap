#include <iostream>
#include "hashmap.h"
#include <map>
using namespace std;
int main() {
    hashmap<int , int> my(100);
    map<int ,int > stdmp;
    for (int i = 100; i >=1 ; --i) {
        stdmp.insert(make_pair(i,i));
        my.insert(i,i);
    }
    for (int i = 100; i >=1 ; --i) {
        map<int, int >::iterator iter;
        iter = stdmp.find(i);
        cout<<iter->second<<"****"<<endl;
        pair<bool,int >ans=my.find(i);
        cout<<ans.first<<"*****"<<ans.second<<endl;
    }
    //std::cout << "Hello, World!" << std::endl;
    return 0;
}
