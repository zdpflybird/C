#include<stdio.h>
void main()
{
    char str[ ]= "The C program" ,c;
    int i;
    for(i=2;(c=str[i])!='\0';i++)
    {
        switch(c)
        {
            case 'g': ++i; break;
            case 'o': continue;
            default: printf( "%c" ,c); continue;
        }
        printf( " * " );
    }
    printf( "\n" );
}

//-----------------
//#include <stdio.h>
//void main()
//{
//    int x=1,a=2,b=3;
//    switch (x)
//    {
//        case 1: a--; break;
//        case 2: b++;break;
//        case 3: a++;b++;
//    }
//    printf("\na=%d,b=%d\n",a,b);
//}
//-----------------
//#include <stdio.h>
//int main()
//{
//    int i,j;
//    i=1;
//    while (i<5)
//    {
//        for(j=1;j<2*i+1;++j)
//            printf("%c",'#');
//        printf("\n");
//        i++;
//    }
//    return 0;
//}
//-----------------
//#include <stdio.h>
//int main()
//{
//    int a,b;
////    for(a=1,b=1;a<=100;a++)
////    {
////        if (b>=9)
////            break;
////        if(b%3==1)
////        {
////            b+=3;
////            continue;
////        }
////        b-=5;
////    }
//    a=1;b=1;
//    while(a<=100)
//    {
//        if (b>=9)
//            break;
//        if(b%3==1)
//        {
//            b+=3;
//            continue;
//        }
//        b-=5;
//        a++;
//    }
//    printf("%d,%d\n",a,b);
//    return 0;
//}
//-----------------
//#include <stdio.h>
//int fun1(int x);
//void fun2(int x);
//int main()
//{
//    int x=1;
//    x=fun1(x);
//    printf("%d\n",x);
//    return 0;
//}
//int fun1(int x)
//{
//    x++;
//    fun2(x);
//    return x;
//}
//void fun2(int x)
//{
//    x++;
//}
//-----------------
//#include <stdio.h>
//void fun(int x);
//int main()
//{
//    fun(7);
//    printf("\n");
//    return 0;
//}
//void fun(int x)
//{
//    if(x/2>1)
//        fun(x/2);
//    printf("%5d",x);
//}
//-----------------
//#include <stdio.h>
//void mystrcpy(char s1[], char s2[]);
//void main()
//{
//    char a[50]="I am a teacher.";
//    char b[]="You are a student.";
//    printf("a=%s \n",a);
//    mystrcpy(a,b);
//    printf("a=%s \n",a);
//}
//void mystrcpy(char s1[],char s2[])
//{
//    int i=0;
//    while (s2[i]!='\0')
//    {
//        s1[i]=s2[i];
//        i++;
//    }
//    s1[i]='\0';
//}
//#include <stdio.h>
//void change1(int a,int b)
//{
//    int t;
//    t=a;
//    a=b;
//    b=t;
//}
//void change2(int *a,int *b)
//{
//    int t;
//    t=*a;
//    *a=*b;
//    *b=t;
//}
//void change3(int &a,int &b)
//{
//    int t;
//    t=a;
//    a=b;
//    b=t;
//}
//void main()
//{
//    int a=3,b=5;
//    change1(a,b);
//    printf("传值：a:%d,b:%d",a,b);
//    a=3;
//    b=5;
//    change2(&a,&b);
//    printf("传址：a:%d,b:%d",a,b);
//    a=3;
//    b=5;
//    change3(a,b);
//    printf("传引用：a:%d,b:%d",a,b);
//
//}
