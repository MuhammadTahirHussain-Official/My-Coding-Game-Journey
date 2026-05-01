#include <iostream>
#include <array>
using namespace std;

// int sum(const std::array<int,5>& arr){
//     int total{};
//     for(auto i : arr){
//         total += i;
//     }
//     return total;
// }

// int main()
// {
//     std::array<int,5> arr {1,2,3,4,5};
//     int total = sum(arr);
//     cout << "The sum of the array is : " << total << endl;
// }

int sum(int (&arr)[5]){
    int total{};
    for(auto i : arr){
        total += i;
    }
    return total;
}

int main(){
    int arr[] {1,2,3,4,5};
    int total = sum(arr);
    cout << total;
}



