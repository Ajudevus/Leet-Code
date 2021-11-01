# Leet-Code
1. 3.Sum
  The problem requires you to return vector of triplet vector whose sum of intergers equals 0. 
  Two - pointer approach
  -> Sort the array.
  -> intialise two variables l, r and set their indexes to i+i, r. Where i (starts from 0) and r (n-1).
  -> When l < r:
  -> check whether the sum of nums[i] ,nums[l], nums[r] equals 0
  ->if it does add it to a set. Using set here would eliminate the duplicate elements.
  -> if the sum is greater than 0, then decrement 'r' else increment l;
  -> Add all the vector in the set to anoter vector and return triplet vector
