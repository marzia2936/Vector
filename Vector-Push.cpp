#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> marks= {1,2,4,5,6,7,8};
    marks.push_back(5); // value insert at last
    marks[3]=10;        //value insert by giving position in index number
    for(int i = 0; i < marks.size() ; i++)
    {
        cout << "marks[" << i << "] = " << marks[i] << endl;
    }
    return 0;
}
