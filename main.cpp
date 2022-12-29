//
// Created by mohit on 29-12-2022.
//
#include "main.h"
#include "iostream"
#include "stdio.h"
#include "conio.h"
#include "math.h"

using namespace std;

void pattern1(int, int);
//* * * * *
//* * * * *
//* * * * *

void pattern2(int);
//*
//* *
//* * *
//* * * *

void pattern3(int);
//* * * *
//* * *
//* *
//*

void pattern4(int);
//1
//1 2
//1 2 3
//1 2 3 4
//1 2 3 4 5

void pattern5(int);
//*
//* *
//* * *
//* *
//*

void pattern28(int);
//   *
//  * *
// * * *
//* * * *
// * * *
//  * *
//   *

void pattern30(int);
//      1
//    2 1 2
//  3 2 1 2 3
//4 3 2 1 2 3 4

void pattern17(int);
//      1
//    2 1 2
//  3 2 1 2 3
//4 3 2 1 2 3 4
//  3 2 1 2 3
//    2 1 2
//      1

void pattern31(int);
// Regular Pattern
//0 0 0 0 0
//0 1 1 1 0
//0 1 2 1 0
//0 1 1 1 0
//0 0 0 0 0
// Opposite pattern
//2 2 2 2 2
//2 1 1 1 2
//2 1 0 1 2
//2 1 1 1 2
//2 2 2 2 2
int main()
{
    // Basic I/p
    int x,y;
    cout<<"Enter x";
    cin>>x;
    cout<<"Enter y";
    cin>>y;

//    // Pattern 1
//    pattern1(x,y);

//    // Pattern 2
//    pattern2(x);

//    // Pattern 3
//    pattern3(x);

//    // Pattern 4
//    pattern4(x);

//    // Pattern 5
//    pattern5(x);

//    // Pattern 28
//    pattern28(x);

//    // Pattern 30
//    pattern30(x);

//    // Pattern 17
//    pattern17(x);

//    // Pattern 31
//    pattern31(x);

    return 0;
}
void pattern1(int x, int y)
{   for(int i=1;i<=x;i++)
    {   for(int j=1;j<=y;j++)
        {   cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern2(int x)
{   for(int i=1;i<=x;i++)
    {   for(int j=1;j<=i;j++)
        {   cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern3(int x)
{   for(int i=1;i<=x;i++)
    {
//        for(int j=x;j>=i;j--)
//        {   cout<<"* ";
//        }
        for(int j=1;j<=x-i+1;j++)
        {   cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern4(int x)
{   for(int i=1;i<=x;i++)
    {   for(int j=1;j<=i;j++)
        {   cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern5(int x)
{   for(int i=0;i<2*x;i++)
    {   int totalCols = i>x?2*x-i : i;
        for(int j=0;j<totalCols;j++)
        {   cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern28(int x)
{   for(int i=0;i<2*x;i++)
    {   int totalCols = i>x?2*x-i : i;
        int spacesCols = x - totalCols;
        for(int j=0;j<spacesCols;j++)
        {   cout<<" ";

        }
        for(int j=0;j<totalCols;j++)
        {   cout<<"* ";
        }
        cout<<endl;
    }

}

void pattern30(int x)
{   for(int i=1;i<=x;i++)
    {   int spaces = x-i;
        for(int j=1;j<=spaces;j++)
        {   cout<<"  ";
        }
        for(int j=i; j>1;j--)
        {   cout<<j<<" ";
        }
        for(int j=1;j<=i;j++)
        {   cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern17(int x)
{   for(int i=1;i<=2*x;i++)
    {
//        int spaces = x-i;
        int colsTotal = i>x?2*x-i : i;
        for(int j=1;j< x - colsTotal;j++)
        {   cout<<"  ";
        }
        for(int j=colsTotal; j>1;j--)
        {   cout<<j<<" ";
        }
        for(int j=1;j<=colsTotal;j++)
        {   cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern31(int x)
{   int n = 2*x;
    for(int i=0;i<=n;i++)
    {   for(int j=0; j<=n;j++)
        {   int left = j;
            int right = n-j;
            int up = i;
            int down = n-i;
            int value = min(min(left, right), min(up, down));
//            cout<<value<<" ";     // for actual pattern
            cout<<x-value<<" ";     // for opposite pattern
        }
        cout<<endl;
    }

}
