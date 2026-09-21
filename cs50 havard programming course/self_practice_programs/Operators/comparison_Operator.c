 #include <stdio.h>

 //comparison operators

// int main() {
//   int x = 5;
//   int y = 3;
//   printf("%d", x > y); // returns 1 (true) because 5 is greater than 3
//   return 0;
// }

// int main(){
//   int x = 5;
//   int y = 10;
//   printf("%d", x == y);
//   return 0;
// }

// int main(){
//   int x = 5;
//   int y = 10;
//   printf("%d", x != y);
//   return 0;
// }


// int main(){
//   int x = 5;
//   int y = 10;
//   printf("%d", x <= y);
//   return 0;
// }


//LOGICAL OPERATORS

// int main() {
//   int x = 5;
//   int y = 3;
  
//   // Returns 1 (true) because 5 is greater than 3 AND 5 is less than 10
//   printf("%d", x > 3 && x < 10);
//   return 0;
// }

// int main(){
//   int x = 5;
//   int y = 3;

//   //returns 0 cause 1 condition is wrong 
//   printf("%d", x < 3 || x > 10);
//   return 0;
// }

int main() {
  int x = 5;
  int y = 3;

  //returns 1 cause the condition is true
  printf("%d", !(x < 3 && x > 10));
  return 0;
}

