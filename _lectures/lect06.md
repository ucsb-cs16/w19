---
num: "lect06"
desc: "Relative vs absolute path; `switch` statement"
ready: false
lecture_date: 2019-01-24
---

```c++
#include <iostream>
#include <string>

using namespace std;

int main (){
    char answer = 'z';

    do {
        cout << " Yes or no?" << endl;
        cin >> answer;

        switch(answer)
        {
            case 'Y':
            case 'y':
                cout << "You said Yes! " << answer << endl;
                break;
            case 'N':
            case 'n':
                cout << "You said No! " << answer << endl;
                break;
            default:
                cout << "default" << endl;
        }
    } while ((answer != 'q') && (answer != 'Q'));

    cout << "Goodbye!" << endl;

    return 0;
}
```
