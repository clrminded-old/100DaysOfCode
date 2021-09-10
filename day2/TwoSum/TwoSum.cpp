#include <iostream>
#include <vector>

using namespace std;

/*
Write a function that takes in a non empty array of distinct integers
and an integer representing a target sum.
*/

vector<int> twoNumberSum(vector<int> array, int targetSum) {
  // Write your code here.
  for( int i = 0; i < array.size() - 1; i++)
  {
      int firstNum = array[i];
      for(int j = i + 1; j < array.size(); j++)
      {
          int secondNum = array[j];
          if(firstNum + secondNum == targetSum)
          {
              return vector<int> {firstNum, secondNum};
          }
      }
  }
return {};
}

int main() 
{
    vector<int> array = {3, 5, -4, 8, 11, -1, 6};
    vector<int> result = twoNumberSum(array, 10);
    cout << result[0] << ", " << result[1] << endl;
}