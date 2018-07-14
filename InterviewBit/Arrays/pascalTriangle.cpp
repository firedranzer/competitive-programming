//https://www.interviewbit.com/problems/pascal-triangle/

vector<vector<int> > Solution::generate(int A) {
    vector<vector<int>> arr(A); // An auxiliary vector to store generated pscal triangle values
  // Iterate through every line and print integer(s) in it
  for (int line = 0; line < A; line++)
  {
    // Every line has number of integers equal to line number
    for (int i = 0; i <= line; i++)
    {
      // First and last values in every row are 1
      if (line == i || i == 0)
           arr[line].push_back(1);
      else // Other values are sum of values just above and left of above
        {   
            int res = arr[line-1][i-1] + arr[line-1][i];
            arr[line].push_back(res);
        }
    }
  }
  return arr;
}
