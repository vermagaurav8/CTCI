#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}// } Driver Code Ends
/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void SortedStack :: sort()
{
   //Your code here
    stack<int> temp;
   
    int t;
    
    while(!s.empty()){
        t = s.top();
        s.pop();
        
        if(temp.empty()){
            temp.push(t);
        }else{
            
            if(temp.top()>t){
                while(temp.top()>t ){
                    s.push(temp.top());
                    temp.pop();
                    
                    if(temp.empty()) break;

                }
                
                temp.push(t);
            }else{
                temp.push(t);
            }
        }
    }
    
    s.swap(temp);
    
}