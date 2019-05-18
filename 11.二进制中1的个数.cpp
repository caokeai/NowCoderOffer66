/*
题目：
输入一个整数，输出该数二进制表示中1的个数。其中负数用补码表示。
解析：
任何一个数&1，表示取最低位，左移或右移，直到最高位，就可以判断二进制中1的个数。
注意，正数右移的终点是0，但是负数右移没有终点，-2>>1=-4。
所以只有正数可以使用0作为右移的终点，对于负数，可以使用整形的大小，如int型为32位。
无论是否到最高位，一直右移32位即可。
*/
class Solution {
public:
     int  NumberOf1(int n) {
         int res=0;
         for(int i=0;i<32;i++)
         {
             if(n&1==1)
                 res++;
             n=n>>1;
         }
         return res;
     }
};
