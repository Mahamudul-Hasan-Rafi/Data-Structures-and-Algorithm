void insertToStack(stack<int> &stack, int x)
{
    if(stack.empty() || stack.top()<x)
        stack.push(x);
    else{
        int a=stack.top();
        stack.pop();
        insertToStack(stack, x);
        stack.push(a);
    }
}
void sortRecursion(stack<int> &stack)
{
    if(stack.empty())
        return;
    
    int x=stack.top();
    stack.pop();
    sortRecursion(stack);
    insertToStack(stack, x);
}
void sortStack(stack<int> &stack)
{
	sortRecursion(stack);
}
