---
num: "lect07"
desc: "Midterm preparation and overview / More functions and debugging"
ready: true
pdfurl: ""
lecture_date: 2019-01-29 
---

Converting the example from the slides to accept the user input from the command line.
*Note that the program will crash if no additional command-line arguments (other than the name of the executable) are provided!*

```c++
// mult_cl.cpp
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int sum = 0;
    int n = -1;

    n = atoi(argv[1]);

    for(int i = 1; i < n; i++)
    {
        if ((i % 3 == 0) || (i % 5 == 0))
        {
            sum += i;
        }
    }
    cout << "The sum is " << sum << endl;
    return 0;
}
```


Converting the example from the slides to use a function and provide a more elaborate output.

```c++
// mult_funct_n.cpp
#include <iostream>
using namespace std;

int compute_sum(int limit)
{
    int sum = 0;

	for(int i = 1; i < limit; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}

    return sum;
}

int main()
{
   int n = -1;
	cout << "Enter n: ";
	cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout <<"i = " << i << " The sum is " << compute_sum(i) << endl;
    }
	return 0;
}
```


