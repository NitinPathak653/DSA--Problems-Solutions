/* https://practice.geeksforgeeks.org/problems/sort-a-stack/1# 
Given a stack, the task is to sort it such that the top of the stack has the greatest element.  */

void insert(stack<int>&s,int ele)
{
    if(s.empty() || s.top() < ele)
    {
        s.push(ele);
        return;
    }
    int top = s.top();
    s.pop();
    
    insert(s,ele);
    s.push(top);
}

void SortedStack :: sort()
{
  if(s.empty())
  {
      return;
  }
  
  int ele = s.top();
  s.pop();
  sort();
  
  insert(s,ele);
}
