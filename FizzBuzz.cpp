class Solution {
public:
    vector<string> fizzBuzz(int n) {
    vector<string> answer(n);
        
    for (int i = 0; i < n; i++)
      {
        int j = i+1;  
        if(j % 3 == 0 || j % 5 == 0)
          {
              if (j % 3 == 0 && j % 5 != 0)
                  answer[i] = "Fizz";
              else if (j % 5 == 0 && j % 3 != 0)
                  answer[i] = "Buzz";
              else if (j % 3 == 0 && j % 5 == 0)
                  answer[i] = "FizzBuzz";
          }
        
          else
              answer[i] = to_string(j);
              
      }
        return answer;
    }
};
