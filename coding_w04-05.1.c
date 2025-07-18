#include <stdio.h>

void countCall() {
int counter = 0; // ตัวแปรธรรมดา (non-static): จะรีเซ็ตค่าใหม่ทุกครั้งที่เรียกฟังก์ชัน
counter++;
printf("Call Function: Counter = %d\n", counter);
}

int main() {
printf("Starting function calls...\n");
countCall(); // เรียกครั้งที่ 1
printf("After first call:\n");
countCall(); // เรียกครั้งที่ 2
return 0;
}