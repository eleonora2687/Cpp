//Trikidou Eleonora

/*Write a C++ program that prompts the user to enter the size of a one-dimensional array of type integer. The program then does the following:
- Reads positive integers into the array
- Prints the array
- Calculates and prints the average of the array
- Prints numbers greater than or equal to the average
- Prints the greatest and the smallest numbers
- Prints even numbers
- Prints odd numbers
*/

//Sample Input/Output:
//Enter the size of the Array: 10
//Enter integer values for an Array of size 10: 0 19 15 25 30 23 12 6 44 17
//
//Array: 0 19 15 25 30 23 12 6 44 17
//Average of the Array is 19.1
//6 numbers are less or equal to 20.1 and 4 numbers are greater than 20.1
//Greatest number is 44 and Smallest number is 0
//Even numbers: 0 30 12 6 44
//Odd numbers: 19 15 25 23 17

#include <iostream>

using namespace std;

int main()
{
    int size, sum=0, even, odd, j=0, k=0;
    float aver, less_or_eq=0, gr=0;
	 cout << "Enter the size of the Array: ";
	 cin >> size;


	 int *Array = new int[size], max, min;

    cout << "Enter integer values for an Array of size "<< size<<":"<<endl;

	for(int i = 0; i < size; i++)
	{
	   cin >> Array[i];
	   sum+=Array[i];

	}
   max=Array[0];
   min=Array[0];


	for(int i = 0; i < size; i++)
	{
	   if(i==0)
         cout << "Array: "<< Array[i];
      else
         cout <<" "<<Array[i];
	}

    cout << endl;

    aver=sum/10.0;

    cout << "Average of the Array is "<<aver<<endl;

    for(int i = 0; i < size; ++i)
    {
       if(Array[i]<=aver)
         less_or_eq+=1;
       else
         gr+=1;
    }

    cout << less_or_eq <<" numbers are less or equal to " << aver<<" and 4 numbers are greater than "<<aver;

    for(int i = 1; i < size; ++i)
    {
       if(max<Array[i])
         max=Array[i];

      if(min>Array[i])
         min=Array[i];

    }

     cout << endl;
     cout <<"Greatest number is " << max << " and Smallest number is "<< min <<endl;

    for(int i = 0; i < size; ++i)
    {
       if(Array[i]%2==0 && j==0)
         {
            even=Array[i];
            cout <<"Even numbers: "<< even;
            j++;
         }
       else if(Array[i]%2==0)
          {
               even=Array[i];
               cout <<" "<< even;
          }

    }
    cout << endl;

    for(int i = 0; i < size; i++)
    {
       if(Array[i]%2==1 && k==0)
         {
            odd=Array[i];
            cout <<"Odd numbers: "<< odd;
            k++;
         }
       else if(Array[i]%2==1)
       {
            odd=Array[i];
            cout <<" "<< odd;
       }

    }
    cout << endl;

    delete[] Array;

    return 0;
}
