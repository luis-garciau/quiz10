# quiz10
//Luis García Ulloa A01630685
#include <iostream>
#include <vector>
using namespace std;

long findThrees(vector <long> vec)
{
  long sum;
  for (long i = 0; i < vec.size (); i++)
  {
    if ((vec [i] % 3) == 0)
  {
      sum = vec [i]+ sum;
    }}
  return sum;
}

int main (){
  long x, num;
  vector <long> list;
  cout << endl;
  cout << "This program asks for a list of values and prints out the sum of those" <<endl;
  cout << "that are divisible by 3." <<endl;
  cout << endl;
  cout << "How many values will you use?: ";
  cin>> x;
  cout << endl;
  for (long i=0; i<x; i++)
  {
    cout<< "Number " << i+1 << ": ";
    cin>> num;
    list.push_back(num);
    cout<< endl;
  }
  cout << "The sum of the values from the list that are divisible by 3 is: " << findThrees(list) << endl;
  cout << endl;
  return 0;
}
