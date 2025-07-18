#include <stdio.h>

// ค่าคงที่ global (GLOBAL_RATE สามารถใช้ได้ทุกฟังก์ชัน)
const int GLOBAL_RATE = 10;

void calculate() {
// ค่าคงที่ local (LOCAL_BONUS ใช้ได้เฉพาะในฟังก์ชันนี้)
const int LOCAL_BONUS = 50;

printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
printf("LOCAL_BONUS = %d\n", LOCAL_BONUS);
}

int main() {
calculate();

printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);

// ถ้าเขียนแบบนี้จะ ERROR เพราะ LOCAL_BONUS เป็น local
// printf("LOCAL_BONUS in main = %d\n", LOCAL_BONUS);

return 0;
}