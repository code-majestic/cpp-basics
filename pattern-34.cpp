#include <iostream>
using namespace std;
int main()
{
    /* for (int i = 1; i <= 4; i++)
     {
         for (int j = 1; j <= i; j++) //(error: j > = i)
         {
             cout << j << " ";
         }
         cout << endl;
     }
 }

/*-----------------------------------------------------------------
//question 2

        for (int i = 1; i <= 5; i++)
        {
            for (int j = 5; j >= i; j--)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }

*-------------------------------------------------------------
    // question .3

    int i = 1;
    while (i <= 4)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
        i++;
    }
}

*----------------------------------------------------------------
    // question .4

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " "; //(error: j)
        }
        cout << endl;
    }
}

*-----------------------------------------------------------
// question .5

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 5 - i; j++)
        {
            cout << j << " "; //(error: i)
        }
        cout << endl;
    }
}

*--------------------------------------------------------
    // question .6

        for (int i = 1; i <= 4; i++)
        {
            for (int s = 4; s >= i; s--)//(error: s = 1; s < = i; s++)
            {
                cout << " ";
            }
            for (int j = 1; j <= i; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }

 *--------------------------------------------------------
    // question .7

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++) //(error: j=4; j>=i; j--)        {
            cout << "* ";
        }
        cout << endl;
    }

    *-------------------------------------------------------------
    // question .8

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        for (int j = i-1; j >= 1; j--) //(error: (int j=i; j>=1; j--))
        {
            cout << j << "  ";
        }
        cout << endl;
    }
}

*-----------------------------------------------------------------------
    // question .9

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    for (int i = 2; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++) //(error: j < i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

*----------------------------------------------------------------
//question 10.

for (int i = 4; i >= 1; i--) {
 for (int s = 1; s <= i; s++) {
 cout << " ";
 }
 for (int j = i; j <= 4; j++) {
cout<<"* ";
 }
 cout<<endl;
}
}

*---------------------------------------------------------------------
//question 11.

for(int i=1; i<=3; i++){
    for(int j=1; j<=i; j++){
        cout<< "* ";
    }
    cout<<endl;
    }
    for(int i=2; i>=1; i--){ //(error: i < = 1)
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

*------------------------------------------------------------------
    // question 12.

    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
        if(i==1 || i==n || j==1 || j==n)//(error:  && )
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}

*-----------------------------------------------------------------
    // question 13.

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j<<" "; //(error: cout << j;)
        }
        cout << endl;
    }
}

*-------------------------------------------------------------
    // question 14.

    for (int i = 4; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++) //(error: j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

*-----------------------------------------------------------
    // question 15.

    for (int i = 1; i <= 4; i++)
    {
        for (int s = 4; s >= i; s--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j<<" ";
        }
        cout << endl;
    }
}

 #include <iostream>
   using namespace std;
   int main()
   {
     for (int i = 5; i >= 1; i-=2)
     {
         for (int s = 1; s <= (5 - i); s++)
         {
             cout << " ";
         }
         for (int j = 1; j <= i; j++)
         {
             cout << "* ";
         }
         cout << endl;
     }
     for (int i = 3; i <= 5; i += 2)
     {
         for (int s = 1; s <= (5 - i); s++)
         {
             cout << " ";
         }
         for (int j = 1; j <= i; j++)
         {
             cout << "* ";
         }
         cout << endl;
     }
 }

    //*----------------------------------------------------------------
    // question 2.

    int i, j, s;
    for (i = 1; i <= 4; i++)
    {
        for (s = i; s <= 4; s++) //(error: )
            cout << " ";
        for (j = 1; j <= i; j++)
            cout << "* ";
        cout << endl;
    }
    for (i = 3; i >= 1; i--)
    {
        for (s = 4; s >= i; s--) //(error: s=1; s>=i; s++)
            cout << " ";
        for (j = 1; j <= i; j++)
            cout << "* ";
        cout << endl;
    }
}

    //*------------------------------------------------------------------------
    // question 3.

   /*for (int i = 1; i <= 4; i++)
    {
        for (int s = 1; s <= 4 - i; s++)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << j <<" ";    //(error: cout << j;)
        for (int j = i - 1; j >= 1; j--)
            cout << j <<" ";   //(error: cout << j;)
        cout << endl;
    }
}

    //*----------------------------------------------------------------
    // question 4.

    int n = 5;
    for (int i = 1; i <= n * 2 - 1; i++)
    {
        for (int j = 1; j <= n * 2 - 1; j++)
        {
            if (j == i || j == (n * 2 - i))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}*/

//*-------------------------------------------------------------
//question 5.

int n = 5;
 for (int i = 1; i <= n; i++) {
 for (int s = i; s <= 4; s++) { //( s = 1; s <= i; s++)
 cout << "  ";
 }
 for (int j = 1; j <= i; j++) {
 cout << j << " ";
 }
 for (int j = i - 1; j >= 1; j--) {
 cout << j << " ";
 }
 cout<<endl;
}
}
