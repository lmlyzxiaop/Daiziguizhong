
昨天看到这题，有大佬 @冒. 。o 〇泡 马上想到了

![](http://chart.googleapis.com/chart?cht=tx&chl=\Large%20q+%3D+%5Cfrac%7B%28%5Csqrt5+%2B+1%29%7D%7B2%7D)

![](http://chart.googleapis.com/chart?cht=tx&chl=\Large%20q%5E%7B2%7D+%3D+q+%2B+1)

![](http://chart.googleapis.com/chart?cht=tx&chl=\Large%20q%5E%7Bn%2B1%7D+%2B+q%5E%7Bn%7D+%3D%3E+q%5E%7Bn%7D%28q+%2B+1%29+%3D%3E+q%5E%7Bn%7D%28q%5E%7B2%7D%29+%3D%3E+q%5E%7Bn%2B2%7D)

因此有
> xxx011xxx === xxx100xxx

最简单的解法应该是
```
// 伪代码
while "100" in str:
str = str.replace("100", "011")

cmp(str1, str2)
```
[引用: 齐肯多夫定理][1]
> 齐肯多夫定理表示任何正整数都可以表示成若干个不连续的斐波那契数之和。这种和式称为齐肯多夫表述法。
> 对于任何正整数，其齐肯多夫表述法都可以用贪心算法选出每回最大可能的斐波那契数



Note: 以下内容不使用 Cpp 的可以不看
由于 c++ string.find() 的实现大都效率很慢，O(n*m)（看具体平台实现），因此当输入参数长度较大时，会导致超时。
因此得自己想办法处理 "011" 和 "100" 的问题

[C++ string::find complexity][2]

[1]: https://zh.wikipedia.org/wiki/%E9%BD%8A%E8%82%AF%E5%A4%9A%E5%A4%AB%E5%AE%9A%E7%90%86
[2]: https://stackoverflow.com/questions/8869605/c-stringfind-complexity
