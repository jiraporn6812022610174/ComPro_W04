#include <stdio.h>

void countCall() {
static int counter = 0; // ตัวแปร static: ค่าไม่ถูกรีเซ็ตเมื่อเรียกฟังก์ชันใหม่
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