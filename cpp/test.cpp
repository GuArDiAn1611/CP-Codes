#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;


int main() {
    unordered_map <char, int> m ={ {'I',1} , {'V',5} , {'X',10} , {'L',50} , {'C',100} , {'D',500} , {'M',1000} };
    int result = 0;
    string str;
    cin >> str;
    int n = str.length();
    for( int i=0 ;i < n ; i++ ){
        if( m [ str[ i ] ]< m [ str [ i+1 ] ]){
            result -= m[ str[i] ];
        } else {
            result += m[ str[i] ];
        }
    }
    cout << result << endl;
    return 0;
}