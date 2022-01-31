#include <iostream>
#include <array>

using namespace std;

int main(void)
{
    array<int,6> sp={1,2,3,4,5,6};
    cout << sp.at(2) <<endl;   // at 等于 [] operator，但会抛出exception如果越界，因此更安全。
    sp.at(4) = 10;             // at返回的是对应元素引用，可以当作左值赋值。
    cout << sp.back() <<endl;  // back 返回容器末端的元素。
    cout << sp.front() <<endl; // front 返回第一个元素。
    cout << sp.max_size() <<endl; // 最大元素数量
    cout << sp.size() <<endl; // 返回元素数量，和max_size等价，是<>中第二个模板参数。
    // sp.swap(sp2); 将两个array中的元素交换（必须两个模板参数都相同，即同数据类型，同size）。

    array<int,6>::iterator arr_itr_b = sp.begin();  // 以下皆可用auto来代替类型
    array<int,6>::iterator arr_itr_e = sp.end();    // begin,end指向开头和结尾，end是指向末端后一位。

    array<int,6>::reverse_iterator arr_r_itr_b = sp.rbegin();  // reverse iterator
    array<int,6>::reverse_iterator arr_r_itr_e = sp.rend();

    array<int,6>::const_iterator arr_c_itr_b = sp.cbegin(); //  cbegin,cend 使得指向的元素不可更改
    array<int,6>::const_iterator arr_c_itr_e = sp.cend(); 

    array<int,6>::const_reverse_iterator arr_cr_itr_b = sp.crbegin();  // const reverse iterator
    array<int,6>::const_reverse_iterator arr_cr_itr_e = sp.crend();

    auto arr = sp.data();          // 得到其普通数组版本数据的第一个元素地址
    cout << *(arr+5) << endl;      // print 6-th element of array. 

    if(sp.empty())                 // 检查array是否为空
        cout << "emtpy！" <<endl;
    else 
        cout << "Non empty!" <<endl;

    sp.fill(4);                   // 用4 fill整个array
    for(auto k:sp){
        cout << k << endl;
    }


}