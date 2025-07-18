#include <stdio.h>

int main() {
// ประกาศตัวแปรเก็บตัวอักษรตัวแรกของชื่อ (char ใช้เก็บตัวอักษร 1 ตัว)
char nameInitial = 'J';

// ประกาศตัวแปรเก็บอายุ (int ใช้เก็บเลขจำนวนเต็ม)
int age = 18;

// ประกาศตัวแปรเก็บน้ำหนัก (float ใช้เก็บเลขทศนิยม)
float weight = 50;

// ประกาศตัวแปรเก็บเพศ (char array/string ใช้เก็บข้อความ)
char gender[] = "Female";

// แสดงผลค่าตัวแปรทั้งหมด
printf("nameInitial = %c\n", nameInitial);
printf("age = %d\n", age);
printf("weight = %.2f\n", weight);
printf("gender = %s\n", gender);
return 0;
}