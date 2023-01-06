#include <stdio.h>
/**
 * 4.1 选择语句if-else
 *  Ⅰ、关系表达式和逻辑表达式
 *      > 算术运算符的优先级高于关系运算符，关系运算符的优先级高于逻辑运算符，相同优先级的运算符从左至右进行结合。
 *      > 表达式 5>3&&8<4-!0的计算过程：
 *          5>3逻辑值为1 -> !0的逻辑值为1 -> 4-1值为3 -> 8<3逻辑值为0 -> 1&&0逻辑值为0
 *  Ⅱ、if-else语句：
 *      单分支语句：if(条件表达式)
 *                   语句1;
 *                else
 *                   语句2;
 *      多分支语句：无论有多少个if语句或else if语句，程序都只会执行其中的一个语句。
 *          if(表达式1)
 *              语句1;
 *          else if(表达式2)
 *              语句2;
 *          else if(表达式3)
 *              语句3;
 *            ...
 *          else if(表达式m)
 *              语句m;
 *          else
 *              语句n;
 *      if语句的多层嵌套：在if语句中又包含一个或多个if语句
 *          if()
 *              if() 语句1; 内嵌if
 *              else() 语句2;
 *          else()
 *              if() 语句3; 内嵌if
 *              else() 语句4;
 * */
int main() {
    //单分支语句：判断输入值是否大于0
    int i;
    while(scanf("%d",&i)){
        if(i>0){ //不要在括号后加分号(;)
            printf("i is bigger than 0\n");
        }else{
            printf("i is not bigger than 0\n");
        }
    }

    //多分支语句：关于用电量的例子：
    int cost,number;
    scanf("%d",&number);
    if(number>500){
        cost=0.15;
    }else if(number>300){
        cost=0.10;
    }else if(number>100){
        cost=0.075;
    }else if(number>50){
        cost=0.05;
    }else{
        cost=0;
    }

    //if多层嵌套：
    if(i>1){
        if(i<10)
            printf("i>1 and i<10\n");
    }else{
        printf("no,they are not\n");
    }
    return 0;
}
