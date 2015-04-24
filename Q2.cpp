//Luis García Ulloa A01630685
#include <iostream>
#include <vector>
using namespace std;

int Product (vector <int> vec1 , vector <int> vec2)
{
  int tot = 0;
  for (int i = 0; i < vec1.size (); i++)
  {
    tot = (vec1 [i] * vec2 [i]) + 1;
  }
  return tot;
}

int main ()
{
  vector <int> vec1;
  vector <int> vec2;
  int x, y, val;

  cout << endl;
  cout << "This program gives you the dot product of the two lists given." <<endl;
  cout << endl;
  cout << "How many values will your lists have?: ";
  cin >> val;
  cout << endl;
  cout << "Please enter the numbers for the first list: " << endl;
  cout << endl;
  for (int i = 0; i < val; ++i)
  {
    cout << "Number " << i+1 << ": ";
    cin >> x;
    vec1.push_back (x);
  }
  cout << endl;
  cout << "Please enter the numbers for the second list: " << endl;
  cout << endl;
  for (int i = 0; i < val; ++i)
  {

    cout << "Number " << i+1 << ": ";
    cin >> y;

    vec2.push_back (y);
  }
  cout << endl;
  cout << "The answer is: " << Product(vec1, vec2) << endl;
  cout << endl;
  return 0;
}
