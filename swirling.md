<div align="center"> SWIRLING

Time limit per test case: 3 seconds

memory limit per test: 256 megabytes

input: standard input

output: standard output

<div align="left"> A school trip was organized to water park. But before the bus starts teacher ask a programming question .  The teacher provided a list of n numbers as a[0] a[1].....a[n-1] such that 1<=a[i]<=n and another list b[0] b[1]....b[n-1]
such that initially b[i]=i+1.Now we perform some operation.

In one operation a[i] represents that the number originally at a[i]-1th index in b is taken to i index this is done for 1<=i<=n. After performing this on all the n elements of b we get our new b.

For example a : 3 6 4 8 2 1 5 7
            b : 1 3 4 2 5 7 8 6
        
Then after transformation b: 4 7 2 6 3 1 5 8 . As a[0]=3 and the number at a[0]-1 index in b is 4 originally so 4 comes at 0th index
Now what is the minimum number of transformation we required to get back the b in ascending order. If the the number of transformation on b required are y.Then p=(2^y)mod1000000007

INPUT : Input has 2 lines. first line contains nuber of students n and second line contain n numbers the element of a.
1<=n<=1000

OUTPUT : print p