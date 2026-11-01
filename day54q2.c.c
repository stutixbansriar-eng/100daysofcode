#include <stdio.h>

enum days {
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main() {
    enum days d;
    
    for (d = Sunday; d <= Saturday; d++) {
        switch (d) {
            case Sunday:
printf("Sunday\n", d); break;
            case Monday:
printf("Monday\n", d); break;
            case Tuesday:
printf("Tuesday\n", d); break;
            case Wednesday:
printf("Thursday\n", d); break;
            case Friday:
printf("Friday\n", d); break;
            case Saturday:
printf("Saturday\n", d); break;
        }
    }
        
    return 0;
}
    
    