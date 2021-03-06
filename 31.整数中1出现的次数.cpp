/*
题目：
求出1~13的整数中1出现的次数,并算出100~1300的整数中1出现的次数？为此他特别数了一下1~13中包含1的数字有1、10、11、12、13
因此共出现6次,但是对于后面问题他就没辙了。
ACMer希望你们帮帮他,并把问题更加普遍化,可以很快的求出任意非负整数区间中1出现的次数（从1 到 n 中1出现的次数）。
解析：
判断一个整数中1的个数，因为数字均为正，对于一个十进制数字而言，%10即可获取最低位。
/10可以获取高位。所以对整数n，判断低位是否为1，移位，持续判断，直到整数n为0，即可获取
整数中1的个数。
对于n，从1开始循环执行上述函数并求和即可。
*/
class Solution {
public:
    int NumberOf1Between1AndN_Solution(int n)
    {
        int res=0;
        for(int i=1;i<=n;i++)
            res+=findOne(i);//循环求和
        return res;
    }
    int findOne(int n)
    {
        int res=0;
        while(n>0)//整形正数的除法，终点是0
        {
            if(n%10==1)
                res++;//判断最低位
            n=n/10;//获取高一位
        }
        return res;
    }
};
