# Day-5-of-100-days-of-code<br/>
### BIT WISE OPERATOR<br/>
- & - Bitwise AND
- | - Bitwise OR
- ~ - Bitwise NOT
- <<- Left shift
- >> - Right shift
- ^ - XOR<br/>
## BIT WISE AND OPERATOR
- It takes two bits at a time and perform AND operation . <br/> 
- AND (&) is binary operator. It takes two numbers and perform bitwise AND .<br/>
- Result of AND is 1 when both bits are 1.
  ![image](https://user-images.githubusercontent.com/76725996/115601982-0d16fa00-a2fc-11eb-9115-5b556578b080.png)<br/>
7 ----> 0 1 1 1<br/>
4 ----> 0 1 0 0<br/>
       ---------<br/>
4 ----> 0 1 0 0 <br/>
       ---------<br/>
## BIT WISE OR OPERATOR
- It takes two bits at a time and perform OR operation.<br/>
- OR(|) is binary operator. It takes two numbers and perform bitwise OR.<br/>
- Result of OR is 0 when both bits are 0.<br/>
![image](https://user-images.githubusercontent.com/76725996/115602983-3d12cd00-a2fd-11eb-99af-5b55e5c6ec10.png)<br/>
7 ----> 0 1 1 1<br/>
4 ----> 0 1 0 0<br/>
       ---------<br/>
7 ----> 0 1 1 1 <br/>
       ---------<br/>
## BIT WISE OR OPERATOR
- NOT is a unary operator.
- It is job is to complement each bit one by one .
- Result of NOT is 0 when bit is 1 and 1 when bit is 0.
https://www.google.com/url?sa=i&url=https%3A%2F%2Fprojectiot123.com%2F2019%2F05%2F24%2Fintroduction-to-not-gate%2F&psig=AOvVaw3o3JWW4L_BVCsqcuStvnLc&ust=1619116438086000&source=images&cd=vfe&ved=0CAIQjRxqFwoTCPCB2PT8j_ACFQAAAAAdAAAAABAR
## BIT WISE ~ OPERATOR
-Not is a unary operator
-It is job is to complement each bit.
-Result of NOT is 0 when bits is 1 and 1 when bits  bits is 0.
![image](https://user-images.githubusercontent.com/76725996/115604564-253c4880-a2ff-11eb-95c5-11708dfec961.png)<br/>

 7 ---> ~ 0 1 1 1 <br/>
 ------------------<br/>
 8 <--- 1 0 0 0 0<br/>
 ------------------<br/> 
###  DIFFERENCE BETWEEN LOGICAL & AND BITWISE &<br/>
#include<stdio.h><br>
int main()<br>
{<br/>
   int i = 1,j=2;//Binary Representation of 1 is 0000 0001 and 2 is 0000 0010<br/>
   if(i&j)<br/>//=>0000 0000 
     printf("Hello I am Bitwise &");<br/>
   if(i&&j)<br/>//=>1 && 2 ==> 1&&1 ==> 1
     printf("Hai I am Logical &&");<br/>
   return 0;<br/>
}<br/>
//Hai I am Logical &&
## Leftshift operator
First operand << Second operand<br/>
###➕ Formulae
- left operand * 2^right operand<br/>
## Rightshift operator
First operand >> Second operand<br/>
###➕ Formulae
- left operand / 2^right operand<br/>
###BITWISE XOR
- Either A is 1 or B is 1 then the output is 1 but when both A and B are 1 then output is 0.<br/>
- Excluding both 1 1 and 0 0.<br/>
7 ----> 0 1 1 1<br/>
4 ----> 0 1 0 0<br/>
       ---------<br/>
7 ----> 0 0 1 1 <br/>
       ---------<br/>
