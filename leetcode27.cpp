//数组内存是连续的，只能覆盖
#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
//1.两层for循环，一个for循环遍历数组元素 ，第二个for循环更新数组，删除一个元素时将后面的数组整体向前移动一位
// 2.双指针法 快指针（fastIndex）：寻找新数组元素，新数组就是目标元素的数组
//           慢指针(slowindex)：指向更新 新数组下标的位置
int removeElement(vector<int>& nums, int val) {
    int n=nums.size();
    for(int i=0;i<n;i++){
        if(nums[i]==val){
            for(int j=i+1;j<n;j++){
                nums[j-1]=nums[j];
            }
            i--;
            n--;
        }
    }
    return n;
    }

int main(){
    vector<int> nums={3,2,2,3};
    int val=2;
    int a=removeElement(nums,val);
    cout<<a<<endl;
    for(int i=0;i<a;i++){
        cout<<nums[i]<<endl;
    }
    return 0;
}
